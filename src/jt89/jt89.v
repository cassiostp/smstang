/*  This file is part of JT89.

    JT89 is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    JT89 is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with JT89.  If not, see <http://www.gnu.org/licenses/>.

    Author: Jose Tejada Gomez. Twitter: @topapate
    Version: 1.0
    Date: March, 8th 2017

    This work was originally based in the implementation found on the
    SMS core of MiST. Some of the changes, all according to data sheet:

        -Fixed volume
        -Fixed tone 2 rate option of noise generator
        -Fixed rate of noise generator
        -Fixed noise shift clear
        -Fixed noise generator update bug by which it gets updated
            multiple times if v='0'
        -Added all 0's prevention circuit to noise generator

    Save states (smstang): byte readback/restore of every register and
    phase counter over ss_a/ss_din/ss_we (frozen only). The window base is
    SS_BASE; offsets: +0/+1 tone0, +2/+3 tone1, +4/+5 tone2, +6/+7 vol,
    +8 {regn,ctrl3}, +9 {clk_div,cen_16}, +10 {clr_noise,last_wr},
    +11/+12 tone0 cnt, +13/+14 tone1 cnt, +15/+16 tone2 cnt,
    +17/+18 noise shift, +19/+20 noise cnt.
    */

module jt89(
    input   clk,
(* direct_enable = 1 *) input   clk_en,
    input          rst,
    input          wr_n,
    input    [7:0] din,
    input    [7:0] mux,
    output  signed [10:0] soundL,
    output  signed [10:0] soundR,
    output         ready,
    // Save-state byte bus (global addresses, frozen only)
    input    [9:0] ss_a,
    input    [7:0] ss_din,
    input          ss_we,
    output   [7:0] ss_dout
,
    input          ss_snd_rst // audio resync (see savestate_sms)
);

parameter [9:0] SS_BASE = 10'h100;

wire signed [ 8:0] ch0, ch1, ch2, noise;

assign ready = 1'b1;

// Save-state selects (reads and writes share the decode)
wire ss_tone_regs = (ss_a >= SS_BASE) && (ss_a < SS_BASE + 10'd11);
wire ss_tone0_sel = (ss_a == SS_BASE + 10'd11) || (ss_a == SS_BASE + 10'd12);
wire ss_tone1_sel = (ss_a == SS_BASE + 10'd13) || (ss_a == SS_BASE + 10'd14);
wire ss_tone2_sel = (ss_a == SS_BASE + 10'd15) || (ss_a == SS_BASE + 10'd16);
wire ss_noise_sel = (ss_a >= SS_BASE + 10'd17) && (ss_a < SS_BASE + 10'd21);
wire [7:0] ss_tone0, ss_tone1, ss_tone2, ss_noise;

jt89_mixer mix(
    .clk    ( clk   ),
    .clk_en ( clk_en), // uses main clock enable
    .cen_16 ( cen_16),
    .rst    ( rst   ),
    .ch0    ( ch0   ),
    .ch1    ( ch1   ),
    .ch2    ( ch2   ),
    .noise  ( noise ),
	 .mux    ( mux   ),
    .soundL ( soundL ),
    .soundR ( soundR )
,
    .ss_snd_rst ( ss_snd_rst )
);

// configuration registers
reg [9:0] tone0, tone1, tone2;
reg [3:0] vol0, vol1, vol2, vol3;
reg [2:0] ctrl3;
reg [2:0] regn;

reg [3:0] clk_div;
(* direct_enable = 1 *) reg cen_16;

always @(negedge clk )
    if( rst ) begin
        cen_16 <= 1'b1;
    end else if( ss_we && ss_a == SS_BASE + 10'd9 ) begin
        cen_16 <= ss_din[4];
    end else begin
        cen_16 <= clk_en & (&clk_div);
    end

always @(posedge clk )
    if( rst )
        clk_div <= 4'd0;
    else if( ss_we && ss_a == SS_BASE + 10'd9 )
        clk_div <= ss_din[7:4];
    else if( clk_en )
        clk_div <= clk_div + 1'b1;

reg clr_noise, last_wr;
wire [2:0] reg_sel = din[7] ? din[6:4] : regn;

always @(posedge clk)
    if( rst ) begin
        { vol0, vol1, vol2, vol3 } <= {16{1'b1}};
        { tone0, tone1, tone2 } <= 30'd0;
        ctrl3 <= 3'b100;
    end
    else if( ss_we && ss_tone_regs ) begin
        case( ss_a )
            SS_BASE + 10'd0: tone0[7:0] <= ss_din;
            SS_BASE + 10'd1: tone0[9:8] <= ss_din[1:0];
            SS_BASE + 10'd2: tone1[7:0] <= ss_din;
            SS_BASE + 10'd3: tone1[9:8] <= ss_din[1:0];
            SS_BASE + 10'd4: tone2[7:0] <= ss_din;
            SS_BASE + 10'd5: tone2[9:8] <= ss_din[1:0];
            SS_BASE + 10'd6: { vol1, vol0 } <= ss_din;
            SS_BASE + 10'd7: { vol3, vol2 } <= ss_din;
            SS_BASE + 10'd8: { regn, ctrl3 } <= { ss_din[7:5], ss_din[4:2] };
            SS_BASE + 10'd9: ;   // clk_div/cen_16 handled above
            SS_BASE + 10'd10: { clr_noise, last_wr } <= ss_din[7:6];
            default: ;
        endcase
    end
    else begin
        last_wr <= wr_n;
        if( !wr_n && last_wr ) begin
            clr_noise <= din[7:4] == 4'b1110; // clear noise
            // when there is an access to the control register
            regn <= reg_sel;
            case( reg_sel )
                3'b00_0: if( din[7] ) tone0[3:0]<=din[3:0]; else tone0[9:4]<=din[5:0];
                3'b01_0: if( din[7] ) tone1[3:0]<=din[3:0]; else tone1[9:4]<=din[5:0];
                3'b10_0: if( din[7] ) tone2[3:0]<=din[3:0]; else tone2[9:4]<=din[5:0];
                3'b11_0: ctrl3 <= din[2:0]; //Need to update these every time.
                3'b00_1: vol0  <= din[3:0];
                3'b01_1: vol1  <= din[3:0];
                3'b10_1: vol2  <= din[3:0];
                3'b11_1: vol3  <= din[3:0];
            endcase
        end
        else clr_noise <= 1'b0;
    end

// Save-state readback of the configuration registers (combinational)
reg [7:0] ss_regs_dout;
always @* begin
    case( ss_a )
        SS_BASE + 10'd0: ss_regs_dout = tone0[7:0];
        SS_BASE + 10'd1: ss_regs_dout = {6'b0, tone0[9:8]};
        SS_BASE + 10'd2: ss_regs_dout = tone1[7:0];
        SS_BASE + 10'd3: ss_regs_dout = {6'b0, tone1[9:8]};
        SS_BASE + 10'd4: ss_regs_dout = tone2[7:0];
        SS_BASE + 10'd5: ss_regs_dout = {6'b0, tone2[9:8]};
        SS_BASE + 10'd6: ss_regs_dout = { vol1, vol0 };
        SS_BASE + 10'd7: ss_regs_dout = { vol3, vol2 };
        SS_BASE + 10'd8: ss_regs_dout = { regn, ctrl3, 2'b0 };
        SS_BASE + 10'd9: ss_regs_dout = { clk_div, cen_16, 3'b0 };
        SS_BASE + 10'd10: ss_regs_dout = { clr_noise, last_wr, 6'b0 };
        default: ss_regs_dout = 8'b0;
    endcase
