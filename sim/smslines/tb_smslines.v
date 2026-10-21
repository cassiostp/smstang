// smslines bench (issue #45): the 224/240-line modes store and show every
// active line. The real sms2hdmi (the HDMI pixel counter is the sim stub)
// is driven directly: the write side with x/y/color strobes, the read side
// by capturing whole HDMI frames. The VDP line counters themselves are
// untouched (sim/vcount covers them) and the lock timing over hundreds of
// frames is covered by sim/framelock (sms224/sms240/gg soak configs).
//
// Phases (Game Gear window and overlay untouched):
//   192 SMS + GG: one Integer and one Full frame must be pixel-identical to
//     the pre-tall-mode baseline (build/sms2hdmi_base.sv, see run.sh).
//   224, 240 SMS: the frame buffer holds lines 0..223/239 with the first
//     line white and the last red (the homebrew ROM's marker concept, see
//     sms224.asm); every output row shows the right source line at Integer
//     and Full, with scanlines off and on; the halt enters at y 224/240.
// Fails with $fatal on the first mismatch. Both variants via variant.vh.
`include "variant.vh"
`timescale 1ns/1ps

module tb_smslines;

    reg clk_pixel = 0, clk = 0;
`ifdef HZ120
    always #9.259 clk_pixel = ~clk_pixel;       // 54 MHz
    localparam H = 480, W = 720, ROWS = 2;
`else
    always #6.734 clk_pixel = ~clk_pixel;       // 74.25 MHz
    localparam H = 720, W = 1280, ROWS = 3;
`endif
    always #46.5 clk = ~clk;                    // 10.7 MHz sim clock

    reg por_n = 0;
    reg gg = 0, m1 = 0, m3 = 0;
    reg sl_on = 0, sl_thick = 0, sl_out = 0;
    reg [1:0] sl_dark = 0;
    reg [8:0] wx = 0, wy = 0;
    reg [11:0] wcolor = 0;
    reg wce = 0, ref_hold = 0;
    wire [2:0] tmds_d_p, tmds_d_n, tmds_d_p2, tmds_d_n2;
    wire tmds_clk_p, tmds_clk_n, tmds_clk_p2, tmds_clk_n2;

    sms2hdmi dut (
        .clk(clk), .resetn(por_n),
        .ce_pix(wce), .x(wx), .y(wy), .color(wcolor),
        .audio_l(16'd0), .audio_r(16'd0),
        .overlay(1'b0), .overlay_x(), .overlay_y(), .overlay_color(15'd0),
        .scanlines(sl_on), .sl_darkness(sl_dark), .sl_thick(sl_thick), .sl_out(sl_out),
        .video_config(32'd0),
        .gg(gg), .smode_m1(m1), .smode_m3(m3),
`ifdef HZ120
        .frame_halt(), .std_timing(1'b0), .bfi_mode(2'd0),
