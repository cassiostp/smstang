// Sim-only top for the Verilator frame-lock soak: the real sms2hdmi against
// the cycle-exact VDP model (sms_frame_model.v: copies of the ce divider in
// src/smstang_top.sv and the NTSC counters in src/video.v, gated by the
// DUT's frame_halt exactly as the top gates the machine), synthetic
// picture/audio stimuli, and taps for the C++ harness. The HDMI pixel
// counter is the sim stub (sim/scanlines/hdmi_stub.v) at the native width
// the real hdmi.sv gives for std_timing = 0; the lock, scaler, audio path
// and frame buffer are the real RTL. The DUT runs the 480p120 BFI timing:
// each game frame is read twice (lit pass, then inserted pass). No delays,
// no file IO.
`timescale 1ns/1ps
module fl_top (
    input clk,
    input clk_pixel,
    input por_n,            // DUT resetn: power-on plus game-reload pulses
    input pause_tb,         // core_config[17] equivalent (menu pause)
    input gg_in,            // 1: Game Gear mode (160x144 window)
    input mode_m1,          // 1: 224-line mode (counter model only; sms2hdmi has no mode input)
    input mode_m3,          // 1: 240-line mode (counter model only)
    input [1:0] sm_mode,    // video_config[19:18]: 0 off, 1 sharp, 2 soft
    input [1:0] bfi_mode,   // video_config[21:20]: 0 off, 1 black, 2 dim, 3 black
    output frame_halt,
    output [8:0] x,
    output [8:0] y,
    output [10:0] cx,
    output [9:0] cy,
    output bfi_ins,
    output [23:0] rgb_out,
    output memA_we,
    output [15:0] memA_addr,
    output [15:0] memB_addr,
    output clk_audio,
    output [15:0] audio_word0
);

    wire pause_eff = pause_tb | frame_halt;
    wire ce_cpu, ce_vdp, ce_pix, ce_sp;
    wire [15:0] audio_l, audio_r;

    sms_frame_model model (
        .clk(clk), .pause_eff(pause_eff), .mode_m1(mode_m1), .mode_m3(mode_m3),
        .ce_cpu(ce_cpu), .ce_vdp(ce_vdp), .ce_pix(ce_pix), .ce_sp(ce_sp),
        .x(x), .y(y), .audio_l(audio_l), .audio_r(audio_r)
    );

    // synthetic picture: each line its own colour
    reg [11:0] pix_color = 0;
    always @(posedge clk)
        pix_color <= y[7:0] + 12'd8;

    wire [2:0] tmds_d_p, tmds_d_n;
    wire tmds_clk_p, tmds_clk_n;
    wire [7:0] overlay_x, overlay_y;
    sms2hdmi dut (
        .clk(clk), .resetn(por_n),
        .ce_pix(ce_pix), .x(x), .y(y), .color(pix_color),
        .audio_l(audio_l), .audio_r(audio_r),
        .overlay(1'b0), .overlay_x(overlay_x), .overlay_y(overlay_y),
        .overlay_color(15'd0),
        .scanlines(1'b0), .sl_darkness(2'd0), .sl_thick(1'b0), .sl_out(1'b0),
        .video_config({10'b0, bfi_mode, sm_mode, 18'b0}), .gg(gg_in),
        .frame_halt(frame_halt), .std_timing(1'b0), .bfi_mode(bfi_mode),
        .clk_pixel(clk_pixel), .clk_5x_pixel(1'b0),
        .tmds_clk_n(tmds_clk_n), .tmds_clk_p(tmds_clk_p),
        .tmds_d_n(tmds_d_n), .tmds_d_p(tmds_d_p)
    );

    // taps for the harness
    assign cy = dut.cy;
    assign cx = dut.cx;
    assign bfi_ins = dut.bfi_ins ^ dut.bfi_phase;
    assign rgb_out = dut.rgb;
    assign memA_we = dut.mem_portA_we;
    assign memA_addr = dut.mem_portA_addr;
    assign memB_addr = dut.mem_portB_addr;
    assign clk_audio = dut.clk_audio;
    assign audio_word0 = dut.audio_sample_word[0];

endmodule
