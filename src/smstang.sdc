
create_clock -name clk_sys -period 18.62 -waveform {0 9.31} [get_nets {clk_sys}]

# Relax T80 timing constraints
set_multicycle_path 2 -setup -start -from [get_pins {system/z80_inst/**/*}] -to [get_clocks {clk_sys}]
set_multicycle_path 1 -hold -start -from [get_pins {system/z80_inst/**/*}] -to [get_clocks {clk_sys}]

# Relax the save-state register readback (ss_engine ss_a -> img_q). This is
# a frozen-machine diagnostic mux: the engine holds ss_a stable from the
# read strobe until long after img_q is sampled (UART-paced, hundreds of
# clocks per byte; the taken/ready handshake spans many cycles), so a
# 2-cycle setup is conservative. Game timing is untouched (ss_freeze is 0
# unless a transfer runs). Same pattern as the T80 relax above.
set_multicycle_path 2 -setup -from [get_pins {ss_engine/ss_a[*]}] -to [get_pins {ss_engine/img_q[*]}]
set_multicycle_path 1 -hold -from [get_pins {ss_engine/ss_a[*]}] -to [get_pins {ss_engine/img_q[*]}]
