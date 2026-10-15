#!/bin/sh
# Frame-lock sims (run from this directory, or from the repo root as
# sh sim/framelock/run.sh).
#   tb_native_pos   native line length keeps the 1280x720 picture (iverilog)
#   tb_frame_lock   the real sms2hdmi against the cycle-exact VDP model over
#                   ~10 NTSC frames with a menu pause and a game-reload reset
#                   (iverilog, scanlines on)
#   fl_top          the same DUT and model over ~400 frames with pauses and a
#                   reset (Verilator, scanlines off)
# Afterwards (host): python3 sim/framelock/check_audio.py sim/framelock/build
set -e
cd "$(dirname "$0")"
ROOT=$(cd ../.. && pwd)
RTL=../../src
SCN=../scanlines
IV="docker run --rm --name nativerate_sms_iv --user $(id -u):$(id -g) -v $ROOT:/w -w /w/sim/framelock tangcore-iv:1"
VLT="docker run --rm --name nativerate_sms_vlt --user $(id -u):$(id -g) -v $PWD:/w -v $ROOT:/r -w /w verilator/verilator:latest"
# (verilator resolves file arguments against -Mdir, so absolute paths)
VSRC=/r/src
VSCN=/r/sim/scanlines

$IV sh -c "iverilog -g2012 -o build_pos.out tb_native_pos.v $SCN/hdmi_stub.v $RTL/sms2hdmi.sv $RTL/scanlines.v $RTL/video_fx.v $RTL/smooth.v && vvp build_pos.out"
$IV sh -c "iverilog -g2012 -o build_lock.out tb_frame_lock.v sms_frame_model.v $SCN/hdmi_stub.v $RTL/sms2hdmi.sv $RTL/scanlines.v $RTL/video_fx.v $RTL/smooth.v && vvp build_lock.out"

# the real hdmi.sv counting in both modes (DVI: same counters, no audio
# packet logic, which neither iverilog nor this Verilator can elaborate)
VLT_HDMI="docker run --rm --name nativerate_sms_vhdmi --user $(id -u):$(id -g) -v $PWD:/w -v $ROOT:/r -w /w verilator/verilator:latest"
$VLT_HDMI --binary --timing -j 20 --top-module tb_hdmi_native -Mdir build/hdminat \
  -Wno-PINMISSING -Wno-IMPLICIT -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC -Wno-CASEINCOMPLETE -Wno-UNUSEDSIGNAL -Wno-UNDRIVEN -Wno-COMBDLY -Wno-ALWCOMBORDER \
  /w/tb_hdmi_native.v /w/gowin_stubs.v /r/src/hdmi2/hdmi.sv /r/src/hdmi2/serializer.sv /r/src/hdmi2/tmds_channel.sv \
  > build/hdminat.log 2>&1
grep -q "tb_hdmi_native: PASS" build/hdminat.log

mkdir -p build
$VLT --cc --top-module fl_top --prefix Vfl_top -Mdir build/obj -CFLAGS "-O2" \
  -Wno-PINMISSING -Wno-IMPLICIT -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC -Wno-CASEINCOMPLETE -Wno-UNUSEDSIGNAL -Wno-UNDRIVEN \
  /w/fl_top.sv /w/sms_frame_model.v $VSRC/sms2hdmi.sv $VSCN/hdmi_stub.v $VSRC/scanlines.v $VSRC/video_fx.v $VSRC/smooth.v \
  --exe /w/tb_frame_lock.cpp > build/verilate.log 2>&1 || { cat build/verilate.log; exit 1; }
if grep -E "fl_top|tb_frame_lock|sms_frame_model" build/verilate.log; then echo "new warnings in sim files:"; cat build/verilate.log; exit 1; fi
docker run --rm --name nativerate_sms_make --user "$(id -u):$(id -g)" -v "$PWD:/w" -v "$ROOT:/r" -w /w --entrypoint make verilator/verilator:latest \
  -C build/obj -f Vfl_top.mk -j20 > build/make.log 2>&1 || { tail -30 build/make.log; exit 1; }
# both boards share the 50 MHz crystal and the same PLL dividers, so one
# clock config covers console138k and console60k
docker run --rm --name nativerate_sms_run --user "$(id -u):$(id -g)" -v "$PWD:/w" -w /w/build --entrypoint ./obj/Vfl_top verilator/verilator:latest \
  sms || { tail -20 build/tb_sms.log; exit 1; };
grep -q "^tb_frame_lock: PASS" build/tb_sms.log
echo "run.sh: PASS (then on the host: python3 check_audio.py build/audio_hdmi_sms.hex build/tb_sms.log)"
