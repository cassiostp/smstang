# Savestate A/B bench for smstang (issue: save states phase 2, SMS).
# From this directory: ./run.sh
# Builds the homebrew program (gen_prog.py -> prog.hex), then runs tb_ss in
# iverilog: save@40 -> run to 75  vs  reset -> run to 40 -> load -> run to 75
# (per-frame video/audio identity, endpoint RAMs, byte-identical re-saves),
# plus a corrupt-header reject and an NVRAM rollback check.
set -e
cd "$(dirname "$0")"
ROOT=$(cd ../.. && pwd)
RTL=../../src
python3 gen_prog.py
cp "$ROOT/src/mboot.hex" ./mboot.hex
mkdir -p build
IV="simrun --name r6sssms_savestate --user $(id -u):$(id -g) -v $ROOT:/w -w /w/sim/savestate tangcore-iv:1"
$IV sh -c "iverilog -g2012 -o build/tb_ss.out tb_ss.v \
  $RTL/system.v $RTL/video.v $RTL/vdp.v $RTL/vdp_main.v $RTL/vdp_background.v \
  $RTL/vdp_sprites.v $RTL/vdp_sprite_shifter.v $RTL/vdp_cram.v $RTL/io.v \
  $RTL/audiomix.v $RTL/spram.v $RTL/dpram.v $RTL/sprom.v $RTL/MC8123.v \
  $RTL/SEGASYS1_PRGDEC.v $RTL/parts.v $RTL/cheatcodes.sv $RTL/savestate_sms.v \
  $RTL/jt89/jt89.v $RTL/jt89/jt89_tone.v $RTL/jt89/jt89_noise.v \
  $RTL/jt89/jt89_vol.v $RTL/jt89/jt89_mixer.v \
  $RTL/t80/t80.v $RTL/t80/t80s.v $RTL/t80/t80_reg.v $RTL/t80/t80_mcode.v \
  $RTL/t80/t80_alu.v \
  && vvp build/tb_ss.out"
echo "run.sh: PASS"
