
create_clock -name clk_sys -period 18.62 -waveform {0 9.31} [get_nets {clk_sys}]

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
set_multicycle_path 2 -setup -from [get_pins {ss_engine/ss_a[9] ss_engine/ss_a[8] ss_engine/ss_a[7] ss_engine/ss_a[6] ss_engine/ss_a[5] ss_engine/ss_a[4] ss_engine/ss_a[3] ss_engine/ss_a[2] ss_engine/ss_a[1] ss_engine/ss_a[0]}] -to [get_pins {ss_engine/img_q[7] ss_engine/img_q[6] ss_engine/img_q[5] ss_engine/img_q[4] ss_engine/img_q[3] ss_engine/img_q[2] ss_engine/img_q[1] ss_engine/img_q[0]}]
set_multicycle_path 1 -hold -from [get_pins {ss_engine/ss_a[9] ss_engine/ss_a[8] ss_engine/ss_a[7] ss_engine/ss_a[6] ss_engine/ss_a[5] ss_engine/ss_a[4] ss_engine/ss_a[3] ss_engine/ss_a[2] ss_engine/ss_a[1] ss_engine/ss_a[0]}] -to [get_pins {ss_engine/img_q[7] ss_engine/img_q[6] ss_engine/img_q[5] ss_engine/img_q[4] ss_engine/img_q[3] ss_engine/img_q[2] ss_engine/img_q[1] ss_engine/img_q[0]}]
