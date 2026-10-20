// OPLL stub for the iverilog bench only (the real vm2413_verilog sources
// use unpacked array parameters that iverilog cannot elaborate; the
// Verilator bench uses the real OPLL). FM-touched games refuse in v1.
// ---- OPLL stub ----
// The real OPLL (vm2413_verilog/*.sv, also built from VHDL) uses unpacked
// array parameters that iverilog cannot elaborate. FM-register writes
// refuse save states in v1 (fm_touched), so no supported game ever leaves
// the OPLL's reset-idle state; the stub holds that idle output (constant 0)
// while the bench proves the rest of the machine. Idle-output constancy of
// the real OPLL (fresh-reset vs long-idle) is proven separately with
// Verilator (see opll_idle/ below run.sh).
module opll(xin, xena, d, a, cs_n, we_n, ic_n, mixout);
   input xin, xena, cs_n, we_n, ic_n;
   input [7:0] d;
   input a;
   output [13:0] mixout;
   assign mixout = 14'b0;
endmodule
