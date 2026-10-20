// Frame-lock reference bench (iverilog): the real sms2hdmi (the HDMI pixel
// counter is the sim stub at native width) against the cycle-exact VDP
// model, over ~10 NTSC frames with a menu pause and a game-reload reset.
// Checks the locked rate (sys clocks per HDMI frame), the halt wait per
// frame, read ages (no tear: every line read was written in this VDP frame,
// with margin) and HDMI audio continuity. Fails with $fatal on violation.
// The long soak over hundreds of frames runs under Verilator (fl_top.sv +
// tb_frame_lock.cpp); scanlines are on here, off there.
// Clocks carry the exact silicon ratio (1 fs precision: the DUT is
// delay-free RTL, so only this file's precision matters): clk_sys
// 50*29/27 MHz, clk_pixel 74.25 MHz.
// The hz120 variant runs the same bench at 480p120 over ~14 NTSC frames:
// the lock releases the SMS once per two HDMI frames, and the bench also
// checks per-line write-frame tags (every pass comes from a single game
// frame, lit passes step by one, the inserted pass repeats the lit one)
// and the inserted pass (black in mode 1, the Lottes HI/LO complement in
// modes 2-3, lit in mode 0).
// Modes 2 (bright) / 3 (beam): the stimulus picture is static, so adjacent
// settled frames must be exact complements through sim/framelock/bfi_lottes.hex
// (per row and channel the max of the two passes is the table HI and the min
// is the table LO of one game code), and same-parity frames two apart must be
// bit-identical. Mode 2 shows the HI side on the same frame for every row
// (global parity); mode 3 shows it on opposite frames for the top/bottom
// halves (complementary halves, split at cy 240). Checked on rgb_pre (before
// video_fx: the bench runs with scanlines on, and both passes get identical
// downstream processing).
// BFI mode from -DBFI_MODE (default 1).
`include "variant.vh"
`timescale 1ns/1fs

module tb_frame_lock;

`ifndef BFI_MODE
    `define BFI_MODE 1
`endif

    reg clk = 0, clk_pixel = 0;
`ifdef HZ120
    always #9.285714 clk = ~clk;            // 53.8462 MHz system clock
    always #9.259259 clk_pixel = ~clk_pixel;// 54 MHz pixel clock
