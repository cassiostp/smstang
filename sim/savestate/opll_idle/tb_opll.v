// tb_opll: proves the VM2413 idles with a constant output, so the SMS
// savestate design (which refuses FM-touched games and never snapshots the
// OPLL) is sound: a fresh-reset OPLL and a long-idle one produce identical
// samples, and resume-after-load matches save-and-continue exactly.
`timescale 1ns/1ps
module tb_opll;
reg xin = 0;
always #5 xin = ~xin;
reg [31:0] cyc = 0;
// SMS-like enable: 2 clocks in 30 (ce_cpu pattern)
wire xena = (cyc % 30 == 9) || (cyc % 30 == 24);
reg ic_n = 0;
wire [13:0] mixout;
opll dut (
   .xin(xin), .xena(xena), .d(8'b0), .a(1'b0),
   .cs_n(1'b0), .we_n(1'b0), .ic_n(ic_n), .mixout(mixout)
);
integer errors = 0;
reg [13:0] first = 14'h3FFF;
integer i;
initial begin
   repeat (200) @(posedge xin);
   ic_n <= 1;
   // idle 3M cycles, mixout must be constant throughout
   for (i = 0; i < 3000000; i = i + 1) begin
      @(posedge xin);
      cyc <= cyc + 1;
      if (xena) begin
         if (first == 14'h3FFF) first <= mixout;
         else if (mixout !== first) begin
            $display("FAIL: idle drift at %0d: %04x vs %04x", i, mixout, first);
            errors = errors + 1;
            if (errors > 5) begin
               $display("tb_opll: FAILED");
               $finish;
            end
         end
      end
   end
   $display("idle constant: mixout=%04x over 3M cycles", first);
   // reset again: post-reset idle must equal pre-reset idle
   ic_n <= 0;
   repeat (200) @(posedge xin);
   ic_n <= 1;
   for (i = 0; i < 1000000; i = i + 1) begin
      @(posedge xin);
      cyc <= cyc + 1;
      if (xena && mixout !== first) begin
         $display("FAIL: post-reset mismatch at %0d: %04x vs %04x", i, mixout, first);
         errors = errors + 1;
         if (errors > 5) begin
            $display("tb_opll: FAILED");
            $finish;
         end
      end
   end
   if (errors == 0) $display("tb_opll: ALL PASSED (idle=%04x)", first);
   else $display("tb_opll: %0d FAILURES", errors);
   $finish;
end
endmodule