end

// Save-state readback, registered: one pipeline stage splits the
// scan mux for timing (the engine waits the extra cycle via rdy).
reg [7:0] ss_dout_q = 0;
always @(posedge clk) ss_dout_q <= ss_tone_regs ? ss_regs_dout :
                 ss_tone0_sel ? ss_tone0 :
                 ss_tone1_sel ? ss_tone1 :
                 ss_tone2_sel ? ss_tone2 :
                 ss_noise_sel ? ss_noise : 8'b0;
assign ss_dout = ss_dout_q;

jt89_tone u_tone0(
    .clk    ( clk       ),
    .rst    ( rst       ),
    .clk_en ( cen_16    ),
    .vol    ( vol0      ),
    .tone   ( tone0     ),
    .snd    ( ch0       ),
    .out    (           ),
    .ss_sel ( ss_tone0_sel ),
    .ss_idx ( ss_a[0]   ),
    .ss_din ( ss_din    ),
    .ss_we  ( ss_we     ),
    .ss_dout( ss_tone0  )
,
    .ss_snd_rst ( ss_snd_rst )
);

jt89_tone u_tone1(
    .clk    ( clk       ),
    .rst    ( rst       ),
    .clk_en ( cen_16    ),
    .vol    ( vol1      ),
    .tone   ( tone1     ),
    .snd    ( ch1       ),
    .out    (           ),
    .ss_sel ( ss_tone1_sel ),
    .ss_idx ( ss_a[0]   ),
    .ss_din ( ss_din    ),
    .ss_we  ( ss_we     ),
    .ss_dout( ss_tone1  )
,
    .ss_snd_rst ( ss_snd_rst )
);

wire out2;

jt89_tone u_tone2(
    .clk    ( clk       ),
    .rst    ( rst       ),
    .clk_en ( cen_16    ),
    .vol    ( vol2      ),
    .tone   ( tone2     ),
    .snd    ( ch2       ),
    .out    ( out2      ),
    .ss_sel ( ss_tone2_sel ),
    .ss_idx ( ss_a[0]   ),
    .ss_din ( ss_din    ),
    .ss_we  ( ss_we     ),
    .ss_dout( ss_tone2  )
,
    .ss_snd_rst ( ss_snd_rst )
);

jt89_noise u_noise(
    .clk    ( clk       ),
    .rst    ( rst       ),
    .clk_en ( cen_16    ),
    .clr    ( clr_noise ),
    .vol    ( vol3      ),
    .ctrl3  ( ctrl3     ),
    .tone2  ( tone2     ),
    .snd    ( noise     ),
    .ss_sel ( ss_noise_sel ),
    .ss_idx ( ss_a[1:0] ),
    .ss_din ( ss_din    ),
    .ss_we  ( ss_we     ),
    .ss_dout( ss_noise  )
,
    .ss_snd_rst ( ss_snd_rst )
);

endmodule
