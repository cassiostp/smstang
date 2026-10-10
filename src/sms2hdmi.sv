
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
    input sl_out,               // core_config[21]: dark output rows instead of an integer scale
    input gg,                   // 1: Game Gear mode, show the 160x144 window (core_config[0])

	// video clocks
	input clk_pixel,
	input clk_5x_pixel,

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
// See scanlines.v for the scanline geometry: with scanlines on, the SMS image is
// 3x3, 768x576 centred; the Game Gear window is already 5 rows per line.
//
localparam WIDTH=256;
localparam HEIGHT=224;
wire [23:0] rgb;            // actual RGB output
reg [23:0] rgb_pre;         // before the scanline darkening
reg dark_pre;
reg active                  ;
reg [$clog2(WIDTH)-1:0] xx  ; // scaled-down pixel position
reg [$clog2(HEIGHT)-1:0] yy ;
reg [10:0] xcnt             ;
reg [10:0] ycnt             ;                  // fractional scaling counters
reg [9:0] cy_r;
reg gg_r, gg_rr;                // gg synchronized to the pixel clock domain
wire gg_mode = gg_rr & ~overlay;// scale the 160x144 GG window (overlay keeps full frame)
always @(posedge clk_pixel) begin
    gg_r <= gg;
    gg_rr <= gg_r;
end

// scanlines: sl_geom frames are scaled by a whole number of rows per source line
wire sl_geom, sl_show, sl_dark;
wire [7:0] sl_yy;
wire [1:0] sl_dk;
sl_rows sl (
    .clk(clk_pixel), .cy(cy),
    .cfg_on(scanlines), .cfg_dark(sl_darkness), .cfg_thick(sl_thick), .cfg_out(sl_out), .hide(overlay),
    .rows(gg_mode ? 3'd5 : 3'd3), .dark_thin(gg_mode ? 3'd2 : 3'd1), .dark_thick(gg_mode ? 3'd3 : 3'd2),
    .lines(gg_mode ? 8'd144 : 8'd192), .top(gg_mode ? 10'd0 : 10'd72),
    .geom(sl_geom), .pic_top(), .yy(sl_yy), .show(sl_show), .dark(sl_dark), .darkness(sl_dk)
);
reg [7:0] yy_s;             // source line to show
always @(posedge clk_pixel) yy_s <= sl_geom ? sl_yy : yy;

// GG: read the 160x144 window at (48,24) in the frame buffer, else the whole frame
assign mem_portB_addr = gg_mode ? ((yy_s + 8'd24) * WIDTH + xx + 8'd48)
                               : (yy_s * WIDTH + xx);
assign overlay_x = xx;
assign overlay_y = yy_s;
// image width on screen: 960 (4:3) for the full frame, 768 (4:3 on 576 rows) for the
// full frame with scanlines, 800 (10:9) for the GG window
wire [11:0] XSIZE  = gg_mode ? 12'd800 : sl_geom ? 12'd768 : 12'd960;
wire [11:0] XSTART = (12'd1280 - XSIZE) >> 1;
wire [11:0] XSTOP  = (12'd1280 + XSIZE) >> 1;

// address calculation
// Assume the video occupies fully on the Y direction, we are upscaling the video by `720/height`.
// xcnt and ycnt are fractional scaling counters.
// The scanline darkening is a register stage after rgb_pre, so active starts one clock
// earlier than the picture it frames.
always @(posedge clk_pixel) begin
    reg active_t;
    reg [10:0] xcnt_next;
    reg [10:0] ycnt_next;
    xcnt_next = xcnt + (gg_mode ? 11'd160 : 11'd256);   // source px per output px
    ycnt_next = ycnt + (overlay ? 11'd224 : gg_mode ? 11'd144 : 11'd192);

    active_t = 0;
    if ({1'b0, cx} == XSTART - 12'd2) begin
        active_t = 1;
        active <= 1;
    end else if ({1'b0, cx} == XSTOP - 12'd2) begin
        active_t = 0;
        active <= 0;
    end

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
            yy <= yy + 1;
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
    dark_pre <= active & sl_show & ~overlay & sl_dark;
end
sl_dim dim (.clk(clk_pixel), .rgb_in(rgb_pre), .dark(dark_pre), .darkness(sl_dk), .rgb_out(rgb));

// HDMI output.
logic[2:0] tmds;

localparam VIDEOID = 4;
localparam VIDEO_REFRESH = 60.0;

hdmi #( .VIDEO_ID_CODE(VIDEOID), 
        .DVI_OUTPUT(0), 
        .VIDEO_REFRESH_RATE(VIDEO_REFRESH),
        .IT_CONTENT(1),
        .AUDIO_RATE(AUDIO_RATE), 
        .AUDIO_BIT_WIDTH(AUDIO_BIT_WIDTH),
        .START_X(0),
        .START_Y(0) )

hdmi( .clk_pixel_x5(clk_5x_pixel), 
        .clk_pixel(clk_pixel), 
        .clk_audio(clk_audio),
        .rgb(rgb), 
        .reset( 0 ),
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
