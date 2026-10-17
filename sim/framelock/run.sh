#!/bin/sh
# Frame-lock sims at 480p120 (run from this directory, or from the repo root as
# sh sim/framelock/run.sh).
#   tb_native_pos   standard-vs-native line lengths (858 vs 858) keep the
#                   720x480 picture (iverilog)
#   tb_frame_lock   the real sms2hdmi vs a cycle-exact VDP over ~14 NTSC frames
#                   with a menu pause and a game-reload reset (iverilog,
#                   scanlines on), in BFI modes 0, 1 and 2
#   fl_top          the same DUT and model over ~400 frames with pauses and a
#                   reset (Verilator, scanlines off), plus short soaks in the
#                   224-line, 240-line and Game Gear (soft smoothing) modes
# Afterwards (host): python3 sim/framelock/check_audio.py sim/framelock/build
set -e
cd "$(dirname "$0")"
ROOT=$(cd ../.. && pwd)
RTL=../../src
SCN=../scanlines
IV="docker run --rm --name r6hz120sms_lockiv --user $(id -u):$(id -g) -v $ROOT:/w -w /w/sim/framelock tangcore-iv:1"
VLT="docker run --rm --name r6hz120sms_lockvlt --user $(id -u):$(id -g) -v $PWD:/w -v $ROOT:/r -w /w verilator/verilator:latest"
# (verilator resolves file arguments against -Mdir, so absolute paths)
VSRC=/r/src
VSCN=/r/sim/scanlines

$IV sh -c "iverilog -g2012 -o build_pos.out tb_native_pos.v $SCN/hdmi_stub.v $RTL/sms2hdmi.sv $RTL/scanlines.v $RTL/video_fx.v $RTL/smooth.v && vvp build_pos.out"
for BFI in 0 1 2; do
$IV sh -c "iverilog -g2012 -DBFI_MODE=$BFI -o build_lock$BFI.out tb_frame_lock.v sms_frame_model.v $SCN/hdmi_stub.v $RTL/sms2hdmi.sv $RTL/scanlines.v $RTL/video_fx.v $RTL/smooth.v && vvp build_lock$BFI.out"
done

mkdir -p build
# the real hdmi.sv counting in DVI mode (same counters, no audio
# packet logic, which neither iverilog nor this Verilator can elaborate)
VLT_HDMI="docker run --rm --name r6hz120sms_lockvhdmi --user $(id -u):$(id -g) -v $PWD:/w -v $ROOT:/r -w /w verilator/verilator:latest"
$VLT_HDMI --binary --timing -j 20 --top-module tb_hdmi_native -Mdir build/hdminat \
  -Wno-PINMISSING -Wno-IMPLICIT -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC -Wno-CASEINCOMPLETE -Wno-UNUSEDSIGNAL -Wno-UNDRIVEN -Wno-COMBDLY -Wno-ALWCOMBORDER \
  /w/tb_hdmi_native.v /w/gowin_stubs.v /r/src/hdmi2/hdmi.sv /r/src/hdmi2/serializer.sv /r/src/hdmi2/tmds_channel.sv \
  > build/hdminat.log 2>&1
docker run --rm --name r6hz120sms_lockvh --user "$(id -u):$(id -g)" -v "$PWD:/w" -w /w --entrypoint ./build/hdminat/Vtb_hdmi_native verilator/verilator:latest \
  >> build/hdminat.log 2>&1
grep -q "tb_hdmi_native: PASS" build/hdminat.log

$VLT --cc --top-module fl_top --prefix Vfl_top -Mdir build/obj -CFLAGS "-O2" \
  -Wno-PINMISSING -Wno-IMPLICIT -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC -Wno-CASEINCOMPLETE -Wno-UNUSEDSIGNAL -Wno-UNDRIVEN \
  /w/fl_top.sv /w/sms_frame_model.v $VSRC/sms2hdmi.sv $VSCN/hdmi_stub.v $VSRC/scanlines.v $VSRC/video_fx.v $VSRC/smooth.v \
  --exe /w/tb_frame_lock.cpp > build/verilate.log 2>&1 || { cat build/verilate.log; exit 1; }
if grep -E "fl_top|tb_frame_lock|sms_frame_model" build/verilate.log; then echo "new warnings in sim files:"; cat build/verilate.log; exit 1; fi
docker run --rm --name r6hz120sms_lockmake --user "$(id -u):$(id -g)" -v "$PWD:/w" -v "$ROOT:/r" -w /w --entrypoint make verilator/verilator:latest \
  -C build/obj -f Vfl_top.mk -j20 > build/make.log 2>&1 || { tail -30 build/make.log; exit 1; }
# 138K-only: the 120 Hz build's sys PLL (50*28/26) cannot lock a 60K-style rate;
# the 120 Hz bitstream is console138k-only, like the NES 480p120 reference
docker run --rm --name r6hz120sms_locksms --user "$(id -u):$(id -g)" -v "$PWD:/w" -w /w/build --entrypoint ./obj/Vfl_top verilator/verilator:latest \
  sms || { tail -20 build/tb_sms.log; exit 1; };
grep -q "^tb_frame_lock: PASS" build/tb_sms.log
for cfg in sms224 sms240 gg; do
  docker run --rm --name r6hz120sms_lock_$cfg --user "$(id -u):$(id -g)" -v "$PWD:/w" -w /w/build --entrypoint ./obj/Vfl_top verilator/verilator:latest \
    $cfg $cfg short || { tail -20 build/tb_$cfg.log; exit 1; }
  grep -q "^tb_frame_lock: PASS" build/tb_$cfg.log
done
echo "run.sh: PASS (then on the host: python3 check_audio.py build/audio_hdmi_sms.hex build/tb_sms.log ...)"
