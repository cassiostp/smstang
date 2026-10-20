// A simple audio mixer which avoids attenuation by clipping extremities
//
// Copyright 2020 by Alastair M. Robinson

module AudioMix(clk, reset_n, audio_in_l1, audio_in_l2, audio_in_r1, audio_in_r2, audio_l, audio_r, ss_a, ss_din, ss_we, ss_dout);
   input         clk;
   input         reset_n;
   input signed [15:0]  audio_in_l1;
   input signed [15:0]  audio_in_l2;
   input signed [15:0]  audio_in_r1;
   input signed [15:0]  audio_in_r2;
   output reg signed [15:0] audio_l;
   output reg signed [15:0] audio_r;
   // Save-state: the L/R toggle (no reset; frozen only, addr 0x3D)
   input [9:0] ss_a;
   input [7:0] ss_din;
   input ss_we;
   output [7:0] ss_dout;
   // Save-state readback, registered: one pipeline stage splits the
   // scan mux for timing (the engine waits the extra cycle via rdy).
   reg [7:0] ss_dout_q = 0;
   always @(posedge clk) ss_dout_q <= (ss_a == 10'h3D) ? {7'b0, toggle} : 8'b0;
   assign ss_dout = ss_dout_q;
   
   wire signed [15:0]   in1;
   wire signed [15:0]   in2;
   wire signed [16:0]   sum;
   wire                 overflow;
   wire signed [16:0]   clipped;
   reg                  toggle;
   
   assign in1 = (toggle == 1'b0) ? audio_in_l1 : audio_in_r1;
   assign in2 = (toggle == 1'b0) ? audio_in_l2 : audio_in_r2;
   
   assign sum = {in1[15], in1} + {in2[15], in2};
   assign overflow = sum[15] ^ sum[16];
   
   assign clipped = (overflow == 1'b0) ? sum : {17{sum[16]}};
   // toggle free-runs L/R; reset defines the phase (the port was
   // connected but unused -- without it L/R swap is nondeterministic).
   always @(posedge clk) begin
      if (!reset_n)
         toggle <= 1'b0;
      else if (ss_we && ss_a == 10'h3D)
         toggle <= ss_din[0];
      else begin
         if (toggle == 1'b0)
            audio_l <= clipped[15:0];
         else
            audio_r <= clipped[15:0];
         toggle <= ~toggle;
      end
   end 
   
endmodule
