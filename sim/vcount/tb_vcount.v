// Line count per frame of the real src/video.v in every mode (issue #46).
// Drives pal/smode_M1/smode_M3, counts lines (hcount wraps) between
// consecutive vsync rising edges: NTSC 192/224/240 must all be 262 lines,
// PAL 192/224/240 must all be 313. The pre-fix PAL 240-line mode counts 297
// (vcount jumps 266 -> 482); the fix jumps to 466. vsync must stay one
// pulse per frame in every mode (its width in lines is printed).
`timescale 1ns/1ps

module tb_vcount;
    reg clk = 0;
    always #5 clk = ~clk;

    reg pal = 0, m1 = 0, m3 = 0;
    wire [8:0] x, y;
    wire hsync, vsync, hblank, vblank;

    video dut (
        .clk(clk), .ce_pix(1'b1), .pal(pal), .border(1'b0), .ggres(1'b0),
        .mask_column(1'b0), .cut_mask(1'b0), .smode_M1(m1), .smode_M3(m3),
        .x(x), .y(y), .hsync(hsync), .vsync(vsync),
        .hblank(hblank), .vblank(vblank)
    );

    integer fails = 0;

    task run_mode(input p, input i1, input i3, input integer want_lines, input [8*16-1:0] name);
        integer n_frames, n_lines, n_vsw;
        reg [8:0] hprev;
        reg pv;
        begin
            pal = p; m1 = i1; m3 = i3;
            // video.v has no reset: force the counters, then measure the
            // 4th vsync-delimited frame so the window is fully in this mode
            dut.hcount = 0; dut.vcount = 0;
            dut.hsync = 0; dut.vsync = 0; dut.hblank = 0; dut.vblank = 0;
            hprev = 0; pv = 0;
            n_frames = 0; n_lines = 0; n_vsw = 0;
            while (n_frames < 4) begin
                @(posedge clk);
                #1;
                if (hprev == 9'd487) begin
                    // a line just elapsed; dut.vsync already holds the new
                    // line's value, pv the elapsed line's
                    if (dut.vsync && !pv) begin
                        n_frames = n_frames + 1;
                        if (n_frames == 4) begin
                            $display("VCOUNT %0s: %0d lines/frame (want %0d), vsync %0d lines wide",
                                     name, n_lines, want_lines, n_vsw);
                            if (n_lines !== want_lines) begin
                                $display("VCOUNT FAIL %0s", name);
                                fails = fails + 1;
                            end
                        end
                        n_lines = 0;
                        n_vsw = 0;
                    end
                    n_lines = n_lines + 1;
                    if (dut.vsync)
                        n_vsw = n_vsw + 1;
                    pv = dut.vsync;
                end
                hprev = dut.hcount;
            end
        end
    endtask

    initial begin
        run_mode(0, 0, 0, 262, "NTSC-192");
        run_mode(0, 1, 0, 262, "NTSC-224");
        run_mode(0, 0, 1, 262, "NTSC-240");
        run_mode(1, 0, 0, 313, "PAL-192");
        run_mode(1, 1, 0, 313, "PAL-224");
        run_mode(1, 0, 1, 313, "PAL-240");
        if (fails != 0) begin
            $display("tb_vcount: FAIL (%0d modes)", fails);
            $fatal(1, "tb_vcount: FAIL");
        end
        $display("tb_vcount: PASS");
        $finish;
    end
endmodule
