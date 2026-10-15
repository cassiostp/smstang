// Frame-lock reference bench (iverilog): the real sms2hdmi (the HDMI pixel
// counter is the sim stub at native width) against the cycle-exact VDP
// model, over ~10 NTSC frames with a menu pause and a game-reload reset.
// Checks the locked rate (sys clocks per HDMI frame), the halt wait per
// frame, read ages (no tear: every line read was written in this VDP frame,
// with margin) and HDMI audio continuity. Fails with $fatal on violation.
// The long soak over hundreds of frames runs under Verilator (fl_top.sv +
// tb_frame_lock.cpp); scanlines are on here, off there.
// tb clocks carry the exact silicon ratio (1 fs precision: the DUT is
// delay-free RTL, so only this file's precision matters): clk_sys
// 50*29/27 MHz, clk_pixel 74.25 MHz
`timescale 1ns/1fs

module tb_frame_lock;

    reg clk = 0, clk_pixel = 0;
    always #9.310345 clk = ~clk;            // 53.7037 MHz system clock
    always #6.734007 clk_pixel = ~clk_pixel;// 74.25 MHz pixel clock

    reg por_n = 0, pause_tb = 0;
    wire frame_halt;
    wire pause_eff = pause_tb | frame_halt;
    wire [8:0] x, y;
    wire [15:0] audio_l, audio_r;

    sms_frame_model model (
        .clk(clk), .pause_eff(pause_eff),
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
        .video_config(32'd0), .gg(1'b0),
        .frame_halt(frame_halt), .std_timing(1'b0),
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
    integer li;
    initial for (li = 0; li < 192; li = li + 1) begin
        wr_last[li] = 0; wr_prev[li] = 0;
    end
    always @(posedge clk) begin
        if (dut.mem_portA_we && dut.mem_portA_addr[15:8] < 192) begin
            wr_prev[dut.mem_portA_addr[15:8]] <= wr_last[dut.mem_portA_addr[15:8]];
            wr_last[dut.mem_portA_addr[15:8]] <= sys_edge;
        end
    end

    integer violations = 0;
    integer halt_entered = 0, released = 0, hdmi_frames = 0, vdp_frames = 0;
    integer locked = 0, settled = 0;
    reg [1:0] forgive = 1;
    reg [63:0] t_enter = 0, last_wait = 0;
    reg halt_q = 0, prev240ish = 0;
    reg [63:0] frame_min_age = ~0, frame_max_age = 0;
    reg [63:0] run_min_age = ~0, run_max_age = 0;
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
            settled <= 0;                   // re-lock grace for the age checks
            mask_until <= sys_edge + 3 * 896150;   // ~3 HDMI frames
        end
        prev_pause <= pause_tb;
        prev_por <= por_n;
        if (frame_halt && !halt_q) begin
            t_enter <= sys_edge;
            halt_entered <= halt_entered + 1;
        end
        if (!frame_halt && halt_q) begin
            last_wait <= sys_edge - t_enter;
            released <= released + 1;
            if (!pause_tb && por_n) begin
                // transitional waits (one full-frame slip after an event,
                // plus the reset-on-halt-entry race, which truncates one
                // halt and leaves the next wait arbitrary too) are
                // forgiven; anything else must be the rate difference
                if (sys_edge - t_enter >= 80 && sys_edge - t_enter <= 140) begin
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
        if ((y == 192) && !prev240ish && !pause_tb && por_n)
            vdp_frames <= vdp_frames + 1;
        prev240ish <= (y == 192);
    end

    always @(posedge clk_pixel) begin
        cy_q <= dut.cy;
        if (dut.cy == 0 && cy_q != 0) begin
            frame_len <= sys_edge - frame_sys0;
            frame_sys0 <= sys_edge;
            if (frame_sys0 != 0 && por_n) begin
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
            end
            hdmi_frames <= hdmi_frames + 1;
            frame_min_age <= ~0;
            frame_max_age <= 0;
        end
        if (dut.mem_portB_addr[15:8] != rd_q) begin
            rd_q <= dut.mem_portB_addr[15:8];
            if (rd_q < 192 && locked && wr_last[rd_q] != 0) begin
                if (sys_edge - wr_last[rd_q] < frame_min_age)
                    frame_min_age <= sys_edge - wr_last[rd_q];
                if (sys_edge - wr_last[rd_q] > frame_max_age)
                    frame_max_age <= sys_edge - wr_last[rd_q];
            end
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
        end
        prev_ca <= dut.clk_audio;
    end

    initial begin
        // the audio divider has no reset (as in silicon): start it defined
        dut.audio_divider = 0;
        dut.clk_audio = 0;
        #1001 por_n = 1;
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
        $display("tb_frame_lock: PASS");
        $finish;
    end

    // watchdog: 12 VDP frames with margin
    initial begin
        #14000000000;
        $display("FAIL: watchdog");
        $fatal(1, "tb_frame_lock: FAIL");
    end

endmodule
