# SMS 224/240-line bench (issue #45). From this directory:
#   ./run.sh [standard|hz120|both]   (default both)
# Assembles the homebrew mode-switch ROM (sms224.asm -> smslines.bin,
# verifying the R1 224/240 sequence), builds the pre-tall-mode baseline scaler
# for the 192-line pixel-identical check, then runs tb_smslines in each
# variant: frame-buffer contents, Integer/Full geometry with scanlines
# off/on, halt entry lines, and the 192/GG baseline compare.
set -e
DOCKER_RUN=${DOCKER_RUN:-$(command -v simrun >/dev/null 2>&1 && echo simrun || echo "docker run --rm")}
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

python3 assemble.py

mkdir -p build
# Last integration revision before the tall-mode scaler was merged. A moving
# int/round7 now has smode inputs which the historical reference leaves open.
BASE_REF=5c0702eefd968c518751a8adad4476873e77e96b
if ! git -C "$ROOT" cat-file -e "$BASE_REF:src/sms2hdmi.sv" 2>/dev/null; then
  git -C "$ROOT" fetch origin "$BASE_REF"
fi
git -C "$ROOT" show "$BASE_REF:src/sms2hdmi.sv" \
  | sed -e 's/^module sms2hdmi (/module sms2hdmi_base (/' > build/sms2hdmi_base.sv
grep -q '^module sms2hdmi_base (' build/sms2hdmi_base.sv

for V in $VARIANTS; do
  if [ "$V" = hz120 ]; then
    echo "--- smslines ($V, 480p120)"
  else
    echo "--- smslines ($V, 720p)"
  fi
  IV="$DOCKER_RUN --name ${SIM_PREFIX:-sim$$}_smslines_$V --user $(id -u):$(id -g) -v $ROOT:/w -w /w/sim/smslines tangcore-iv:1"
  INC="-I $RTL/variant/$V"
  $IV sh -c "iverilog -g2012 $INC -o build/tb_smslines_$V.out tb_smslines.v build/sms2hdmi_base.sv $SCN/hdmi_stub.v $RTL/sms2hdmi.sv $RTL/scanlines.v $RTL/video_fx.v && vvp build/tb_smslines_$V.out"
done
echo "run.sh: PASS"
