// The filters running inside sms2hdmi, in Master System and Game Gear mode. For a list of
// settings, the pixels that go into video_fx (rgb_pre and its flags) and the pixels that come
// out, FX_LAT clocks later, are logged with the output position, on a set of rows across the
// frame; model.py check compares each one with the golden model, so the CRT mask lands on the
// right output columns and rows, the scanline darkening comes after the colour stage, and the
// border and the overlay are left alone.
// Also checked here on every clock: the picture flag is set exactly for the pixels that are not
// the border colour, and never while the overlay is up. In Game Gear mode with the grid on,
// every output column/row the grid flag marks must be exactly the last column/row of a source
// pixel/line (5 output columns/rows per source pixel/line), and every last column/row of the
// picture must carry the flag; in SMS mode the flags stay low even with the grid bit set.
`timescale 1ns/1ps

module tb_sms_fx;

    localparam FX_LAT = 11;
    localparam BORDER = 24'h303030;
    localparam GG_XSTART = 240;             // the Game Gear window is 800 wide, centred
    localparam GG_XSTOP = 1040;

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
    end

    // what went into video_fx FX_LAT clocks ago: {darkness, dark, pic, col, row, rgb}
    reg [29:0] hist [0:15];
    reg [29:0] now_in, old_in;
    reg old_pic, old_col, old_row;
    integer logging = 0, nlog = 0, nbad_pic = 0, nbad_grid = 0, k;
    integer fd;
    reg     in_row, grid_live;
    always @(negedge clk_pixel) begin
        now_in = {dut.sl_dk, dut.dark_pre, dut.pic_pre, dut.col_pre, dut.row_pre, dut.rgb_pre};
        old_in = hist[FX_LAT - 1];
        for (k = 15; k > 0; k = k - 1) hist[k] = hist[k - 1];
        hist[0] = now_in;
        old_pic = old_in[26]; old_col = old_in[25]; old_row = old_in[24];
        grid_live = gg & vcfg[15];
        // the border colour and the picture flag
        if (logging && dut.pic_pre !== (dut.rgb_pre !== BORDER && !ov)) begin
            nbad_pic = nbad_pic + 1;
            if (nbad_pic <= 5)
                $display("pic flag %b with rgb_pre=%h overlay=%b at cx=%0d cy=%0d", dut.pic_pre, dut.rgb_pre, ov, dut.cx, dut.cy);
        end
        in_row = (dut.cy % 50 < 5) && dut.cy < 10'd720 && dut.cy >= 10'd40;
        if (logging && in_row && dut.cx < 11'd1280) begin
            if (grid_live && old_pic) begin
                // the grid darkens exactly the last column/row of a source pixel/line.
                // dut.cx/cy are sampled after the clock edge, one ahead of the output
                // column (which is dut.cx - 1, 240..1039 in GG mode) but level with the
                // output row, so last columns are dut.cx - 240 = 5, 10, .. and last rows
                // are dut.cy % 5 == 4.
                if (old_col && (dut.cx < GG_XSTART || dut.cx > GG_XSTOP ||
                                (dut.cx - GG_XSTART) % 5 != 0)) begin
                    nbad_grid = nbad_grid + 1;
                    if (nbad_grid <= 5)
                        $display("grid column flag at cx=%0d cy=%0d, not a last column", dut.cx, dut.cy);
                end
                if (!old_col && dut.cx >= GG_XSTART && dut.cx <= GG_XSTOP &&
                                (dut.cx - GG_XSTART) % 5 == 0) begin
                    nbad_grid = nbad_grid + 1;
                    if (nbad_grid <= 5)
                        $display("last column cx=%0d cy=%0d without the grid flag", dut.cx, dut.cy);
                end
                if (old_row && dut.cy % 5 != 4) begin
                    nbad_grid = nbad_grid + 1;
                    if (nbad_grid <= 5)
                        $display("grid row flag at cx=%0d cy=%0d, not a last row", dut.cx, dut.cy);
                end
                if (!old_row && dut.cy % 5 == 4) begin
                    nbad_grid = nbad_grid + 1;
                    if (nbad_grid <= 5)
                        $display("last row cy=%0d (cx=%0d) without the grid flag", dut.cy, dut.cx);
                end
            end
            if (!gg && old_pic && (old_col || old_row)) begin
                nbad_grid = nbad_grid + 1;
                if (nbad_grid <= 5)
                    $display("grid flag in SMS mode at cx=%0d cy=%0d", dut.cx, dut.cy);
            end
            $fwrite(fd, "%h %0d %0d %0d %0d %0d %0d %0d %h %h\n", vcfg, dut.cx, dut.cy,
                    old_pic, old_in[27], old_in[29:28], old_col, old_row, old_in[23:0], dut.rgb);
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
            logging = 1;
            wait_row730;
            logging = 0;
            $display("sms_fx gg=%b on=%b out=%b thick=%b darkness=%0d overlay=%b video_config=%h logged",
                     g, on, out, thick, dk, over, cfg);
        end
    endtask

    initial begin
        fd = $fopen("sms_fx.log", "w");
        wait_row730;
        //    gg on out thk dk ov  video_config
        frame(0, 0, 0, 0, 0, 0, 3'd2 | (3'd7 << 3) | (3'd2 << 6) | (2'd3 << 9));                  // colour only
        frame(0, 0, 0, 0, 0, 0, (2'd1 << 11) | (2'd2 << 13));                                    // aperture grille
        frame(0, 1, 0, 0, 1, 0, (2'd2 << 11) | (2'd3 << 13));                                    // slot mask + scanlines
        frame(0, 1, 1, 1, 2, 0, (2'd3 << 11) | (2'd1 << 13) | 3'd5);                             // dot mask, output rows, brightness -3
        frame(0, 1, 0, 0, 3, 0, (3'd4 << 6) | (2'd1 << 9) | (2'd1 << 11));                       // greyscale + gamma + 100 % scanlines
        frame(0, 0, 0, 0, 0, 1, 32'h0001_FFFF);                                                  // overlay: untouched
        frame(0, 1, 0, 0, 2, 0, 32'h0003_A000);                                                  // grid bit: ignored
        frame(0, 0, 0, 0, 0, 0, 32'h0001_2000);                                                  // firmware "off"
        frame(1, 0, 0, 0, 0, 0, 32'h0001_2000);                                                  // GG, firmware "off"
        frame(1, 0, 0, 0, 0, 0, 32'h0000_8000);                                                  // GG grid, strength 0
        frame(1, 1, 0, 0, 2, 0, (2'd2 << 11) | (2'd3 << 13) | (1 << 15) | (3'd3 << 16));          // GG grid + slot mask + scanlines
        frame(1, 1, 1, 0, 1, 0, (2'd1 << 11) | (2'd2 << 13) | (1 << 15) | (3'd1 << 16) | 3'd1);   // GG grid + grille, output rows
        frame(1, 1, 0, 1, 3, 0, (1 << 15) | (3'd2 << 16) | (2'd2 << 9));                          // GG grid + 100 % scanlines + gamma
        frame(1, 0, 0, 0, 0, 1, (1 << 15) | (3'd3 << 16));                                       // GG overlay with the grid bit: untouched
        frame(1, 0, 0, 0, 0, 0, 32'h0001_2000);                                                  // GG, firmware "off"
        $fclose(fd);
        if (nbad_pic != 0 || nbad_grid != 0 || nlog == 0) begin
            $display("tb_sms_fx: FAIL (%0d picture flag errors, %0d grid errors, %0d pixels logged)",
                     nbad_pic, nbad_grid, nlog);
            $fatal(1, "tb_sms_fx: FAIL");
        end
        $display("tb_sms_fx: %0d pixels logged, picture flag and grid geometry ok", nlog);
        $finish;
    end

    initial begin
        #2000000000000;
        $fatal(1, "tb_sms_fx: timeout");
    end
endmodule
