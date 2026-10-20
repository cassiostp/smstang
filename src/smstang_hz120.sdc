
create_clock -name clk_sys -period 18.57 -waveform {0 9.29} [get_nets {clk_sys}]   // 53.8462 MHz (hz120 variant: 50x28/26)

# Relax T80 timing constraints
set_multicycle_path 2 -setup -start -from [get_pins {system/z80_inst/**/*}] -to [get_clocks {clk_sys}]
set_multicycle_path 1 -hold -start -from [get_pins {system/z80_inst/**/*}] -to [get_clocks {clk_sys}]

# Relax ONLY the save-state register readback (ss_a -> img_q through the
# frozen-machine scan mux). The engine holds ss_a stable from the read
# strobe until long after img_q is sampled (UART-paced taken/ready
# handshake, hundreds of clocks per byte), so 2-cycle setup is
# conservative. Every other engine output (ss_freeze/ss_reset/ss_we/
# mem_*/ss_active/ss_loaded/ss_snd_rst/status) stays single-cycle: those
# strobes and selects act on specific cycles and must meet default timing.
set_multicycle_path 2 -setup -from [get_pins {ss_engine/**/*}] -to [get_pins {ss_engine/img_q*}]
set_multicycle_path 1 -hold -from [get_pins {ss_engine/**/*}] -to [get_pins {ss_engine/img_q*}]
