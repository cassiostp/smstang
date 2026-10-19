#!/bin/sh
# video_fx sims (iverilog in tangcore-iv:1). From this directory:
# ./run.sh [standard|hz120|both] (default both)
# Standard (720p): the full bench set against the git-history goldens, which
# must still match pixel for pixel:
#   tb_iosys_video_config  iosys command 0x13
#   tb_video_fx     video_fx against the golden model (model.py)
#   tb_sms_regress  sms2hdmi against the scaler before video_fx: identical with no filter on
#   tb_sms_fx       the filters inside sms2hdmi, checked against the model
#   tb_smooth_regress  sms2hdmi against the scaler before smoothing: identical, bits 19:18 ignored
# hz120 (480p120): tb_iosys_video_config and tb_video_fx run for real (their
# RTL is variant-free); the three sms2hdmi benches only elaborate, since
# their history baselines hardcode the 720p geometry. The 480p picture is
# covered instead by sim/scanlines (whole frames vs the model, both Scales,
# scanlines on/off, overlay) and sim/framelock (lock, tags, BFI, audio).
# prep.sh (python3, git) makes the vectors and the baselines; with a simulator image that has
# neither, run prep.sh on the host first and `python3 -I model.py check sms_fx.log` after.
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
HDMI=../scanlines/hdmi_stub.v
# Runner: simrun when present (persistent ccache + full-core env), else plain docker.
DOCKER_RUN=${DOCKER_RUN:-$(command -v simrun >/dev/null 2>&1 && echo simrun || echo "docker run --rm")};
if command -v python3 >/dev/null 2>&1 && command -v git >/dev/null 2>&1; then
    sh prep.sh
fi
test -f vec_case.hex -a -f build/sms2hdmi_base.sv -a -f build/sms2hdmi_fx.sv

for V in $VARIANTS; do
IV="$DOCKER_RUN --name ${SIM_PREFIX:-sim$$}_hz120vsms_fx_$V --user $(id -u):$(id -g) -v $ROOT:/w -w /w/sim/video_fx tangcore-iv:1"
INC="-I $RTL/variant/$V"
if [ "$V" = hz120 ]; then
  echo "--- video_fx ($V, 480p120)"
else
  echo "--- video_fx ($V, 720p)"
fi

$IV sh -c "iverilog -g2012 $INC -DSIM -o tb_iosys_video_config.out tb_iosys_video_config.v $RTL/iosys/iosys_bl616.v $RTL/iosys/uart_fixed.v && vvp tb_iosys_video_config.out"

$IV sh -c "iverilog -g2012 $INC -o tb_video_fx.out tb_video_fx.v $RTL/video_fx.v $RTL/scanlines.v && vvp tb_video_fx.out"

if [ "$V" = hz120 ]; then
  # history baselines are 720p: elaborate only (the BFI hookup must compile)
  $IV sh -c "iverilog -g2012 $INC -o tb_sms_regress.out tb_sms_regress.v $HDMI $RTL/sms2hdmi.sv $RTL/scanlines.v $RTL/video_fx.v build/sms2hdmi_base.sv build/scanlines_base.v && echo elaborate-ok"
  $IV sh -c "iverilog -g2012 $INC -o tb_sms_fx.out tb_sms_fx.v $HDMI $RTL/sms2hdmi.sv $RTL/scanlines.v $RTL/video_fx.v && echo elaborate-ok"
  $IV sh -c "iverilog -g2012 $INC -o tb_smooth_regress.out tb_smooth_regress.v $HDMI $RTL/sms2hdmi.sv $RTL/scanlines.v $RTL/video_fx.v build/sms2hdmi_fx.sv && echo elaborate-ok"
else
$IV sh -c "iverilog -g2012 $INC -o tb_sms_regress.out tb_sms_regress.v $HDMI $RTL/sms2hdmi.sv $RTL/scanlines.v $RTL/video_fx.v build/sms2hdmi_base.sv build/scanlines_base.v && vvp tb_sms_regress.out"

$IV sh -c "iverilog -g2012 $INC -o tb_sms_fx.out tb_sms_fx.v $HDMI $RTL/sms2hdmi.sv $RTL/scanlines.v $RTL/video_fx.v && vvp tb_sms_fx.out"

$IV sh -c "iverilog -g2012 $INC -o tb_smooth_regress.out tb_smooth_regress.v $HDMI $RTL/sms2hdmi.sv $RTL/scanlines.v $RTL/video_fx.v build/sms2hdmi_fx.sv && vvp tb_smooth_regress.out"
if command -v python3 >/dev/null 2>&1; then
    python3 -I model.py check sms_fx.log
else
    echo "NOTE: python3 not found, run: python3 -I model.py check sms_fx.log"
fi
fi
done
echo "run.sh: PASS"
