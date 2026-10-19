#!/bin/sh
# Frame-lock sims (run from this directory, or from the repo root as
# sh sim/framelock/run.sh [standard|hz120|both], default both).
# Standard (720p):
#   tb_native_pos   native line length keeps the 1280x720 picture (iverilog)
#   tb_frame_lock   the real sms2hdmi against the cycle-exact VDP model over
#                   ~10 NTSC frames with a menu pause and a game-reload reset
#                   (iverilog, scanlines on)
#   fl_top          the same DUT and model over ~400 frames with pauses and a
#                   reset (Verilator, scanlines off), plus short soaks in the
#                   224-line, 240-line and Game Gear modes
# hz120 (480p120): the same benches at twice the console rate: tb_frame_lock
#                   runs in BFI modes 0, 1 and 2; the soak checks each game
#                   frame is read twice (lit + inserted) at full scale.
# Afterwards (host): python3 sim/framelock/check_audio.py [--hz120]
#   sim/framelock/build/audio_hdmi_sms.hex sim/framelock/build/tb_sms.log
set -e
VARIANT=${1:-both}
case $VARIANT in
  standard|hz120) VARIANTS=$VARIANT;;
  both) VARIANTS="standard hz120";;
  *) echo "usage: $0 [standard|hz120|both]"; exit 1;;
esac
cd "$(dirname "$0")"
ROOT=$(cd ../.. && pwd)
RTL=../../src
SCN=../scanlines
# Runner: simrun when present (persistent ccache + full-core env), else plain docker.
DOCKER_RUN=${DOCKER_RUN:-$(command -v simrun >/dev/null 2>&1 && echo simrun || echo "docker run --rm")};
for V in $VARIANTS; do
if [ "$V" = hz120 ]; then
  echo "--- framelock ($V, 480p120)"
else
  echo "--- framelock ($V, 720p)"
fi
IV="$DOCKER_RUN --name ${SIM_PREFIX:-sim$$}_hz120vsms_lockiv_$V --user $(id -u):$(id -g) -v $ROOT:/w -w /w/sim/framelock tangcore-iv:1"
VLT="$DOCKER_RUN --name ${SIM_PREFIX:-sim$$}_hz120vsms_lockvlt_$V --user $(id -u):$(id -g) -v $PWD:/w -v $ROOT:/r -w /w verilator/verilator:latest"
# (verilator resolves file arguments against -Mdir, so absolute paths)
VSRC=/r/src
VSCN=/r/sim/scanlines
VINC="-I$VSRC/variant/$V"
INC="-I $RTL/variant/$V"

$IV sh -c "iverilog -g2012 $INC -o build_pos.out tb_native_pos.v $SCN/hdmi_stub.v $RTL/sms2hdmi.sv $RTL/scanlines.v $RTL/video_fx.v && vvp build_pos.out"
if [ "$V" = hz120 ]; then
for BFI in 0 1 2; do
$IV sh -c "iverilog -g2012 $INC -DBFI_MODE=$BFI -o build_lock$BFI.out tb_frame_lock.v sms_frame_model.v $SCN/hdmi_stub.v $RTL/sms2hdmi.sv $RTL/scanlines.v $RTL/video_fx.v && vvp build_lock$BFI.out"
done
else
$IV sh -c "iverilog -g2012 $INC -o build_lock.out tb_frame_lock.v sms_frame_model.v $SCN/hdmi_stub.v $RTL/sms2hdmi.sv $RTL/scanlines.v $RTL/video_fx.v && vvp build_lock.out"
fi

mkdir -p build
# the real hdmi.sv counting in both modes (DVI: same counters, no audio
# packet logic, which neither iverilog nor this Verilator can elaborate)
VLT_HDMI="$DOCKER_RUN --name ${SIM_PREFIX:-sim$$}_hz120vsms_lockvhdmi_$V --user $(id -u):$(id -g) -v $PWD:/w -v $ROOT:/r -w /w verilator/verilator:latest"
$VLT_HDMI --binary --timing -j 20 --top-module tb_hdmi_native -Mdir build/hdminat_$V \
  -Wno-PINMISSING -Wno-IMPLICIT -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC -Wno-CASEINCOMPLETE -Wno-UNUSEDSIGNAL -Wno-UNDRIVEN -Wno-COMBDLY -Wno-ALWCOMBORDER \
  $VINC /w/tb_hdmi_native.v /w/gowin_stubs.v /r/src/hdmi2/hdmi.sv /r/src/hdmi2/serializer.sv /r/src/hdmi2/tmds_channel.sv \
  > build/hdminat_$V.log 2>&1
