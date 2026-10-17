// The smoothing running inside sms2hdmi (video_config[19:18]), in Master System and
// Game Gear mode. The frame buffer holds a pseudo-random picture, which is dumped
// (sms_src.hex) for the model. For a list of settings the pixels that go into video_fx
// (rgb_pre and its flags) and the pixels that come out, FX_LAT clocks later, are logged
// with their output position on a set of rows across the frame (the top and bottom 50
// rows, and every 7th); model.py check_smooth compares each one with the golden model:
// which source pixels are blended and with what weights, in both modes and every geometry,
// the LCD grid flags in Game Gear mode with the grid on, the border and the overlay left
// alone, the filters and the scanline darkening acting on the smoothed picture.
`timescale 1ns/1ps

module tb_sms_smooth;

    localparam FX_LAT = 11;

    reg clk_pixel = 0, clk = 0;
    always #6.734 clk_pixel = ~clk_pixel;       // 74.25 MHz
    always #46.5 clk = ~clk;                    // 10.7 MHz

    reg        sl_on = 0, sl_thick = 0, sl_out = 0, ov = 0, gg = 0;
    reg  [1:0] sl_dark = 0;
    reg [31:0] vcfg = 0;

    wire [7:0] ovx, ovy;
    reg [14:0] ovc, ovc1;
    function [14:0] ov_pix(input [7:0] x, input [7:0] y);
        ov_pix = {x[4:0] ^ y[6:2], x[7:3] + y[4:0], y[7:3] ^ x[6:2]};
    endfunction
    always @(posedge clk_pixel) begin
        ovc1 <= ov_pix(ovx, ovy); ovc <= ovc1;
    end

    wire [2:0] tmds_d_p, tmds_d_n;
    wire       tmds_clk_p, tmds_clk_n;

    sms2hdmi dut (
        .clk(clk), .resetn(1'b1),
        .ce_pix(1'b0), .x(9'd0), .y(9'd0), .color(12'd0),
        .audio_l(16'd0), .audio_r(16'd0),
        .scanlines(sl_on), .sl_darkness(sl_dark), .sl_thick(sl_thick), .sl_out(sl_out),
        .video_config(vcfg), .gg(gg),
        .overlay(ov), .overlay_x(ovx), .overlay_y(ovy), .overlay_color(ovc),
        .bfi_mode(2'd0),
        .clk_pixel(clk_pixel), .clk_5x_pixel(1'b0),
        .tmds_clk_n(tmds_clk_n), .tmds_clk_p(tmds_clk_p), .tmds_d_n(tmds_d_n), .tmds_d_p(tmds_d_p)
    );

    integer i;
    reg [31:0] h;
    initial begin
        #1;
        h = 32'h7654321;
        for (i = 0; i < 256 * 192; i = i + 1) begin
            h = h * 1664525 + 1013904223;
            dut.mem[i] = (h[11:0] == 12'h333) ? 12'h332 : h[11:0];   // never the border colour
        end
        $writememh("sms_src.hex", dut.mem);
    end

    // what went into video_fx FX_LAT clocks ago: {darkness, dark, pic, col, row, rgb}
    reg [29:0] hist [0:15];
    reg [29:0] now_in, old_in;
    integer logging = 0, nlog = 0, k;
    integer fd;
    reg     in_row;
    always @(negedge clk_pixel) begin
        now_in = {dut.sl_dk, dut.dark_pre, dut.pic_pre, dut.col_pre, dut.row_pre, dut.rgb_pre};
        old_in = hist[FX_LAT - 1];
        for (k = 15; k > 0; k = k - 1) hist[k] = hist[k - 1];
        hist[0] = now_in;
        in_row = dut.cy < 10'd720 && (dut.cy < 10'd50 || dut.cy >= 10'd670 || dut.cy % 7 == 0);
        if (logging && in_row && dut.cx < 11'd1280) begin
            $fwrite(fd, "%h %0d %0d %0d %0d %0d %0d %0d %h %h\n", vcfg, dut.cx, dut.cy,
                    old_in[26], old_in[27], old_in[29:28], old_in[25], old_in[24], old_in[23:0], dut.rgb);
            nlog = nlog + 1;
        end
    end

    task wait_row730;
        begin
            while (dut.cy == 10'd730) @(posedge clk_pixel);
            while (dut.cy != 10'd730) @(posedge clk_pixel);
        end
    endtask

    // one frame with these settings, logged
    task frame(input g, input on, input out, input thick, input [1:0] dk, input over, input [31:0] cfg);
        begin
            gg = g; sl_on = on; sl_out = out; sl_thick = thick; sl_dark = dk; ov = over; vcfg = cfg;
            wait_row730;
            $fwrite(fd, "F %0d %0d %0d %0d %0d %0d %h\n", g, on, out, thick, dk, over, cfg);
            logging = 1;
            wait_row730;
            logging = 0;
            $display("sms_smooth gg=%b on=%b out=%b thick=%b darkness=%0d overlay=%b video_config=%h logged",
                     g, on, out, thick, dk, over, cfg);
        end
    endtask

    localparam [31:0] SHARP = 32'h1 << 18, SOFT = 32'h2 << 18, RSVD = 32'h3 << 18;
    localparam [31:0] FW = 32'h0001_2000;                                            // the firmware's all-off word
    localparam [31:0] FX = 3'd2 | (3'd7 << 3) | (3'd2 << 6) | (2'd3 << 9) | (2'd2 << 11) | (2'd1 << 13);   // colour + slot mask
    localparam [31:0] GRID = (1 << 15) | (3 << 16);                                  // the LCD grid, strength 3

    initial begin
        fd = $fopen("sms_smooth.log", "w");
        wait_row730;
        //    gg on out thk dk ov  video_config
        frame(0, 0, 0, 0, 0, 0, 32'h0);                       // SMS off: the model's convention is the scaler's
        frame(0, 1, 0, 0, 0, 0, 32'h0);                       // SMS off, integer scale
        frame(0, 0, 0, 0, 0, 0, RSVD);                        // reserved = off
        frame(0, 0, 0, 0, 0, 0, SHARP);                       // SMS sharp, 960x720
        frame(0, 0, 0, 0, 0, 0, SOFT);                        // SMS soft
        frame(0, 1, 0, 0, 1, 0, SHARP);                       // SMS integer scale, 768x576 (3x: sharp is identity)
        frame(0, 1, 0, 1, 2, 0, SOFT | FW);                   // SMS integer scale, soft, thick
        frame(0, 1, 1, 0, 2, 0, SHARP);                       // SMS output rows, sharp
        frame(0, 1, 1, 1, 1, 0, SOFT);                        // SMS output rows, soft
        frame(0, 0, 0, 0, 0, 0, SHARP | FX);                  // SMS sharp with the other filters
        frame(0, 1, 0, 0, 1, 0, SOFT | FX);                   // SMS integer soft with the other filters
        frame(1, 0, 0, 0, 0, 0, 32'h0);                       // Game Gear off
        frame(1, 0, 0, 0, 0, 0, SHARP);                       // GG sharp (5x: identity)
        frame(1, 0, 0, 0, 0, 0, SOFT);                        // GG soft
        frame(1, 1, 0, 0, 2, 0, SOFT);                        // GG integer scale + scanlines, soft
        frame(1, 1, 1, 0, 1, 0, SHARP);                       // GG output rows, sharp
        frame(1, 0, 0, 0, 0, 0, SHARP | GRID);                // GG grid, sharp: the grid lines up
        frame(1, 0, 0, 0, 0, 0, SOFT | GRID);                 // GG grid, soft
        frame(1, 1, 0, 0, 2, 0, SOFT | GRID | FX);            // GG grid + slot mask + scanlines, soft
        frame(0, 0, 0, 0, 0, 1, SHARP | FX);                  // menu overlay up: untouched
        frame(0, 0, 0, 0, 0, 1, SOFT);
        frame(0, 0, 0, 0, 0, 1, RSVD);
        frame(1, 0, 0, 0, 0, 1, SOFT | GRID);                 // GG overlay (the full frame): untouched
        frame(1, 1, 0, 0, 2, 1, SHARP);
        frame(0, 0, 0, 0, 0, 0, SHARP);                       // and back
        $fclose(fd);
        if (nlog == 0) begin
            $display("tb_sms_smooth: FAIL (nothing logged)");
            $fatal(1, "tb_sms_smooth: FAIL");
        end
        $display("tb_sms_smooth: %0d pixels logged", nlog);
        $finish;
    end

    initial begin
        #2000000000000;
        $fatal(1, "tb_sms_smooth: timeout");
    end
endmodule
