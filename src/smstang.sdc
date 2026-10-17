
create_clock -name clk_sys -period 18.57 -waveform {0 9.29} [get_nets {clk_sys}]   // 53.8462 MHz (120 Hz build: 50x28/26)

# Relax T80 timing constraints
set_multicycle_path 2 -setup -start -from [get_pins {system/z80_inst/**/*}] -to [get_clocks {clk_sys}]
set_multicycle_path 1 -hold -start -from [get_pins {system/z80_inst/**/*}] -to [get_clocks {clk_sys}]
