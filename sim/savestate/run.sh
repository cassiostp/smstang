# Savestate A/B bench for smstang (issue: save states phase 2, SMS).
# From this directory: ./run.sh
# Builds the homebrew program (gen_prog.py -> prog.hex), lints under
# iverilog, then runs tb_ss under Verilator --binary (iverilog is ~1000x too
# slow on this machine-heavy core): save@40 -> run to 75  vs  reset -> run
# to 40 -> load -> run to 75 (per-frame video/audio identity, endpoint RAMs,
# byte-identical re-saves), plus a corrupt-header reject, an NVRAM rollback
# check, and the real-OPLL idle constancy proof (opll_idle/).
set -e
cd "$(dirname "$0")"
ROOT=$(cd ../.. && pwd)
RTL=/w/src
python3 gen_prog.py
cp "$ROOT/src/mboot.hex" ./mboot.hex
mkdir -p build
SRCS="tb_ss.v /w/src/system.v /w/src/video.v /w/src/vdp.v /w/src/vdp_main.v /w/src/vdp_background.v /w/src/vdp_sprites.v /w/src/vdp_sprite_shifter.v /w/src/vdp_cram.v /w/src/io.v /w/src/audiomix.v /w/src/spram.v /w/src/dpram.v /w/src/sprom.v /w/src/MC8123.v /w/src/SEGASYS1_PRGDEC.v /w/src/parts.v /w/src/cheatcodes.sv /w/src/savestate_sms.v /w/src/jt89/jt89.v /w/src/jt89/jt89_tone.v /w/src/jt89/jt89_noise.v /w/src/jt89/jt89_vol.v /w/src/jt89/jt89_mixer.v /w/src/t80/t80.v /w/src/t80/t80s.v /w/src/t80/t80_reg.v /w/src/t80/t80_mcode.v /w/src/t80/t80_alu.v /w/src/vm2413_verilog/vm2413.sv /w/src/vm2413_verilog/attacktable.sv /w/src/vm2413_verilog/controller.sv /w/src/vm2413_verilog/envelopegenerator.sv /w/src/vm2413_verilog/envelopememory.sv /w/src/vm2413_verilog/feedbackmemory.sv /w/src/vm2413_verilog/lineartable.sv /w/src/vm2413_verilog/operator.sv /w/src/vm2413_verilog/opll.sv /w/src/vm2413_verilog/outputgenerator.sv /w/src/vm2413_verilog/outputmemory.sv /w/src/vm2413_verilog/phasegenerator.sv /w/src/vm2413_verilog/phasememory.sv /w/src/vm2413_verilog/registermemory.sv /w/src/vm2413_verilog/sinetable.sv /w/src/vm2413_verilog/slotcounter.sv /w/src/vm2413_verilog/temporalmixer.sv /w/src/vm2413_verilog/voicememory.sv /w/src/vm2413_verilog/voicerom.sv"
echo "--- lint (iverilog, OPLL stub) ---"
simrun --name r6sssms_lint --user $(id -u):$(id -g) -v "$ROOT:/w" -w /w/sim/savestate tangcore-iv:1 sh -c "iverilog -g2012 -o build/tb_ss.lint opll_stub.v tb_ss.v ../../src/system.v ../../src/video.v ../../src/vdp.v ../../src/vdp_main.v ../../src/vdp_background.v ../../src/vdp_sprites.v ../../src/vdp_sprite_shifter.v ../../src/vdp_cram.v ../../src/io.v ../../src/audiomix.v ../../src/spram.v ../../src/dpram.v ../../src/sprom.v ../../src/MC8123.v ../../src/SEGASYS1_PRGDEC.v ../../src/parts.v ../../src/cheatcodes.sv ../../src/savestate_sms.v ../../src/jt89/jt89.v ../../src/jt89/jt89_tone.v ../../src/jt89/jt89_noise.v ../../src/jt89/jt89_vol.v ../../src/jt89/jt89_mixer.v ../../src/t80/t80.v ../../src/t80/t80s.v ../../src/t80/t80_reg.v ../../src/t80/t80_mcode.v ../../src/t80/t80_alu.v 2>&1 | grep -v 'sorry\|Anachronistic\|Port [0-9]\|Padding\|Pruning' | head -n 10; exit 0"
echo "--- build + run (Verilator --binary, real OPLL) ---"
simrun --name r6sssms_ver --user $(id -u):$(id -g) -v "$ROOT:/w" -w /w/sim/savestate --entrypoint sh verilator/verilator:latest -c "verilator --binary --top-module tb_ss --prefix Vtb_ss -Mdir build/vobj -Wno-PINMISSING -Wno-IMPLICIT -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC -Wno-CASEINCOMPLETE -Wno-UNUSEDSIGNAL -Wno-UNUSEDPARAM $SRCS && ./build/vobj/Vtb_ss > build/run.log 2>&1"
if grep -a -q "tb_ss: ALL PASSED" build/run.log; then
  echo "run.sh: PASS"
else
  echo "run.sh: FAIL"
  exit 1
fi
