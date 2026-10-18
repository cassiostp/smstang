// Native line length keeps the picture where it is: two sms2hdmi side by
// side (the HDMI part is the sim stub), one at standard timing and one at
// native, fed the same frame buffer, must show the very same 1280x720
// picture; only the line length differs (1650 vs 1652). SMS and Game Gear
// mode. Fails with $fatal on the first mismatch.
// The hz120 variant checks the same at 720x480: the native 480p120 line is
// the standard one (858).
`include "variant.vh"
`timescale 1ns/1ps

module tb_native_pos;

    reg clk_pixel = 0;
`ifdef HZ120
    always #9.259 clk_pixel = ~clk_pixel;       // 54 MHz
`else
    always #6.734 clk_pixel = ~clk_pixel;       // 74.25 MHz
`endif

    reg [15:0] audio_l = 0, audio_r = 0;
    wire [2:0] tmds_d_p, tmds_d_n, tmds_d_p2, tmds_d_n2;
    wire tmds_clk_p, tmds_clk_n, tmds_clk_p2, tmds_clk_n2;

    reg gg = 0;

    sms2hdmi std (
        .clk(1'b0), .resetn(1'b1),
        .ce_pix(1'b0), .x(9'd0), .y(9'd0), .color(12'd0),
        .audio_l(audio_l), .audio_r(audio_r),
        .overlay(1'b0), .overlay_x(), .overlay_y(), .overlay_color(15'd0),
        .scanlines(1'b0), .sl_darkness(2'd0), .sl_thick(1'b0), .sl_out(1'b0),
        .video_config(32'd0), .gg(gg), .smode_m1(1'b0), .smode_m3(1'b0),
`ifdef HZ120
        .std_timing(1'b1), .bfi_mode(2'd0),
