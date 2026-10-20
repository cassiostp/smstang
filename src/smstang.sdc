
create_clock -name clk_sys -period 18.62 -waveform {0 9.31} [get_nets {clk_sys}]

# Relax T80 timing constraints
set_multicycle_path 2 -setup -start -from [get_pins {system/z80_inst/**/*}] -to [get_clocks {clk_sys}]
set_multicycle_path 1 -hold -start -from [get_pins {system/z80_inst/**/*}] -to [get_clocks {clk_sys}]

# Relax the save-state engine outputs (ss_a/img_q/mem_* handshake, freeze
# and reset strobes). The engine only drives these while the machine is
# frozen, and every consumer samples them many cycles after they settle
# (UART-paced taken/ready handshakes; the register scan holds ss_a stable
# for hundreds of clocks per byte; bulk reads wait rd_lat on top), so a
# 2-cycle setup is conservative. Game timing is untouched (ss_freeze is 0
# unless a transfer runs). Same shape as the T80 relax above.
set_multicycle_path 2 -setup -start -from [get_pins {ss_engine/**/*}] -to [get_clocks {clk_sys}]
set_multicycle_path 1 -hold -start -from [get_pins {ss_engine/**/*}] -to [get_clocks {clk_sys}]