$DOCKER_RUN --name "${SIM_PREFIX:-sim$$}_hz120vsms_lockvh_$V" --user "$(id -u):$(id -g)" -v "$PWD:/w" -w /w --entrypoint ./build/hdminat_$V/Vtb_hdmi_native verilator/verilator:latest \
  >> build/hdminat_$V.log 2>&1
grep -q "tb_hdmi_native: PASS" build/hdminat_$V.log

if [ "$V" = hz120 ]; then
CFLAGS="-O2 -DHZ120"
else
CFLAGS="-O2"
fi
$VLT --cc --top-module fl_top --prefix Vfl_top -Mdir build/obj_$V -CFLAGS "$CFLAGS" \
  -Wno-PINMISSING -Wno-IMPLICIT -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC -Wno-CASEINCOMPLETE -Wno-UNUSEDSIGNAL -Wno-UNDRIVEN \
  $VINC /w/fl_top.sv /w/sms_frame_model.v $VSRC/sms2hdmi.sv $VSCN/hdmi_stub.v $VSRC/scanlines.v $VSRC/video_fx.v \
  --exe /w/tb_frame_lock.cpp > build/verilate_$V.log 2>&1 || { cat build/verilate_$V.log; exit 1; }
if grep -E "fl_top|tb_frame_lock|sms_frame_model" build/verilate_$V.log; then echo "new warnings in sim files:"; cat build/verilate_$V.log; exit 1; fi
$DOCKER_RUN --name "${SIM_PREFIX:-sim$$}_hz120vsms_lockmake_$V" --user "$(id -u):$(id -g)" -v "$PWD:/w" -v "$ROOT:/r" -w /w --entrypoint make verilator/verilator:latest \
  -C build/obj_$V -f Vfl_top.mk -j20 > build/make_$V.log 2>&1 || { tail -30 build/make_$V.log; exit 1; }
if [ "$V" = hz120 ]; then
# 138K-only: the hz120 variant's sys PLL (50*28/26) cannot lock a 60K-style rate;
# the 120 Hz bitstream is console138k-only, like the NES 480p120 reference.
# Logs land in build/hz120/ (the harness writes tb_<tag>.log next to itself).
mkdir -p build/hz120
$DOCKER_RUN --name "${SIM_PREFIX:-sim$$}_hz120vsms_locksms" --user "$(id -u):$(id -g)" -v "$PWD:/w" -w /w/build/hz120 --entrypoint ../obj_hz120/Vfl_top verilator/verilator:latest \
  sms || { tail -20 build/hz120/tb_sms.log; exit 1; };
grep -q "^tb_frame_lock: PASS" build/hz120/tb_sms.log
for cfg in sms224 sms240 gg; do
  $DOCKER_RUN --name "${SIM_PREFIX:-sim$$}_hz120vsms_lock_$cfg" --user "$(id -u):$(id -g)" -v "$PWD:/w" -w /w/build/hz120 --entrypoint ../obj_hz120/Vfl_top verilator/verilator:latest \
    $cfg $cfg short || { tail -20 build/hz120/tb_$cfg.log; exit 1; }
  grep -q "^tb_frame_lock: PASS" build/hz120/tb_$cfg.log
done
else
# both boards share the 50 MHz crystal and the same PLL dividers, so one
# clock config covers console138k and console60k
$DOCKER_RUN --name "${SIM_PREFIX:-sim$$}_hz120vsms_lockrun" --user "$(id -u):$(id -g)" -v "$PWD:/w" -w /w/build --entrypoint ./obj_standard/Vfl_top verilator/verilator:latest \
  sms || { tail -20 build/tb_sms.log; exit 1; };
grep -q "^tb_frame_lock: PASS" build/tb_sms.log
for cfg in sms224 sms240 gg; do
  $DOCKER_RUN --name "${SIM_PREFIX:-sim$$}_hz120vsms_lockrun_$cfg" --user "$(id -u):$(id -g)" -v "$PWD:/w" -w /w/build --entrypoint ./obj_standard/Vfl_top verilator/verilator:latest \
    $cfg $cfg short || { tail -20 build/tb_$cfg.log; exit 1; }
  grep -q "^tb_frame_lock: PASS" build/tb_$cfg.log
done
fi
done
echo "run.sh: PASS (then on the host: python3 check_audio.py build/audio_hdmi_sms.hex build/tb_sms.log"
echo "  and: python3 check_audio.py --hz120 build/hz120/audio_hdmi_sms.hex build/hz120/tb_sms.log)"
