#!/bin/sh
# Scanline sims (iverilog in tangcore-iv:1). From this directory:
# ./run.sh [standard|hz120|both] (default both)
#   tb_scanlines    the row generator and the darkening (src/scanlines.v)
#   tb_sms_scaler   sms2hdmi whole frames, with a stub for the HDMI part
# Each variant compiles the RTL with its own src/variant/<variant>, which the
# files that differ `` `include `` (`define HZ120 for hz120).
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
for V in $VARIANTS; do
  IV="docker run --rm --name hz120vsms_scn_$V --user $(id -u):$(id -g) -v $ROOT:/w -w /w/sim/scanlines tangcore-iv:1"
  INC="-I $RTL/variant/$V"
  if [ "$V" = hz120 ]; then
    echo "--- scanlines ($V, 480p120)"
  else
    echo "--- scanlines ($V, 720p)"
  fi
  $IV sh -c "iverilog -g2012 $INC -o tb_scanlines.out tb_scanlines.v $RTL/scanlines.v && vvp tb_scanlines.out"
  $IV sh -c "iverilog -g2012 $INC -o tb_sms_scaler.out tb_sms_scaler.v hdmi_stub.v $RTL/sms2hdmi.sv $RTL/scanlines.v $RTL/video_fx.v && vvp tb_sms_scaler.out"
done
echo "run.sh: PASS"
