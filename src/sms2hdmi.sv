
`include "variant.vh"

module sms2hdmi (
	input clk,
	input resetn,

    // sms video signals
    input ce_pix,
    input [8:0] x,
    input [8:0] y,
    input [11:0] color,

    input [15:0] audio_l,
    input [15:0] audio_r,

    // overlay interface
    input overlay,
    output [7:0] overlay_x,
    output [7:0] overlay_y,
    input [14:0] overlay_color, // BGR5
    input scanlines,            // core_config[16]: scanlines on
    input [1:0] sl_darkness,    // core_config[19:18]: 25, 50, 75, 100 % dark
    input sl_thick,             // core_config[20]: thick lines
    input sl_out,               // core_config[21]: scale, 0 = integer, 1 = full
    input [31:0] video_config,  // colour controls, CRT mask and (Game Gear only) LCD grid, see video_fx.v
    input gg,                   // 1: Game Gear mode, show the 160x144 window (core_config[0])

	// video clocks
	input clk_pixel,
	input clk_5x_pixel,

    // frame lock: halt request for the SMS (clk domain), see below
    output frame_halt,

    // 1: standard timing (1650-pixel 720p, 858-pixel 480p120); 0: native
    // console rate (NATIVE_FRAME_WIDTH). The top level ties this off.
    input std_timing,
`ifdef HZ120
    // black frame insertion: 0 off (both 120 Hz frames lit), 1 black
    // inserted frame, 2 inserted frame at 1/2 brightness, 3 same as 1
    input [1:0] bfi_mode,
`endif

	// output signals
	output       tmds_clk_n,
	output       tmds_clk_p,
	output [2:0] tmds_d_n,
	output [2:0] tmds_d_p
);

`ifdef HZ120
localparam CLKFRQ = 54000;        // 54 MHz pixel clock (480p120)
`else
localparam CLKFRQ = 74250;
`endif
localparam AUDIO_BIT_WIDTH = 16;

// video stuff
wire [9:0] cy;
wire [10:0] cx;

//
// BRAM frame buffer
//
localparam MEM_DEPTH=256*192;

logic [11:0] mem [0:MEM_DEPTH-1];       // 72 KB
logic [15:0] mem_portA_addr;
logic [11:0] mem_portA_wdata;           // BGR444
logic mem_portA_we;

wire [15:0] mem_portB_addr;
logic [11:0] mem_portB_rdata;

// BRAM port A read/write
always @(posedge clk) begin
    if (mem_portA_we) begin
        mem[mem_portA_addr] <= mem_portA_wdata;
    end
end

// BRAM port B read
always @(posedge clk_pixel) begin
    mem_portB_rdata <= mem[mem_portB_addr];
end

// 
// Data input and initial background loading
//
logic [8:0] x_r;
logic [8:0] y_r;
always @(posedge clk) begin
    x_r <= x;
    y_r <= y;
    mem_portA_we <= 1'b0;
    if (ce_pix && y < 192 && x != 0 && x <= 256) begin  // the core outputs image from 1 to 256
        mem_portA_addr[15:8] <= y[7:0];
        mem_portA_addr[7:0] <= x[7:0] - 8'b1;
        mem_portA_wdata[11:0] <= color;
        mem_portA_we <= 1'b1;
    end
end

