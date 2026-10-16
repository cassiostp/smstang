// Cycle-exact model of the SMS frame timing for the frame-lock sims: the
// clock-enable divider in src/smstang_top.sv:109-135 and the NTSC
// hcount/vcount counters in src/video.v (hcount 0-295,466-511 = 342
// ce_pix steps per line; vcount 0-218,469-511 = 262 lines per frame in
// 192-line mode; the 224-line (mode_m1: 0-234,485-511) and 240-line
// (mode_m3: 0-261) branches of src/video.v are also 262 lines). The
// enables are gated by pause_eff exactly as the top level gates them with
// pause_menu/frame_halt (PAL is not modelled: the top level gates the
// halt off in PAL and PAL runs free). Shared by the iverilog bench
// (tb_frame_lock.v) and the Verilator top (fl_top.sv) so both engines drive
// the real sms2hdmi with the same stimulus.
module sms_frame_model (
    input clk,
    input pause_eff,            // pause_tb | DUT frame_halt
    input mode_m1,              // 224-line mode (smode_M1 in src/video.v)
    input mode_m3,              // 240-line mode (smode_M3 in src/video.v)
    output reg ce_cpu,
    output reg ce_vdp,
    output reg ce_pix,
    output reg ce_sp,
    output [8:0] x,             // = hcount, as video.v drives it
    output [8:0] y,             // = vcount
    output reg [15:0] audio_l = 0,  // 440 Hz sine stepped at the gated cpu rate
    output reg [15:0] audio_r = 0
);

    // exact copy of the ce divider in src/smstang_top.sv (free running)
    reg [4:0] clkd = 0;
    always @(posedge clk) begin
        ce_sp <= clkd[0];
        ce_vdp <= 0;
        ce_pix <= 0;
        ce_cpu <= 0;
        clkd <= clkd + 1'd1;
        if (clkd == 29) begin
            clkd <= 0;
            ce_vdp <= 1;
            ce_pix <= 1;
        end else if (clkd == 24) begin
            ce_cpu <= 1;
            ce_vdp <= 1;
        end else if (clkd == 19) begin
            ce_vdp <= 1;
            ce_pix <= 1;
        end else if (clkd == 14) begin
            ce_vdp <= 1;
        end else if (clkd == 9) begin
            ce_cpu <= 1;
            ce_vdp <= 1;
            ce_pix <= 1;
        end else if (clkd == 4) begin
            ce_vdp <= 1;
        end
    end

    wire ce_cpu_g = ce_cpu & ~pause_eff;
    wire ce_pix_g = ce_pix & ~pause_eff;

    // exact copy of the NTSC counters in src/video.v (all three line modes;
    // vsync is not modelled, as before)
    reg [8:0] hcount = 0;
    reg [8:0] vcount = 0;
    always @(posedge clk) begin
        if (ce_pix_g) begin
            if (hcount == 487) begin
                vcount <= vcount + 1;
                if (mode_m1) begin
                    if (vcount == 234)
                        vcount <= 485;
                end else if (mode_m3) begin
                    if (vcount == 261)
                        vcount <= 0;
                end else if (vcount == 218)
                    vcount <= 469;
            end
            hcount <= hcount + 1;
            if (hcount == 295)
                hcount <= 466;
        end
    end
    assign x = hcount;
    assign y = vcount;

    // synthetic audio: full-scale 440 Hz sine stepped at the gated cpu rate
    // (3.5802 MHz), so a frame halt holds the sample exactly as the PSG does
    reg [15:0] phase_acc = 0;
    always @(posedge clk) begin
        if (ce_cpu_g) begin
            phase_acc <= phase_acc + 16'd8;
            audio_l <= $rtoi(32767.0 * $sin(6.2831853 * phase_acc / 65536.0));
            audio_r <= $rtoi(32767.0 * $sin(6.2831853 * phase_acc / 65536.0));
        end
    end

endmodule
