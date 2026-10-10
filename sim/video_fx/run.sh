#!/bin/sh
# video_fx sims (iverilog). From this directory:  ./run.sh
#   tb_iosys_video_config  iosys command 0x13
#   tb_video_fx     video_fx against the golden model (model.py)
#   tb_sms_regress  sms2hdmi against the scaler before video_fx: identical with no filter on
#   tb_sms_fx       the filters inside sms2hdmi, checked against the model
# prep.sh (python3, git) makes the vectors and the baseline; with a simulator image that has
# neither, run prep.sh on the host first and `python3 -I model.py check sms_fx.log` after.
set -e
cd "$(dirname "$0")"
RTL=../../src
HDMI=../scanlines/hdmi_stub.v
if command -v python3 >/dev/null 2>&1 && command -v git >/dev/null 2>&1; then
    sh prep.sh
fi
test -f vec_case.hex -a -f build/sms2hdmi_base.sv

iverilog -g2012 -DSIM -o tb_iosys_video_config.out tb_iosys_video_config.v $RTL/iosys/iosys_bl616.v $RTL/iosys/uart_fixed.v
vvp tb_iosys_video_config.out

iverilog -g2012 -o tb_video_fx.out tb_video_fx.v $RTL/video_fx.v $RTL/scanlines.v
vvp tb_video_fx.out

iverilog -g2012 -o tb_sms_regress.out tb_sms_regress.v $HDMI $RTL/sms2hdmi.sv $RTL/scanlines.v \
    $RTL/video_fx.v build/sms2hdmi_base.sv build/scanlines_base.v
vvp tb_sms_regress.out

iverilog -g2012 -o tb_sms_fx.out tb_sms_fx.v $HDMI $RTL/sms2hdmi.sv $RTL/scanlines.v $RTL/video_fx.v
vvp tb_sms_fx.out
if command -v python3 >/dev/null 2>&1; then
    python3 -I model.py check sms_fx.log
else
    echo "NOTE: python3 not found, run: python3 -I model.py check sms_fx.log"
fi