`ifdef HZ120
// Frame lock: halt the SMS once per game frame so the VDP frame stays ahead
// of the HDMI read and the single framebuffer never tears. The HDMI output
// runs at twice the game rate for black frame insertion (BFI): each game
// frame is read out twice, once lit and once as the inserted (black or
// dimmed) frame, so the lock releases the SMS once per two HDMI frames.
//
// The NTSC SMS frame (59.9345 Hz at 53.7037 MHz, 262 lines of 3420 system
// clocks; 60.0935 Hz at the hz120 variant's 53.8462 MHz sys clock) is
// shorter than two native-rate 480p120 HDMI frames (119.8801 Hz at
// 54 MHz with 858-pixel lines, the standard 480p120 line). Halting the
// whole machine for the difference (about 42 us) once per game frame locks
// the SMS to exactly half the HDMI rate, 59.9401 Hz (+0.029 % vs the
// original console, never slower), with a fixed phase. The sys clock bump
// (53.7037 to 53.8462 MHz) is needed because no integer line at 54 MHz
// locks the stock clock: 858 would run the game faster than the machine
// (no halt can speed it up) and 859 would run it slower than the original.
//
// Phase: the SMS waits at y 192 (the first vblank line in 192-line mode.
// In the 224/240-line modes y 192 is inside the generated picture, but the
// frame buffer stores only lines 0-191, so everything displayed is written
// by then in every mode; all three NTSC modes are 262-line frames and the
// read ages are identical, see sim/framelock) and runs again when HDMI
// reaches RELEASE_ROW in a lit frame. The
// VDP then leads the HDMI read on every visible line (about 0.5 ms at the
// tightest, the last SMS line 191; sim min age 27717 sys. Line 0 leads by
// ~6.6 ms). The
// release is edge-triggered (one toggle per two HDMI frames over a
// synchroniser) so a late arrival waits for the next pair and the phase is
// exact every frame after at most two frames, including after reset, game
// reload and menu pause. PAL frames (313 lines) are longer than the HDMI
// frame, so the top level ignores the halt in PAL mode and PAL runs free
// as before.
//
// LCD image retention: BFI at 120 Hz always shows the image on frames of
// the same LCD polarity, leaving a DC bias. Every BFI_SWAP_FRAMES game
// frames (~30 s) the lit/inserted assignment flips, so the image averages
// to zero DC over minutes. The flip is armed at a release and takes effect
// at the next frame start, so one boundary shows two lits or two blacks in
// a row (alternating); the release cadence never moves, so there is no tear
// and no audio gap, just one 8 ms duplicate per swap. The menu overlay is
// exempt from darkening, so the menu itself stays steady while the game
// behind it keeps alternating. The swap only runs in modes 1-3 (mode 0
// shows both frames lit, so there is no bias to cancel).
localparam HALT_LINE = 192;         // VDP line at which to wait
localparam RELEASE_ROW = 400;       // HDMI row whose start releases the SMS (lit frames)
localparam BFI_SWAP_FRAMES = 1800;  // game frames between lit/inserted swaps (~30 s)

// HDMI frame parity (toggles every frame) and the BFI phase: the inserted
// (darkened) frame is bfi_ins ^ bfi_phase, while releases stay on lit
// frames so the game timing never shifts at a swap.
reg bfi_ins = 1'b1;
reg bfi_phase = 1'b0;
reg [15:0] bfi_swap_cnt = 16'd0;
reg bfi_swap_pending = 1'b0;
reg at_f0_q = 1'b0;
reg at_rel_q = 1'b0;
reg rel_tgl = 1'b0;
always @(posedge clk_pixel) begin
    at_f0_q <= (cy == 10'd0);
    if ((cy == 10'd0) && !at_f0_q) begin
        bfi_ins <= ~bfi_ins;
        if (bfi_swap_pending) begin
            bfi_phase <= ~bfi_phase;
            bfi_swap_pending <= 1'b0;
        end
    end
    at_rel_q <= (cy == RELEASE_ROW);
    if ((cy == RELEASE_ROW) && !at_rel_q && !bfi_ins) begin
        rel_tgl <= ~rel_tgl;
        if (bfi_mode != 2'd0 && bfi_swap_cnt == BFI_SWAP_FRAMES - 1) begin
            bfi_swap_cnt <= 16'd0;
            bfi_swap_pending <= 1'b1;
        end else if (bfi_mode != 2'd0)
            bfi_swap_cnt <= bfi_swap_cnt + 16'd1;
    end
end
`else
// Frame lock: halt the SMS once per frame so the VDP frame stays ahead of
// the HDMI read and the single framebuffer never tears.
//
// The NTSC SMS frame (59.9345 Hz from the board PLLs, 262 lines of 3420
// system clocks) is shorter than the native-rate 720p HDMI frame
// (59.9274 Hz with NATIVE_FRAME_WIDTH 1652). Halting the whole machine for
// the difference (about 2 us) once per frame locks the SMS to exactly the
// HDMI rate, 0.008 % fast, with a fixed phase.
//
// Phase: the SMS waits at y 192 (the first vblank line in 192-line mode.
// In the 224/240-line modes y 192 is inside the generated picture, but the
// frame buffer stores only lines 0-191, so everything displayed is written
// by then in every mode; all three NTSC modes are 262-line frames and the
// read ages are identical, see sim/framelock) and runs again when HDMI
// reaches RELEASE_ROW. The
// VDP then leads the HDMI read on every visible line (about 1.8 ms at the
// tightest, the top Game Gear line; 3.3 ms or more across the SMS picture). The
// release is edge-triggered (one toggle per HDMI frame over a
// synchroniser) so a late arrival waits for the next frame and the phase is
// exact every frame after at most two frames, including after reset, game
// reload and menu pause. PAL frames (313 lines) are longer than the HDMI
// frame, so the top level ignores the halt in PAL mode and PAL runs free
// as before.
localparam HALT_LINE = 192;         // VDP line at which to wait
localparam RELEASE_ROW = 400;       // HDMI row whose start releases the SMS

