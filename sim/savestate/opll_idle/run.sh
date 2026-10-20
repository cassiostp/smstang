# OPLL idle-constancy check (Verilator): the real VM2413 must idle with a
# constant output, and reset must return it to the same output. From this
# directory: ./run.sh
set -e
cd "$(dirname "$0")"
ROOT=$(cd ../../.. && pwd)
simrun --name r6sssms_opll --user $(id -u):$(id -g) -v "$ROOT:/w" -w /w/sim/savestate/opll_idle --entrypoint sh verilator/verilator:latest -c "verilator --binary --top-module tb_opll --prefix Vtb_opll -Mdir build/obj -Wno-PINMISSING -Wno-IMPLICIT -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC -Wno-CASEINCOMPLETE -Wno-UNUSEDSIGNAL -Wno-UNUSEDPARAM tb_opll.v /w/src/vm2413_verilog/vm2413.sv /w/src/vm2413_verilog/attacktable.sv /w/src/vm2413_verilog/controller.sv /w/src/vm2413_verilog/envelopegenerator.sv /w/src/vm2413_verilog/envelopememory.sv /w/src/vm2413_verilog/feedbackmemory.sv /w/src/vm2413_verilog/lineartable.sv /w/src/vm2413_verilog/operator.sv /w/src/vm2413_verilog/opll.sv /w/src/vm2413_verilog/outputgenerator.sv /w/src/vm2413_verilog/outputmemory.sv /w/src/vm2413_verilog/phasegenerator.sv /w/src/vm2413_verilog/phasememory.sv /w/src/vm2413_verilog/registermemory.sv /w/src/vm2413_verilog/sinetable.sv /w/src/vm2413_verilog/slotcounter.sv /w/src/vm2413_verilog/temporalmixer.sv /w/src/vm2413_verilog/voicememory.sv /w/src/vm2413_verilog/voicerom.sv && ./build/obj/Vtb_opll"
echo "run.sh: PASS"