`else
        .frame_halt(), .std_timing(1'b0),
`endif
        .clk_pixel(clk_pixel), .clk_5x_pixel(1'b0),
        .tmds_clk_n(tmds_clk_n), .tmds_clk_p(tmds_clk_p),
        .tmds_d_n(tmds_d_n), .tmds_d_p(tmds_d_p)
    );

    // Pre-tall-mode baseline: no smode ports, 256x192 store, halt at 192.
    // ref_hold keeps tall-mode strobes away from its smaller store.
    sms2hdmi_base base (
        .clk(clk), .resetn(por_n),
        .ce_pix(wce & ~ref_hold), .x(wx), .y(wy), .color(wcolor),
        .audio_l(16'd0), .audio_r(16'd0),
        .overlay(1'b0), .overlay_x(), .overlay_y(), .overlay_color(15'd0),
        .scanlines(sl_on), .sl_darkness(sl_dark), .sl_thick(sl_thick), .sl_out(sl_out),
        .video_config(32'd0),
        .gg(gg),
`ifdef HZ120
        .frame_halt(), .std_timing(1'b0), .bfi_mode(2'd0),
`else
        .frame_halt(), .std_timing(1'b0),
`endif
        .clk_pixel(clk_pixel), .clk_5x_pixel(1'b0),
        .tmds_clk_n(tmds_clk_n2), .tmds_clk_p(tmds_clk_p2),
        .tmds_d_n(tmds_d_n2), .tmds_d_p(tmds_d_p2)
    );

    localparam BORDER = 24'h303030;
    localparam FIRSTC = 12'hFFF;   // marker: first active line (white)
    localparam LASTC = 12'hF00;    // marker: last active line

    // line-unique colours that can never be the border (as in tb_sms_scaler)
    function [11:0] line_color(input integer l);
        reg [3:0] a, b, c;
        begin
            a = 4 + (l * 5) % 11; b = 4 + (l * 7) % 9; c = 4 + (l * 3) % 7;
            line_color = {a, b, c};
        end
    endfunction
    function [11:0] want_mem(input integer l, input integer last);
        want_mem = (l == 0) ? FIRSTC : (l == last) ? LASTC : line_color(l);
    endfunction
    function [23:0] to_rgb(input [11:0] p);       // as in sms2hdmi: BGR4 to RGB8
        to_rgb = {p[3:0], 4'b0, p[7:4], 4'b0, p[11:8], 4'b0};
    endfunction
    function [7:0] dim8(input [7:0] v, input [1:0] d);
        case (d)
        0: dim8 = v - v / 4;
        1: dim8 = v / 2;
        2: dim8 = v / 4;
        default: dim8 = 0;
        endcase
    endfunction
    function [23:0] darken(input [23:0] p, input [1:0] d);
        darken = {dim8(p[23:16], d), dim8(p[15:8], d), dim8(p[7:0], d)};
    endfunction

    // integer top border for an active height (rows*lines centred in H)
    function integer exp_top(input integer lines);
        begin
            exp_top = (H - ROWS * lines) / 2;
        end
    endfunction

    task fail(input [8*64-1:0] what, input integer a, input [23:0] got, input [23:0] want);
        begin
            $display("FAIL: %0s %0d: got %h, want %h (m1=%b m3=%b gg=%b on=%b out=%b thick=%b dark=%0d)",
                     what, a, got, want, m1, m3, gg, sl_on, sl_out, sl_thick, sl_dark);
            $fatal(1, "tb_smslines: FAIL");
        end
    endtask

    // strobe one pixel into the frame buffer
    task wpx(input [8:0] x, input [8:0] y, input [11:0] c);
        begin
            wx = x; wy = y; wcolor = c; wce = 1;
            @(posedge clk); #1;
            wce = 0;
            @(posedge clk); #1;
        end
    endtask

    // fill lines [0, n) with the marked pattern (last = n - 1)
    task wfill(input integer n);
        integer l, x;
        begin
            for (l = 0; l < n; l = l + 1)
                for (x = 1; x <= 256; x = x + 1)
                    wpx(x[8:0], l[8:0], want_mem(l, n - 1));
        end
    endtask

    // the buffer holds the marked pattern on lines [0, n)
    task check_mem(input integer n);
        integer l;
        reg [11:0] got;
        begin
            for (l = 0; l < n; l = l + 1) begin
                got = dut.mem[l * 256 + 0];
                if (got !== want_mem(l, n - 1))
                    fail("buffer col0 line", l, {12'b0, got}, {12'b0, want_mem(l, n - 1)});
                got = dut.mem[l * 256 + 255];
                if (got !== want_mem(l, n - 1))
                    fail("buffer col255 line", l, {12'b0, got}, {12'b0, want_mem(l, n - 1)});
            end
            $display("smslines mem 0..%0d ok (first %h last %h)", n - 1, FIRSTC, LASTC);
        end
    endtask

    // lines [n, 240) must still hold the sentinel (never written)
    task check_sentinel(input integer n);
        integer l;
        begin
            for (l = n; l < 240; l = l + 1)
                if (dut.mem[l * 256 + 7] !== 12'h000)
                    fail("buffer above active line", l, {12'b0, dut.mem[l * 256 + 7]}, 24'h000000);
            $display("smslines lines %0d..239 untouched ok", n);
        end
    endtask

    // sweep y through a frame with the release held off; the first halt
    // entry must be at the first vblank line (no entry can precede it:
    // the trigger is edge-detected on that exact line)
    task check_halt(input integer want);
        integer y, entries, at;
        begin
            por_n = 0; @(posedge clk); #1; @(posedge clk); #1;
            por_n = 1; @(posedge clk); #1; @(posedge clk); #1;
            entries = 0; at = -1;
            for (y = 0; y < 280; y = y + 1) begin
                wy = y[8:0]; wx = 0; wce = 0;
                @(posedge clk); #1;
                if (dut.frame_halt && entries == 0) begin
                    entries = 1; at = y;
                end
            end
            if (entries != 1 || at != want) begin
                $display("FAIL: halt entries=%0d first at y=%0d, want first entry at %0d (m1=%b m3=%b gg=%b)",
                         entries, at, want, m1, m3, gg);
                $fatal(1, "tb_smslines: FAIL");
            end
            $display("smslines halt at y=%0d ok", want);
        end
    endtask

`ifdef HZ120
    reg [23:0] img [0:720*480-1];
    reg [23:0] img_ref [0:720*480-1];
`else
    reg [23:0] img [0:1280*720-1];
    reg [23:0] img_ref [0:1280*720-1];
`endif
    // what each sink shows: rgb while cx = x + 1
    always @(posedge clk_pixel) begin
`ifdef HZ120
        if (dut.cy < H && dut.cx >= 11'd1 && dut.cx <= 11'd720) begin
            img[dut.cy * 720 + dut.cx - 1] = dut.rgb;
            img_ref[dut.cy * 720 + dut.cx - 1] = base.rgb;
        end
`else
        if (dut.cy < H && dut.cx >= 11'd1 && dut.cx <= 11'd1280) begin
            img[dut.cy * 1280 + dut.cx - 1] = dut.rgb;
            img_ref[dut.cy * 1280 + dut.cx - 1] = base.rgb;
        end
`endif
    end

    // wait for the end of line 0: one HDMI frame has elapsed
    task wait_frame;
        begin
            while (dut.cy != 0) @(posedge clk_pixel);
            while (dut.cy == 0) @(posedge clk_pixel);
        end
    endtask

    // img now holds one full frame settled with the current settings
    // (sl_rows latches at cy==0, the smode sync is 2 flops)
    task capture;
        begin
            wait_frame;
            wait_frame;
        end
    endtask

    // full-frame model check for an SMS active height at the centre column
    task check_pic(input integer lines, input on, input out, input thick, input [1:0] dk);
        integer row, line, rr, R, nd, top, x;
        reg [23:0] want, got;
        begin
            R = ROWS;
`ifdef HZ120
            // at 2 rows per line thin and thick darken 1 row alike
            nd = 1;
`else
            nd = thick ? 2 : 1;
`endif
            top = exp_top(lines);
`ifdef HZ120
            x = 360;
`else
            x = 640;
`endif
            for (row = 0; row < H; row = row + 1) begin
`ifdef HZ120
                got = img[row * 720 + x];
`else
                got = img[row * 1280 + x];
`endif
                if (out) begin
                    // Full: fractional rows from the top of the frame
                    line = row * lines / H;
                    want = to_rgb(want_mem(line, lines - 1));
                    if (on && ((row % R) >= R - nd)) want = darken(want, dk);
                end else begin
                    // Integer: rows*lines centred
                    if (row < top || row >= top + R * lines)
                        want = BORDER;
                    else begin
                        line = (row - top) / R;
                        rr = (row - top) % R;
                        want = to_rgb(want_mem(line, lines - 1));
                        if (on && (rr >= R - nd)) want = darken(want, dk);
                    end
                end
                if (got !== want) fail(out ? "full picture" : "integer picture", row, got, want);
            end
            $display("smslines %0d-line %s scanlines %s ok", lines, out ? "full" : "integer", on ? "on" : "off");
        end
    endtask

    // pixel-identical reference check (192-line SMS and GG)
    task check_ref(input [8*32-1:0] what);
        integer p, bad, n;
        begin
            bad = 0;
`ifdef HZ120
            n = 720 * 480;
`else
            n = 1280 * 720;
`endif
            for (p = 0; p < n; p = p + 1)
                if (img[p] !== img_ref[p]) begin
                    bad = bad + 1;
                    if (bad <= 4)
                        $display("MISMATCH %0s pix %0d: got %h want %h", what, p, img[p], img_ref[p]);
                end
            if (bad != 0) begin
                $display("FAIL: %0s: %0d pixels differ from pre-tall-mode baseline", what, bad);
                $fatal(1, "tb_smslines: FAIL");
            end
            $display("smslines %0s pixel-identical to pre-tall-mode baseline", what);
        end
    endtask

    task set_mode(input g, input i1, input i3);
        begin
            gg = g; m1 = i1; m3 = i3;
            repeat (4) @(posedge clk);
        end
    endtask

    task set_scan(input on, input out, input thick, input [1:0] dk);
        begin
            sl_on = on; sl_out = out; sl_thick = thick; sl_dark = dk;
        end
    endtask

    // identical bytes into both frame buffers (ref capped at its 192 lines)
    task preload(input integer n);
        integer l, c;
        begin
            for (l = 0; l < n; l = l + 1)
                for (c = 0; c < 256; c = c + 1) begin
                    dut.mem[l * 256 + c] = want_mem(l, n - 1);
                    if (l < 192) base.mem[l * 256 + c] = want_mem(l, n - 1);
                end
        end
    endtask

    // sentinel into the tall store (direct hierarchical write, instant)
    task sentinel;
        integer l, c;
        begin
            for (l = 0; l < 240; l = l + 1)
                for (c = 0; c < 256; c = c + 1)
                    dut.mem[l * 256 + c] = 12'h000;
        end
    endtask

    initial begin
        integer l, c;
        // audio divider has no reset (as in silicon): start it defined
        dut.audio_divider = 0; dut.clk_audio = 0;
        base.audio_divider = 0; base.clk_audio = 0;
        por_n = 0;
        #1001 por_n = 1;

        // ---- 192-line SMS: identical to pre-tall-mode baseline --------
        set_mode(0, 0, 0);
        preload(192);
        set_scan(1, 0, 0, 2); capture; check_pic(192, 1, 0, 0, 2); check_ref("192 integer");
        set_scan(1, 1, 1, 1); capture; check_pic(192, 1, 1, 1, 1); check_ref("192 full");

        // ---- Game Gear: identical to int/round7 ------------------------
        set_mode(1, 0, 0);
        set_scan(1, 0, 0, 2); capture; check_ref("gg integer");

        // ---- halt lines -------------------------------------------------
        set_mode(0, 0, 0); check_halt(192);
        set_mode(1, 0, 0); check_halt(192);
        set_mode(0, 1, 0); check_halt(224);
        set_mode(0, 0, 1); check_halt(240);

        // ---- 224-line mode ----------------------------------------------
        set_mode(0, 1, 0);
        ref_hold = 1;
        sentinel;
        wfill(224);
        ref_hold = 0;
        check_mem(224);
        check_sentinel(224);
        preload(224);   // identical bytes for the picture checks below
        set_scan(0, 0, 0, 0); capture; check_pic(224, 0, 0, 0, 0);
        set_scan(1, 0, 0, 2); capture; check_pic(224, 1, 0, 0, 2);
        set_scan(0, 1, 0, 0); capture; check_pic(224, 0, 1, 0, 0);
        set_scan(1, 1, 0, 2); capture; check_pic(224, 1, 1, 0, 2);

        // ---- 240-line mode ----------------------------------------------
        set_mode(0, 0, 1);
        ref_hold = 1;
        sentinel;
        wfill(240);
        ref_hold = 0;
        check_mem(240);
        preload(240);
        set_scan(0, 0, 0, 0); capture; check_pic(240, 0, 0, 0, 0);
        set_scan(1, 0, 1, 3); capture; check_pic(240, 1, 0, 1, 3);
        set_scan(0, 1, 0, 0); capture; check_pic(240, 0, 1, 0, 0);
        set_scan(1, 1, 1, 1); capture; check_pic(240, 1, 1, 1, 1);

        $display("tb_smslines: PASS");
        $finish;
    end

    initial begin
        #8000000000;
        $fatal(1, "tb_smslines: timeout");
    end

endmodule