// HDMI side: one toggle per frame as cy passes RELEASE_ROW
reg at_rel_q = 1'b0;
reg rel_tgl = 1'b0;
always @(posedge clk_pixel) begin
    at_rel_q <= (cy == RELEASE_ROW);
    if ((cy == RELEASE_ROW) && !at_rel_q)
        rel_tgl <= ~rel_tgl;
end
`endif

// SMS side: synchronise the toggle, then wait/release
reg [2:0] rel_sync = 3'b0;
reg rel_lvl_q = 1'b0;
wire rel_pulse = rel_sync[2] ^ rel_lvl_q;   // one clk per release (every HDMI frame; every two in hz120)
reg halt_req = 1'b0;
reg was_halt_line = 1'b0;
always @(posedge clk) begin
    rel_sync <= {rel_sync[1:0], rel_tgl};
    rel_lvl_q <= rel_sync[2];
    was_halt_line <= (y == HALT_LINE);
    if (!resetn) begin
        rel_sync <= 3'b0;
        rel_lvl_q <= 1'b0;
        halt_req <= 1'b0;
        was_halt_line <= 1'b0;
    end else if (rel_pulse && halt_req)
        halt_req <= 1'b0;                       // HDMI at the release row: run
    else if ((y == HALT_LINE) && !was_halt_line)
        halt_req <= 1'b1;                       // line 191 written: wait
end
assign frame_halt = halt_req;

// audio stuff
localparam AUDIO_RATE=48000;
localparam AUDIO_CLK_DELAY = CLKFRQ * 1000 / AUDIO_RATE / 2;
logic [$clog2(AUDIO_CLK_DELAY)-1:0] audio_divider;
logic clk_audio;

always_ff@(posedge clk_pixel) 
begin
    if (audio_divider != AUDIO_CLK_DELAY - 1) 
        audio_divider++;
    else begin 
        clk_audio <= ~clk_audio; 
        audio_divider <= 0; 
    end
end

// TODO: need to use async fifo to cross clock domains
reg [15:0] audio_sample_word [1:0], audio_sample_word0 [1:0];
always @(posedge clk_pixel) begin
    audio_sample_word0[0] <= audio_l;
    audio_sample_word[0] <= audio_sample_word0[0];
    audio_sample_word0[1] <= audio_r;
    audio_sample_word[1] <= audio_sample_word0[1];
end

//
// Video
`ifdef HZ120
// Scale SMS image from 256x192 to 512x384 (4:3, exactly 2x) at Integer, to
// 640x480 (4:3, 2.5x, the same aspect as the 60 Hz Full picture) at Full,
// in the 720x480 frame
// Scale overlay image from 256x224 to 640x480 without scanlines (as before at 720p)
// In Game Gear mode, scale the 160x144 window (frame buffer 48..207, 24..167)
// from the same image to 480x432 (10:9, exactly 3x) at Integer, to 533x480
// (10:9 full height, the same aspect as the 60 Hz Full window) at Full
// See scanlines.v for the scanline geometry: integer scale is 2 rows per line
// (SMS, top 48) or 3 (Game Gear, top 24); at Full the rows darken evenly
// spaced output rows. Nearest neighbour.
//
`else
// Video
// Scale SMS image from 256x192 to 960x720
// Scale overlay image from 256x224 to 960x720
// In Game Gear mode, scale the 160x144 window (frame buffer 48..207, 24..167)
// from the same image to 800x720 (10:9, exactly 5x)
// See scanlines.v for the scanline geometry: integer scale is 3 rows per line,
// 768x576 centred; the Game Gear window is already 5 rows per line.
// Nearest neighbour.
//
`endif
localparam WIDTH=256;
localparam HEIGHT=224;
localparam OV_LINES=224;      // lines of the overlay picture
wire [23:0] rgb;            // actual RGB output
reg [23:0] rgb_pre;         // before video_fx
reg pic_pre;                // rgb_pre is a pixel of the picture, not the border or the overlay
reg dark_pre;
reg col_s1;                 // the grid's last-column flag on its way to rgb_pre
reg col_pre, row_pre;       // with rgb_pre into video_fx
reg active                  ;
reg [$clog2(WIDTH)-1:0] xx  ; // scaled-down pixel position
reg [$clog2(HEIGHT)-1:0] yy ;
reg [10:0] xcnt             ;
reg [10:0] ycnt             ;                  // fractional scaling counters
reg [9:0] cy_r;
reg gg_r, gg_rr;                // gg synchronized to the pixel clock domain
wire gg_mode = gg_rr & ~overlay;// scale the 160x144 GG window (overlay keeps full frame)
wire [7:0] lines = overlay ? OV_LINES[7:0] : gg_mode ? 8'd144 : 8'd192;  // source lines in the picture
wire [31:0] vcfg_fx = gg_mode ? video_config : {video_config[31:16], 1'b0, video_config[14:0]};
always @(posedge clk_pixel) begin // the LCD grid is Game Gear only: in SMS mode bit 15 is
    gg_r <= gg;             // cleared before video_fx, so the geometry never depends on it
    gg_rr <= gg_r;
end

// scanlines: sl_geom frames are scaled by a whole number of rows per source line.
// The Game Gear window is already whole rows and columns per source pixel at
// integer scale, so with
// the grid on (video_config[15]) sl_rows just takes the integer geometry for its
// `last` flag; the picture does not move.
wire sl_geom, sl_show, sl_dark, sl_last;
wire [7:0] sl_yy;
wire [1:0] sl_dk;
sl_rows sl (
    .clk(clk_pixel), .cy(cy),
    .cfg_on(scanlines), .cfg_dark(sl_darkness), .cfg_thick(sl_thick), .cfg_out(sl_out),
    .cfg_grid(gg_mode & video_config[15]), .hide(overlay),
`ifdef HZ120
    .rows(gg_mode ? 3'd3 : 3'd2), .dark_thin(3'd1), .dark_thick(gg_mode ? 3'd2 : 3'd1),
    .lines(gg_mode ? 8'd144 : 8'd192), .top(gg_mode ? 10'd24 : 10'd48),
`else
    .rows(gg_mode ? 3'd5 : 3'd3), .dark_thin(gg_mode ? 3'd2 : 3'd1), .dark_thick(gg_mode ? 3'd3 : 3'd2),
    .lines(gg_mode ? 8'd144 : 8'd192), .top(gg_mode ? 10'd0 : 10'd72),
`endif
    .geom(sl_geom), .pic_top(), .yy(sl_yy), .show(sl_show), .dark(sl_dark), .last(sl_last), .darkness(sl_dk)
);
reg [7:0] yy_s;             // source line to show
always @(posedge clk_pixel) yy_s <= sl_geom ? sl_yy : yy;

// GG: read the 160x144 window at (48,24) in the frame buffer, else the whole frame
assign mem_portB_addr = gg_mode ? ((yy_s + 8'd24) * WIDTH + xx + 8'd48)
                               : (yy_s * WIDTH + xx);
assign overlay_x = xx;
assign overlay_y = yy_s;
`ifdef HZ120
// image width on screen: 512 (4:3, exactly 2x) at integer scale, 640 (2.5x)
// at full scale, 480 (10:9, exactly 3x) for the GG window at integer scale,
// 533 (10:9 full height) for the GG window at full scale
wire [11:0] XSIZE  = gg_mode ? (sl_geom ? 12'd480 : 12'd533) : sl_geom ? 12'd512 : 12'd640;
wire [11:0] XSTART = (12'd720 - XSIZE) >> 1;
wire [11:0] XSTOP  = (12'd720 + XSIZE) >> 1;
`else
// image width on screen: 960 (4:3) at full scale, 768 (4:3 on 576 rows) at integer
// scale, 800 (10:9) for the GG window
wire [11:0] XSIZE  = gg_mode ? 12'd800 : sl_geom ? 12'd768 : 12'd960;
wire [11:0] XSTART = (12'd1280 - XSIZE) >> 1;
wire [11:0] XSTOP  = (12'd1280 + XSIZE) >> 1;
`endif

// address calculation
// Assume the video occupies fully on the Y direction, we are upscaling the video by `480/height`
// (hz120) or `720/height` (standard).
// xcnt and ycnt are fractional scaling counters.
// video_fx follows rgb_pre with FX_LAT register stages. Its first stage is the one that sl_dim
// used to be (active started at XSTART - 2 then), so active starts FX_LAT - 1 clocks earlier
// than that, at XSTART - 1 - FX_LAT. The xx/xcnt counters, and so the overlay lookup, run with it.
// col_s1 carries the grid's last-column flag (the address cycle's wrap, which says the pixel
// addressed on the previous clock was the last column of its source pixel) to rgb_pre.
localparam FX_LAT = 11;     // clocks from rgb_pre to rgb, see video_fx.v
wire [10:0] xstep = gg_mode ? 11'd160 : 11'd256;   // source px per output px
wire [10:0] ystep = overlay ? 11'd224 : gg_mode ? 11'd144 : 11'd192;
always @(posedge clk_pixel) begin
    reg active_t;
    reg [10:0] xcnt_next;
    reg [10:0] ycnt_next;
    xcnt_next = xcnt + xstep;
    ycnt_next = ycnt + ystep;

    active_t = 0;
    if ({1'b0, cx} == XSTART - 12'd1 - FX_LAT) begin
        active_t = 1;
        active <= 1;
    end else if ({1'b0, cx} == XSTOP - 12'd1 - FX_LAT) begin
        active_t = 0;
        active <= 0;
    end

    col_s1 <= gg_mode & (active_t | active) & (xcnt_next >= XSIZE);

    if (active_t | active) begin        // increment xx
        xcnt <= xcnt_next;
        if (xcnt_next >= XSIZE) begin
            xcnt <= xcnt_next - XSIZE;
            xx <= xx + 1;
        end
    end

    cy_r <= cy;
    if (cy[0] != cy_r[0]) begin         // increment yy at new lines
        ycnt <= ycnt_next;
`ifdef HZ120
        if (ycnt_next >= 480) begin
            ycnt <= ycnt_next - 480;
`else
        if (ycnt_next >= 720) begin
            ycnt <= ycnt_next - 720;
`endif
            if (yy != lines - 8'd1) yy <= yy + 1;      // (the rows below the picture show the last line)
        end
    end

    if (cx == 0) begin
        xx <= 0;
        xcnt <= 0;
    end
    
    if (cy == 0) begin
        yy <= 0;
        ycnt <= 0;
    end 

end

`ifdef HZ120
// calc rgb value to hdmi. In an inserted BFI frame the whole picture area
// (border included) is black or dimmed; the menu overlay is exempt so the
// menu stays steady while the game is paused under it. Mode 3 is the NES
// rolling scan there; other cores show it as black like mode 1.
wire [1:0] bfi_eff = (bfi_mode == 2'd3) ? 2'd1 : bfi_mode;
wire bfi_eff_ins = bfi_ins ^ bfi_phase;
wire bfi_dark = bfi_eff_ins & (bfi_eff != 2'd0) & ~overlay;
reg [23:0] rgb_norm;
always @* begin
    if (active & sl_show) begin
        if (overlay)
            rgb_norm = {overlay_color[4:0],3'b0,overlay_color[9:5],3'b0,overlay_color[14:10],3'b0};      // BGR5 to RGB8
        else
            rgb_norm = {mem_portB_rdata[3:0], 4'b0, mem_portB_rdata[7:4], 4'b0, mem_portB_rdata[11:8], 4'b0}; // BGR4 to RGB8
    end else
        rgb_norm = 24'h303030;
end
always @(posedge clk_pixel) begin
    if (!bfi_dark)
        rgb_pre <= rgb_norm;
    else if (bfi_eff == 2'd1)
        rgb_pre <= 24'h000000;
    else
        rgb_pre <= {1'b0, rgb_norm[23:17], 1'b0, rgb_norm[15:9], 1'b0, rgb_norm[7:1]};
    pic_pre <= active & sl_show & ~overlay & ~bfi_dark;
    dark_pre <= active & sl_show & ~overlay & sl_dark & ~bfi_dark;
    col_pre <= col_s1;
    row_pre <= gg_mode & active & sl_show & ~overlay & sl_last;
end
`else
// calc rgb value to hdmi
reg [23:0] NES_PALETTE [0:63];
always @(posedge clk_pixel) begin
    if (active & sl_show) begin
        if (overlay)
            rgb_pre <= {overlay_color[4:0],3'b0,overlay_color[9:5],3'b0,overlay_color[14:10],3'b0};       // BGR5 to RGB8
        else
            rgb_pre <= {mem_portB_rdata[3:0], 4'b0, mem_portB_rdata[7:4], 4'b0, mem_portB_rdata[11:8], 4'b0}; // BGR4 to RGB8
    end else
        rgb_pre <= 24'h303030;
    pic_pre <= active & sl_show & ~overlay;
    dark_pre <= active & sl_show & ~overlay & sl_dark;
    col_pre <= col_s1;
    row_pre <= gg_mode & active & sl_show & ~overlay & sl_last;
end
`endif

// colour controls, the scanline darkening, the LCD grid (Game Gear only) and the CRT mask
video_fx fx (
    .clk(clk_pixel), .cx(cx), .cy(cy), .video_config(vcfg_fx),
    .rgb_in(rgb_pre), .pic_in(pic_pre), .dark_in(dark_pre), .darkness(sl_dk),
    .col_last_in(col_pre), .row_last_in(row_pre),
    .rgb_out(rgb)
);

// HDMI output.
logic[2:0] tmds;

`ifdef HZ120
localparam VIDEOID = 48;            // 480p120: VIC 2/3 totals at 54 MHz, for BFI
localparam VIDEO_REFRESH = 120.0;   // the audio clock regeneration only: the line is NATIVE below

// SMS native rate x2: 119.8801 Hz at 858 pixels per line (game 59.9401 Hz),
// the standard 480p120 line (858x525); the stock sys clock cannot lock it,
// so the hz120 variant bumps the sys PLL (see smstang_top.sv).
localparam NATIVE_WIDTH = 858;
`else
localparam VIDEOID = 4;
localparam VIDEO_REFRESH = 60.0;

// SMS/Genesis native rate: 59.9274 Hz at 1652 pixels per line (+0.008 %).
localparam NATIVE_WIDTH = 1652;
`endif

hdmi #( .VIDEO_ID_CODE(VIDEOID), 
        .DVI_OUTPUT(0), 
        .VIDEO_REFRESH_RATE(VIDEO_REFRESH),
        .IT_CONTENT(1),
        .AUDIO_RATE(AUDIO_RATE), 
        .AUDIO_BIT_WIDTH(AUDIO_BIT_WIDTH),
        .START_X(0),
        .START_Y(0),
        .NATIVE_FRAME_WIDTH(NATIVE_WIDTH) )

hdmi( .clk_pixel_x5(clk_5x_pixel), 
        .clk_pixel(clk_pixel), 
        .clk_audio(clk_audio),
        .reset( 0 ),
        .std_timing(std_timing),
        .rgb(rgb), 
        .audio_sample_word(audio_sample_word),
        .tmds(tmds), 
        .tmds_clock(tmdsClk), 
        .cx(cx), 
        .cy(cy),
        .frame_width( ),
        .frame_height( ) );

// Gowin LVDS output buffer
ELVDS_OBUF tmds_bufds [3:0] (
    .I({clk_pixel, tmds}),
    .O({tmds_clk_p, tmds_d_p}),
    .OB({tmds_clk_n, tmds_d_n})
);

endmodule