`else
        .std_timing(1'b1),
`endif
        .clk_pixel(clk_pixel), .clk_5x_pixel(1'b0),
        .tmds_clk_n(tmds_clk_n), .tmds_clk_p(tmds_clk_p),
        .tmds_d_n(tmds_d_n), .tmds_d_p(tmds_d_p)
    );

    sms2hdmi nat (
        .clk(1'b0), .resetn(1'b1),
        .ce_pix(1'b0), .x(9'd0), .y(9'd0), .color(12'd0),
        .audio_l(audio_l), .audio_r(audio_r),
        .overlay(1'b0), .overlay_x(), .overlay_y(), .overlay_color(15'd0),
        .scanlines(1'b0), .sl_darkness(2'd0), .sl_thick(1'b0), .sl_out(1'b0),
        .video_config(32'd0), .gg(gg), .smode_m1(1'b0), .smode_m3(1'b0),
`ifdef HZ120
        .std_timing(1'b0), .bfi_mode(2'd0),
`else
        .std_timing(1'b0),
`endif
        .clk_pixel(clk_pixel), .clk_5x_pixel(1'b0),
        .tmds_clk_n(tmds_clk_n2), .tmds_clk_p(tmds_clk_p2),
        .tmds_d_n(tmds_d_n2), .tmds_d_p(tmds_d_p2)
    );

    integer i;
    reg [31:0] h;
    initial begin
        #1;
        h = 32'h9e3779b9;
        for (i = 0; i < 256 * 192; i = i + 1) begin
            h = h * 1664525 + 1013904223;
            std.mem[i] = h[11:0];
            nat.mem[i] = h[11:0];
        end
    end

    // what each sink would show: rgb while cx = x + 1
`ifdef HZ120
    reg [23:0] img_std [0:720*480-1];
    reg [23:0] img_nat [0:720*480-1];
`else
    reg [23:0] img_std [0:1280*720-1];
    reg [23:0] img_nat [0:1280*720-1];
`endif
    reg [10:0] max_cx_std = 0, max_cx_nat = 0;
    always @(posedge clk_pixel) begin
        if (std.cx > max_cx_std) max_cx_std <= std.cx;
        if (nat.cx > max_cx_nat) max_cx_nat <= nat.cx;
`ifdef HZ120
        if (std.cy < 10'd480 && std.cx >= 11'd1 && std.cx <= 11'd720)
            img_std[std.cy * 720 + std.cx - 1] = std.rgb;
        if (nat.cy < 10'd480 && nat.cx >= 11'd1 && nat.cx <= 11'd720)
            img_nat[nat.cy * 720 + nat.cx - 1] = nat.rgb;
`else
        if (std.cy < 10'd720 && std.cx >= 11'd1 && std.cx <= 11'd1280)
            img_std[std.cy * 1280 + std.cx - 1] = std.rgb;
        if (nat.cy < 10'd720 && nat.cx >= 11'd1 && nat.cx <= 11'd1280)
            img_nat[nat.cy * 1280 + nat.cx - 1] = nat.rgb;
`endif
    end

    // frame lengths in pixel clocks
    reg [31:0] len_std = 0, len_nat = 0;
    reg [9:0] cy_std_q = 0, cy_nat_q = 0;
    reg in_std = 0, in_nat = 0;
    reg [31:0] done_std = 0, done_nat = 0;
    always @(posedge clk_pixel) begin
        cy_std_q <= std.cy;
        cy_nat_q <= nat.cy;
        if (std.cy == 0 && cy_std_q != 0) begin
            done_std <= done_std + 1;
`ifdef HZ120
            if (in_std && len_std != 0 && len_std != 32'd858 * 525) begin
                $display("FAIL: std frame %0d clocks, want %0d", len_std, 858 * 525);
                $fatal(1, "tb_native_pos: FAIL");
            end
`else
            if (in_std && len_std != 0 && len_std != 32'd1650 * 750) begin
                $display("FAIL: std frame %0d clocks, want %0d", len_std, 1650 * 750);
                $fatal(1, "tb_native_pos: FAIL");
            end
`endif
            len_std <= 1;
            in_std <= 1;
        end else if (in_std)
            len_std <= len_std + 1;
        if (nat.cy == 0 && cy_nat_q != 0) begin
            done_nat <= done_nat + 1;
`ifdef HZ120
            if (in_nat && len_nat != 0 && len_nat != 32'd858 * 525) begin
                $display("FAIL: native frame %0d clocks, want %0d", len_nat, 858 * 525);
                $fatal(1, "tb_native_pos: FAIL");
            end
`else
            if (in_nat && len_nat != 0 && len_nat != 32'd1652 * 750) begin
                $display("FAIL: native frame %0d clocks, want %0d", len_nat, 1652 * 750);
                $fatal(1, "tb_native_pos: FAIL");
            end
`endif
            len_nat <= 1;
            in_nat <= 1;
        end else if (in_nat)
            len_nat <= len_nat + 1;
    end

    task check_frame;
        integer p, bad;
        begin
            bad = 0;
`ifdef HZ120
            for (p = 0; p < 720 * 480; p = p + 1)
                if (img_std[p] !== img_nat[p]) begin
                    bad = bad + 1;
                    if (bad <= 8)
                        $display("MISMATCH pix %0d (y=%0d x=%0d): std %h nat %h",
                                 p, p / 720, p % 720, img_std[p], img_nat[p]);
                end
            if (bad != 0) begin
                $display("FAIL: gg=%b: %0d of %0d visible pixels differ", gg, bad, 720 * 480);
                $fatal(1, "tb_native_pos: FAIL");
            end
            if (max_cx_std != 857 || max_cx_nat != 857) begin
                $display("FAIL: gg=%b: max cx std=%0d nat=%0d", gg, max_cx_std, max_cx_nat);
                $fatal(1, "tb_native_pos: FAIL");
            end
            $display("tb_native_pos gg=%b: 720x480 identical, line lengths 858/858", gg);
`else
            for (p = 0; p < 1280 * 720; p = p + 1)
                if (img_std[p] !== img_nat[p]) begin
                    bad = bad + 1;
                    if (bad <= 8)
                        $display("MISMATCH pix %0d (y=%0d x=%0d): std %h nat %h",
                                 p, p / 1280, p % 1280, img_std[p], img_nat[p]);
                end
            if (bad != 0) begin
                $display("FAIL: gg=%b: %0d of %0d visible pixels differ", gg, bad, 1280 * 720);
                $fatal(1, "tb_native_pos: FAIL");
            end
            if (max_cx_std != 1649 || max_cx_nat != 1651) begin
                $display("FAIL: gg=%b: max cx std=%0d nat=%0d", gg, max_cx_std, max_cx_nat);
                $fatal(1, "tb_native_pos: FAIL");
            end
            $display("tb_native_pos gg=%b: 1280x720 identical, line lengths 1650/1652", gg);
`endif
        end
    endtask

    task wait_frames(input integer n);
        integer target_std, target_nat;
        begin
            target_std = done_std + n; target_nat = done_nat + n;
            while (done_std < target_std || done_nat < target_nat) @(posedge clk_pixel);
        end
    endtask

    initial begin
        wait_frames(2);                 // pipelines full, frame 1 in both
        wait_frames(1);                 // frame 1 done
        check_frame;
        gg = 1;
        wait_frames(2);
        check_frame;
        $display("tb_native_pos: PASS");
        $finish;
    end

`ifdef HZ120
    // watchdog: 8 HDMI frames at 858x525 is plenty
    initial begin
        repeat (8 * 858 * 525 + 100) @(posedge clk_pixel);
        $display("FAIL: watchdog");
        $fatal(1, "tb_native_pos: FAIL");
    end
`else
    // watchdog: 8 HDMI frames at 1652x750 is plenty
    initial begin
        repeat (8 * 1652 * 750 + 100) @(posedge clk_pixel);
        $display("FAIL: watchdog");
        $fatal(1, "tb_native_pos: FAIL");
    end
`endif

endmodule