`else
    always #9.310345 clk = ~clk;            // 53.7037 MHz system clock
    always #6.734007 clk_pixel = ~clk_pixel;// 74.25 MHz pixel clock
`endif

    reg por_n = 0, pause_tb = 0;
    wire frame_halt;
    wire pause_eff = pause_tb | frame_halt;
    wire [8:0] x, y;
    wire [15:0] audio_l, audio_r;

    sms_frame_model model (
        .clk(clk), .pause_eff(pause_eff), .mode_m1(1'b0), .mode_m3(1'b0),
        .ce_cpu(), .ce_vdp(), .ce_pix(model_ce), .ce_sp(),
        .x(x), .y(y), .audio_l(audio_l), .audio_r(audio_r)
    );
    wire model_ce;

    reg [11:0] pix_color;
    always @(posedge clk)
        pix_color <= y[7:0] + 12'd8;         // each line its own colour

    wire [2:0] tmds_d_p, tmds_d_n;
    wire tmds_clk_p, tmds_clk_n;
    wire [7:0] overlay_x, overlay_y;
    sms2hdmi dut (
        .clk(clk), .resetn(por_n),
        .ce_pix(model_ce), .x(x), .y(y), .color(pix_color),
        .audio_l(audio_l), .audio_r(audio_r),
        .overlay(1'b0), .overlay_x(overlay_x), .overlay_y(overlay_y),
        .overlay_color(15'd0),
        .scanlines(1'b1), .sl_darkness(2'd1), .sl_thick(1'b0), .sl_out(1'b0),
`ifdef HZ120
        .video_config({10'b0, 2'd`BFI_MODE, 20'b0}), .gg(1'b0), .smode_m1(1'b0), .smode_m3(1'b0),
        .frame_halt(frame_halt), .std_timing(1'b0), .bfi_mode(2'd`BFI_MODE),
`else
        .video_config(32'd0), .gg(1'b0), .smode_m1(1'b0), .smode_m3(1'b0),
        .frame_halt(frame_halt), .std_timing(1'b0),
`endif
        .clk_pixel(clk_pixel), .clk_5x_pixel(1'b0),
        .tmds_clk_n(tmds_clk_n), .tmds_clk_p(tmds_clk_p),
        .tmds_d_n(tmds_d_n), .tmds_d_p(tmds_d_p)
    );

    // sys-clock edge counter (exact time base for waits and ages)
    reg [63:0] sys_edge = 0;
    always @(posedge clk) sys_edge <= sys_edge + 1;

    // write stamps per source line, from the real frame-buffer port
    reg [63:0] wr_last [0:191];
    reg [63:0] wr_prev [0:191];
`ifdef HZ120
    // write-frame tags per source line (which game frame wrote them).
    // Signed: unwritten lines stay -1 so the >= 0 tag test skips them; the
    // array was reg [31:0] (unsigned) until the bright/beam rework, which
    // made every comparison against the signed pass_fmax convert to
    // unsigned and froze pass_fmax at -1, so no per-frame tag or BFI check
    // below ever ran.
    integer wr_frame [0:191];
    integer game_wr = 0;
`endif
    integer li;
    initial for (li = 0; li < 192; li = li + 1) begin
`ifdef HZ120
        wr_last[li] = 0; wr_prev[li] = 0; wr_frame[li] = -1;
`else
        wr_last[li] = 0; wr_prev[li] = 0;
`endif
    end
    always @(posedge clk) begin
        if (dut.mem_portA_we && dut.mem_portA_addr[15:8] < 192) begin
            wr_prev[dut.mem_portA_addr[15:8]] <= wr_last[dut.mem_portA_addr[15:8]];
            wr_last[dut.mem_portA_addr[15:8]] <= sys_edge;
`ifdef HZ120
            wr_frame[dut.mem_portA_addr[15:8]] <= game_wr;
`endif
        end
    end

    integer violations = 0;
    integer halt_entered = 0, released = 0, hdmi_frames = 0, vdp_frames = 0;
`ifdef HZ120
    integer locked = 0, last_lit = -1, last_event_hdmi = 0;
    integer pass_fmin = 0, pass_fmax = -1, pass_ins = 0;
    integer lit_nonzero = 0, ins_nonzero = 0, stale_in_frame = 0;
    reg [23:0] lit_c [0:524];
    integer ci;
    initial for (ci = 0; ci <= 524; ci = ci + 1) lit_c[ci] = 0;
    // modes 2/3 (Lottes HI/LO): forward table from bfi_lottes.hex ("HHLL"
    // per input code); the settled-frame history (static stimulus:
    // complements adjacent, identical 2 apart).
    reg [15:0] HEXRAW [0:255];
    reg [7:0] THI [0:255];
    reg [7:0] TLO [0:255];
    reg [23:0] pre_c [0:524];
    reg [23:0] pre_p [0:524];
    reg [23:0] pre_pp [0:524];
    integer have_hist = 0;   // settled Lottes frames captured (0..2+)
    integer nchk = 0;        // settled mode-2/3 frames with pixel checks
    initial begin
        for (ci = 0; ci <= 524; ci = ci + 1) begin
            pre_c[ci] = 0; pre_p[ci] = 0; pre_pp[ci] = 0;
        end
        $readmemh("bfi_lottes.hex", HEXRAW);
        for (ci = 0; ci < 256; ci = ci + 1) begin
            THI[ci] = HEXRAW[ci][15:8]; TLO[ci] = HEXRAW[ci][7:0];
        end
    end
    // 1 if (mx, mn) is a table pair for some game code
    function is_pair(input [7:0] mx, input [7:0] mn);
        integer c;
        begin
            is_pair = 0;
            for (c = 0; c < 256; c = c + 1)
                if (THI[c] == mx && TLO[c] == mn) is_pair = 1;
        end
    endfunction
`else
    integer locked = 0, settled = 0;
`endif
    reg [1:0] forgive = 1;
    reg [63:0] t_enter = 0, last_wait = 0;
`ifdef HZ120
    reg halt_q = 0, prev192 = 0;
`else
    reg halt_q = 0, prev240ish = 0;
`endif
    reg [63:0] frame_min_age = ~0, frame_max_age = 0;
`ifdef HZ120
    reg [63:0] run_min_age = ~0, run_max_age = 0, run_min_wait = ~0, run_max_wait = 0;
`else
    reg [63:0] run_min_age = ~0, run_max_age = 0;
`endif
    reg [9:0] cy_q = 0;
    reg [7:0] rd_q = 0;
    reg [63:0] frame_sys0 = 0, frame_len = 0;
    reg prev_pause = 0, prev_por = 0;

    // HDMI audio continuity at the DUT's audio tick
    reg prev_ca = 0;
    reg signed [15:0] prev_hw = 0;
    reg hw_first = 1;
    integer max_hdmi_step = 0, max_repeat = 0, cur_repeat = 0;
    reg [63:0] mask_until = 0;              // skip audio checks around events

    always @(posedge clk) begin
        if (pause_tb || !por_n) locked <= 0;
        if ((pause_tb != prev_pause) || (por_n != prev_por)) begin
            forgive <= 2;                   // two transitional waits after an event
`ifdef HZ120
            last_event_hdmi <= hdmi_frames;
            last_lit <= -1;
            mask_until <= sys_edge + 6 * 449167;   // ~6 HDMI frames
`else
            settled <= 0;                   // re-lock grace for the age checks
            mask_until <= sys_edge + 3 * 896150;   // ~3 HDMI frames
`endif
        end
        prev_pause <= pause_tb;
        prev_por <= por_n;
`ifdef HZ120
        if ((y == 192) && !prev192) game_wr <= game_wr + 1;
`endif
        if (frame_halt && !halt_q) begin
            t_enter <= sys_edge;
            halt_entered <= halt_entered + 1;
        end
        if (!frame_halt && halt_q) begin
            last_wait <= sys_edge - t_enter;
            released <= released + 1;
`ifdef HZ120
            if (last_wait < run_min_wait) run_min_wait <= sys_edge - t_enter;
            if (last_wait > run_max_wait) run_max_wait <= sys_edge - t_enter;
`endif
            if (!pause_tb && por_n) begin
                // transitional waits (one full-frame slip after an event,
                // plus the reset-on-halt-entry race, which truncates one
                // halt and leaves the next wait arbitrary too) are
                // forgiven; anything else must be the rate difference
`ifdef HZ120
                // (~2293 sys clocks)
                if (sys_edge - t_enter >= 1900 && sys_edge - t_enter <= 2700) begin
`else
                // (~107 sys clocks)
                if (sys_edge - t_enter >= 80 && sys_edge - t_enter <= 140) begin
`endif
                    locked <= 1;
                    forgive <= 0;
                end else if (forgive != 0) begin
                    forgive <= forgive - 1;
                    locked <= 1;
                end else begin
                    $display("FAIL: wait %0d sys (halt #%0d)", sys_edge - t_enter, released);
                    violations <= violations + 1;
                    locked <= 1;
                end
            end
        end
        halt_q <= frame_halt;
        // VDP frames counted at first-vblank entries with the model running
`ifdef HZ120
        if ((y == 192) && !prev192 && !pause_tb && por_n)
            vdp_frames <= vdp_frames + 1;
        prev192 <= (y == 192);
`else
        if ((y == 192) && !prev240ish && !pause_tb && por_n)
            vdp_frames <= vdp_frames + 1;
        prev240ish <= (y == 192);
`endif
    end

`ifdef HZ120
    wire bfi_eff_ins = dut.bfi_ins ^ dut.bfi_phase;
    // tag/age checks only cover reads in the visible picture (rows 48..431
    // with scanlines on): border-row reads address held lines whose tags
    // legitimately lag a frame
    wire pic_row = dut.cy >= 48 && dut.cy < 432 && dut.cy != 0;
`endif
    always @(posedge clk_pixel) begin
        cy_q <= dut.cy;
`ifdef HZ120
        if (dut.cy == 100 && cy_q != 100) pass_ins <= bfi_eff_ins;
        // BFI check: picture-centre sample (360, cy) on every picture row
        if (dut.cx == 360 && pic_row && locked) begin
            if (`BFI_MODE >= 2) begin
                // Lottes modes carry real picture on both passes: capture
                // the pre-fx pixel for the exact table check at frame end
                pre_c[dut.cy] <= dut.rgb_pre;
                if (dut.rgb_pre != 0) begin
                    if (pass_ins) ins_nonzero <= ins_nonzero + 1;
                    else lit_nonzero <= lit_nonzero + 1;
                end
            end else if (pass_ins) begin
                if (`BFI_MODE == 1 && dut.rgb != 0) ins_nonzero <= ins_nonzero + 1;
                if (`BFI_MODE == 0 && dut.rgb != 0) lit_nonzero <= lit_nonzero + 1;
            end else begin
                lit_c[dut.cy] <= dut.rgb;
                if (dut.rgb != 0) lit_nonzero <= lit_nonzero + 1;
            end
        end
`endif
        if (dut.cy == 0 && cy_q != 0) begin
            frame_len <= sys_edge - frame_sys0;
            frame_sys0 <= sys_edge;
            if (frame_sys0 != 0 && por_n) begin
`ifdef HZ120
                // locked rate: 858x525 px at 54 MHz = 449166.7 sys clocks
                if (sys_edge - frame_sys0 < 449160 ||
                    sys_edge - frame_sys0 > 449173) begin
                    $display("FAIL: hdmi frame %0d sys long", sys_edge - frame_sys0);
                    violations <= violations + 1;
                end
                if (locked) begin
                    // settled: the phase is exact again at most two game
                    // frames (four HDMI frames) after any event
                    if (hdmi_frames - last_event_hdmi > 4) begin
                        if (pass_fmax >= 0) begin
                            if (pass_fmin != pass_fmax) begin
                                $display("FAIL: mixed game frames %0d..%0d in hdmi frame %0d (ins=%0d)",
                                         pass_fmin, pass_fmax, hdmi_frames, pass_ins);
                                violations <= violations + 1;
                            end else if (!pass_ins) begin
                                if (last_lit >= 0 && pass_fmin != last_lit + 1) begin
                                    $display("FAIL: lit game frame %0d after %0d in hdmi frame %0d",
                                             pass_fmin, last_lit, hdmi_frames);
                                    violations <= violations + 1;
                                end
                                last_lit <= pass_fmin;
                            end else if (last_lit >= 0 && pass_fmin != last_lit) begin
                                $display("FAIL: inserted game frame %0d, lit was %0d, in hdmi frame %0d",
                                         pass_fmin, last_lit, hdmi_frames);
                                violations <= violations + 1;
                            end
                            if (`BFI_MODE == 1 && pass_ins && ins_nonzero) begin
                                $display("FAIL: %0d non-black centre samples in inserted hdmi frame %0d",
                                         ins_nonzero, hdmi_frames);
                                violations <= violations + 1;
                            end
                            if (`BFI_MODE >= 2) begin : lottes
                                // Lottes HI/LO: the stimulus picture is static,
                                // so this frame must be the exact complement of
                                // the previous settled frame through the hex
                                // table (per row/channel: max = HI, min = LO
                                // of one game code), and identical to the
                                // settled frame two back. Mode 2 carries HI on
                                // the same frame for every row; mode 3 flips
                                // it per half (top rows cy<240 vs bottom).
                                integer r, k, c;
                                integer side_top, side_bot, side, err;
                                reg [23:0] a, b;
                                reg [7:0] ca, cb, mx, mn;
                                reg ok;
                                err = 0;
                                nchk <= nchk + 1;
                                if (have_hist >= 1) begin
                                    side_top = -1; side_bot = -1;
                                    for (r = 48; r < 432 && err == 0; r = r + 1) begin
                                        a = pre_c[r]; b = pre_p[r];
                                        for (k = 0; k < 3 && err == 0; k = k + 1) begin
                                            ca = (a >> (8 * k)) & 8'hff;
                                            cb = (b >> (8 * k)) & 8'hff;
                                            mx = ca > cb ? ca : cb;
                                            mn = ca < cb ? ca : cb;
                                            ok = 0;
                                            for (c = 0; c < 256; c = c + 1)
                                                if (THI[c] == mx && TLO[c] == mn) ok = 1;
                                            if (!ok) begin
                                                $display("FAIL: mode-%0d row %0d ch %0d %h/%h not a table pair, in frame %0d",
                                                         `BFI_MODE, r, k, ca, cb, hdmi_frames);
                                                err = 1;
                                            end else if (mx != mn) begin
                                                side = (ca == mx) ? 1 : 0;
                                                if (r < 240) begin
                                                    if (side_top < 0) side_top = side;
                                                    else if (side_top != side) begin
                                                        $display("FAIL: mode-%0d HI side flips mid top half at row %0d, in frame %0d",
                                                                 `BFI_MODE, r, hdmi_frames);
                                                        err = 1;
                                                    end
                                                end else begin
                                                    if (side_bot < 0) side_bot = side;
                                                    else if (side_bot != side) begin
                                                        $display("FAIL: mode-%0d HI side flips mid bottom half at row %0d, in frame %0d",
                                                                 `BFI_MODE, r, hdmi_frames);
                                                        err = 1;
                                                    end
                                                end
                                            end
                                        end
                                    end
                                    if (err == 0 && (side_top < 0 || side_bot < 0)) begin
                                        $display("FAIL: mode-%0d frame %0d has no discriminating row (all HI==LO)",
                                                 `BFI_MODE, hdmi_frames);
                                        err = 1;
                                    end else if (err == 0 && `BFI_MODE == 2 && side_top != side_bot) begin
                                        $display("FAIL: mode-2 frame %0d top/bottom HI sides differ (%0d/%0d)",
                                                 hdmi_frames, side_top, side_bot);
                                        err = 1;
                                    end else if (err == 0 && `BFI_MODE == 3 && side_top == side_bot) begin
                                        $display("FAIL: mode-3 frame %0d top/bottom HI sides agree (%0d)",
                                                 hdmi_frames, side_top);
                                        err = 1;
                                    end
                                end
                                if (err == 0 && have_hist >= 2) begin
                                    for (r = 48; r < 432; r = r + 1) begin
                                        if (pre_c[r] !== pre_pp[r]) begin
                                            $display("FAIL: mode-%0d row %0d %h != same-parity frame %h, in frame %0d",
                                                     `BFI_MODE, r, pre_c[r], pre_pp[r], hdmi_frames);
                                            err = 1;
                                            r = 432;
                                        end
                                    end
                                end
                                if (err) violations <= violations + 1;
                                // rotate the history
                                for (r = 48; r < 432; r = r + 1) begin
                                    pre_pp[r] <= pre_p[r];
                                    pre_p[r] <= pre_c[r];
                                end
                                if (have_hist < 3) have_hist <= have_hist + 1;
                            end
                            if (!pass_ins && !lit_nonzero) begin
                                $display("FAIL: lit hdmi frame %0d all black at centre", hdmi_frames);
                                violations <= violations + 1;
                            end
                            if (frame_max_age > 860000) begin
                                $display("FAIL: max age %0d sys in hdmi frame %0d",
                                         frame_max_age, hdmi_frames);
                                violations <= violations + 1;
                            end
                            if (stale_in_frame) begin
                                $display("FAIL: %0d stale reads in frame %0d", stale_in_frame, hdmi_frames);
                                violations <= violations + 1;
                            end
                        end else begin
                            // mixed game frames (or none): not a settled
                            // Lottes pair; drop the history
                            have_hist <= 0;
                        end
                        if (frame_max_age > run_max_age) run_max_age <= frame_max_age;
                        if (frame_min_age < run_min_age) run_min_age <= frame_min_age;
                    end else begin
                        // inside the post-event settle window: drop history
                        have_hist <= 0;
                    end
                end
`else
                // locked rate: 1652x750 px at 74.25 MHz = 896146.6 sys clocks
                if (sys_edge - frame_sys0 < 896140 ||
                    sys_edge - frame_sys0 > 896153) begin
                    $display("FAIL: hdmi frame %0d sys long", sys_edge - frame_sys0);
                    violations <= violations + 1;
                end
                if (locked) begin
                    settled <= settled + 1;
                    // settled>3: the phase is exact again at most two frames
                    // after any event (startup, pause-off, reload). Stale
                    // would be a whole VDP frame (896k sys); the bound
                    // also covers the Game Gear window's oldest line.
                    if (settled > 3 && frame_max_age > 550000) begin
                        $display("FAIL: max age %0d sys in hdmi frame %0d",
                                 frame_max_age, hdmi_frames);
                        violations <= violations + 1;
                    end
                    if (settled > 3 && frame_min_age < 150000) begin
                        $display("FAIL: min age %0d sys in hdmi frame %0d",
                                 frame_min_age, hdmi_frames);
                        violations <= violations + 1;
                    end
                    if (frame_max_age > run_max_age) run_max_age <= frame_max_age;
                    if (frame_min_age < run_min_age) run_min_age <= frame_min_age;
                end
`endif
            end
            hdmi_frames <= hdmi_frames + 1;
            frame_min_age <= ~0;
            frame_max_age <= 0;
`ifdef HZ120
            pass_fmin <= 0; pass_fmax <= -1;
            lit_nonzero <= 0; ins_nonzero <= 0; stale_in_frame <= 0;
`endif
        end
        if (dut.mem_portB_addr[15:8] != rd_q) begin
            rd_q <= dut.mem_portB_addr[15:8];
`ifdef HZ120
            if (rd_q < 192 && locked && wr_last[rd_q] != 0 && pic_row) begin
                if (sys_edge - wr_last[rd_q] < frame_min_age)
                    frame_min_age <= sys_edge - wr_last[rd_q];
                if (sys_edge - wr_last[rd_q] > frame_max_age)
                    frame_max_age <= sys_edge - wr_last[rd_q];
                if (sys_edge - wr_last[rd_q] > 900000)
                    stale_in_frame <= stale_in_frame + 1;
                if (wr_frame[rd_q] >= 0) begin
                    if (pass_fmax < 0 || wr_frame[rd_q] < pass_fmin) pass_fmin <= wr_frame[rd_q];
                    if (wr_frame[rd_q] > pass_fmax) pass_fmax <= wr_frame[rd_q];
                end
            end
`else
            if (rd_q < 192 && locked && wr_last[rd_q] != 0) begin
                if (sys_edge - wr_last[rd_q] < frame_min_age)
                    frame_min_age <= sys_edge - wr_last[rd_q];
                if (sys_edge - wr_last[rd_q] > frame_max_age)
                    frame_max_age <= sys_edge - wr_last[rd_q];
            end
`endif
        end
        // audio: max step (440 Hz: ~1890 theory) and repeat runs; the stream
        // legitimately freezes during the pause itself, so only the running
        // stream is checked (plus a re-lock window after every event)
        if (dut.clk_audio && !prev_ca && por_n && !pause_tb && sys_edge > mask_until) begin
            if (!hw_first) begin
                integer d;
                d = $signed(dut.audio_sample_word[0]) - prev_hw;
                if (d < 0) d = -d;
                if (d > max_hdmi_step) max_hdmi_step <= d;
                if (d == 0) begin
                    cur_repeat <= cur_repeat + 1;
                    if (cur_repeat > max_repeat) max_repeat <= cur_repeat;
                end else
                    cur_repeat <= 0;
                if (d > 4200) begin
                    $display("FAIL: audio step %0d", d);
                    violations <= violations + 1;
                end
                if (cur_repeat > 6) begin
                    $display("FAIL: audio repeat run %0d", cur_repeat);
                    violations <= violations + 1;
                end
            end
            hw_first <= 0;
            prev_hw <= dut.audio_sample_word[0];
        end else if (dut.clk_audio && !prev_ca) begin
            hw_first <= 1'b1;   // masked/frozen tick: re-arm, resume is fresh
        end
        prev_ca <= dut.clk_audio;
    end

    initial begin
        // the audio divider has no reset (as in silicon): start it defined
        dut.audio_divider = 0;
        dut.clk_audio = 0;
        #1001 por_n = 1;
`ifdef HZ120
        wait (vdp_frames >= 5);
        pause_tb = 1;                       // menu pause ~30 ms
        #30000000;
        pause_tb = 0;
        wait (vdp_frames >= 9);
        por_n = 0;                          // game reload
        #1000;
        por_n = 1;
        wait (vdp_frames >= 14);
        $display("done: bfi=%0d halted=%0d released=%0d hdmi=%0d vdp=%0d violations=%0d",
                 `BFI_MODE, halt_entered, released, hdmi_frames, vdp_frames, violations);
        $display("mode checked frames: bright/beam=%0d", nchk);
        $display("audio: max_step=%0d max_repeat=%0d", max_hdmi_step, max_repeat);
        $display("ages sys: min=%0d max=%0d", run_min_age, run_max_age);
        $display("waits sys: min=%0d max=%0d", run_min_wait, run_max_wait);
        if (violations != 0 || released < 12) begin
            $display("tb_frame_lock: FAIL");
            $fatal(1, "tb_frame_lock: FAIL");
        end
`else
        wait (vdp_frames >= 3);
        pause_tb = 1;                       // menu pause ~30 ms
        #30000000;
        pause_tb = 0;
        wait (vdp_frames >= 6);
        por_n = 0;                          // game reload
        #1000;
        por_n = 1;
        wait (vdp_frames >= 10);
        $display("done: halted=%0d released=%0d hdmi=%0d vdp=%0d violations=%0d",
                 halt_entered, released, hdmi_frames, vdp_frames, violations);
        $display("audio: max_step=%0d max_repeat=%0d", max_hdmi_step, max_repeat);
        $display("ages sys: min=%0d max=%0d", run_min_age, run_max_age);
        if (violations != 0 || released < 9) begin
            $display("tb_frame_lock: FAIL");
            $fatal(1, "tb_frame_lock: FAIL");
        end
`endif
        $display("tb_frame_lock: PASS");
        $finish;
    end

    // watchdog: 12 VDP frames with margin (16 at 480p120)
    initial begin
`ifdef HZ120
        #400000000;
`else
        #14000000000;
`endif
        $display("FAIL: watchdog");
        $fatal(1, "tb_frame_lock: FAIL");
    end

endmodule
