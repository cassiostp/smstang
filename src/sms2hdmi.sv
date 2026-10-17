
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

    // 1: standard 1650-pixel 60.00 Hz HDMI timing; 0: native rate (the top
    // level ties this off; a menu option for it may come later)
    input std_timing,

	// output signals
	output       tmds_clk_n,
	output       tmds_clk_p,
	output [2:0] tmds_d_n,
	output [2:0] tmds_d_p
);

localparam CLKFRQ = 74250;
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

// SMS side: synchronise the toggle, then wait/release
reg [2:0] rel_sync = 3'b0;
reg rel_lvl_q = 1'b0;
wire rel_pulse = rel_sync[2] ^ rel_lvl_q;   // one clk per HDMI frame
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
// Scale SMS image from 256x192 to 960x720
// Scale overlay image from 256x224 to 960x720
// In Game Gear mode, scale the 160x144 window (frame buffer 48..207, 24..167)
// from the same image to 800x720 (10:9, exactly 5x)
// See scanlines.v for the scanline geometry: integer scale is 3 rows per line,
// 768x576 centred; the Game Gear window is already 5 rows per line.
// Nearest neighbour.
//
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

// scanlines: sl_geom frames are scaled by a whole number of rows per source line
// The Game Gear window is 5 rows and 5 columns per source pixel either way, so with
// the grid on (video_config[15]) sl_rows just takes the integer geometry for its
// `last` flag; the picture does not move.
wire sl_geom, sl_show, sl_dark, sl_last;
wire [7:0] sl_yy;
wire [1:0] sl_dk;
sl_rows sl (
    .clk(clk_pixel), .cy(cy),
    .cfg_on(scanlines), .cfg_dark(sl_darkness), .cfg_thick(sl_thick), .cfg_out(sl_out),
    .cfg_grid(gg_mode & video_config[15]), .hide(overlay),
    .rows(gg_mode ? 3'd5 : 3'd3), .dark_thin(gg_mode ? 3'd2 : 3'd1), .dark_thick(gg_mode ? 3'd3 : 3'd2),
    .lines(gg_mode ? 8'd144 : 8'd192), .top(gg_mode ? 10'd0 : 10'd72),
    .geom(sl_geom), .pic_top(), .yy(sl_yy), .show(sl_show), .dark(sl_dark), .last(sl_last), .darkness(sl_dk)
);
reg [7:0] yy_s;             // source line to show
always @(posedge clk_pixel) yy_s <= sl_geom ? sl_yy : yy;

// GG: read the 160x144 window at (48,24) in the frame buffer, else the whole frame
assign mem_portB_addr = gg_mode ? ((yy_s + 8'd24) * WIDTH + xx + 8'd48)
                               : (yy_s * WIDTH + xx);
assign overlay_x = xx;
assign overlay_y = yy_s;
// image width on screen: 960 (4:3) at full scale, 768 (4:3 on 576 rows) at integer
// scale, 800 (10:9) for the GG window
wire [11:0] XSIZE  = gg_mode ? 12'd800 : sl_geom ? 12'd768 : 12'd960;
wire [11:0] XSTART = (12'd1280 - XSIZE) >> 1;
wire [11:0] XSTOP  = (12'd1280 + XSIZE) >> 1;

// address calculation
// Assume the video occupies fully on the Y direction, we are upscaling the video by `720/height`.
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
        if (ycnt_next >= 720) begin
            ycnt <= ycnt_next - 720;
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

// colour controls, the scanline darkening, the LCD grid (Game Gear only) and the CRT mask
video_fx fx (
    .clk(clk_pixel), .cx(cx), .cy(cy), .video_config(vcfg_fx),
    .rgb_in(rgb_pre), .pic_in(pic_pre), .dark_in(dark_pre), .darkness(sl_dk),
    .col_last_in(col_pre), .row_last_in(row_pre),
    .rgb_out(rgb)
);

// HDMI output.
logic[2:0] tmds;

localparam VIDEOID = 4;
localparam VIDEO_REFRESH = 60.0;

// SMS/Genesis native rate: 59.9274 Hz at 1652 pixels per line (+0.008 %).
localparam NATIVE_WIDTH = 1652;

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
