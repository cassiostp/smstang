
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
    input [31:0] video_config,  // colour controls, CRT mask, LCD grid (Game Gear only) and smoothing, see video_fx.v, smooth.v
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
// Nearest neighbour; smooth.v blends the source pixels (video_config[19:18]). For that the
// frame buffer is read twice per source column, the line to show and its neighbour line.
//
localparam WIDTH=256;
localparam HEIGHT=224;
localparam OV_LINES=224;      // lines of the overlay picture
wire [23:0] rgb;            // actual RGB output
reg [23:0] rgb_pre;         // before video_fx
reg pic_pre;                // rgb_pre is a pixel of the picture, not the border or the overlay
reg dark_pre;
reg col_s1, row_s1;         // the grid flags at the frame buffer address cycle
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

// smoothing: the frame buffer is read for line yy_s and for yb_s, one clock each in turn
wire [1:0] sm_mode;
wire sm_rd_b;
wire [23:0] sm_rgb;
reg [7:0] yb_s;             // the neighbour line to blend with
wire [7:0] ysel = sm_rd_b ? yb_s : yy_s;
wire [7:0] xx_ov;           // xx, SM_LAT clocks old
// GG: read the 160x144 window at (48,24) in the frame buffer, else the whole frame
assign mem_portB_addr = gg_mode ? ((ysel + 8'd24) * WIDTH + xx + 8'd48)
                               : (ysel * WIDTH + xx);
assign overlay_x = xx_ov;
assign overlay_y = yy_s;
// image width on screen: 960 (4:3) for the full frame, 768 (4:3 on 576 rows) for the
// full frame with scanlines, 800 (10:9) for the GG window
wire [11:0] XSIZE  = gg_mode ? 12'd800 : sl_geom ? 12'd768 : 12'd960;
wire [11:0] XSTART = (12'd1280 - XSIZE) >> 1;
wire [11:0] XSTOP  = (12'd1280 + XSIZE) >> 1;

// address calculation
// Assume the video occupies fully on the Y direction, we are upscaling the video by `720/height`.
// xcnt and ycnt are fractional scaling counters.
// video_fx follows rgb_pre with FX_LAT register stages. Its first stage is the one that sl_dim
// used to be (active started at XSTART - 2 then), so active starts FX_LAT - 1 clocks earlier
// than that, at XSTART - 1 - FX_LAT. The smoothing is between the frame buffer and rgb_pre:
// rgb_pre comes SM_LAT clocks later than the frame buffer lookup alone would give it, so active
// starts SM_LAT clocks earlier still. The xx/xcnt counters run with it; the overlay lookup
// address (xx_ov), `active` and the grid flags are delayed back by SM_LAT, so the picture,
// the overlay, the border and the grid land where they did.
// col_s1 carries the grid's last-column flag (the address cycle's wrap, which says the pixel
// addressed on the previous clock was the last column of its source pixel); row_s1 the
// last-row flag for the address cycle. Both travel to rgb_pre in shift registers.
localparam FX_LAT = 11;     // clocks from rgb_pre to rgb, see video_fx.v
localparam SM_LAT = 10;     // the frame buffer lookup is followed by smooth.v (LAT 9) and the rgb_pre register
reg cnew = 1'b0;            // the frame buffer address is the first of a source column
wire [10:0] xstep = gg_mode ? 11'd160 : 11'd256;   // source px per output px
wire [10:0] ystep = overlay ? 11'd224 : gg_mode ? 11'd144 : 11'd192;
always @(posedge clk_pixel) begin
    reg active_t;
    reg [10:0] xcnt_next;
    reg [10:0] ycnt_next;
    xcnt_next = xcnt + xstep;
    ycnt_next = ycnt + ystep;

    active_t = 0;
    if ({1'b0, cx} == XSTART - 12'd1 - FX_LAT - SM_LAT) begin
        active_t = 1;
        active <= 1;
    end else if ({1'b0, cx} == XSTOP - 12'd1 - FX_LAT - SM_LAT) begin
        active_t = 0;
        active <= 0;
    end

    // the first source column starts with the first pixel, the others when xx changes
    cnew <= ({1'b0, cx} == XSTART - 12'd2 - FX_LAT - SM_LAT) | ((active_t | active) & (xcnt_next >= XSIZE));

    col_s1 <= gg_mode & (active_t | active) & (xcnt_next >= XSIZE);
    row_s1 <= gg_mode & (active_t | active) & sl_show & ~overlay & sl_last;

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

// xx, active and the grid flags, delayed by SM_LAT
reg [8*SM_LAT-1:0] xx_sh;
reg [SM_LAT-1:0] act_sh, col_sh, row_sh;
always @(posedge clk_pixel) begin
    xx_sh <= {xx_sh[8*SM_LAT-9:0], xx};
    act_sh <= {act_sh[SM_LAT-2:0], active};
    col_sh <= {col_sh[SM_LAT-2:0], col_s1};
    row_sh <= {row_sh[SM_LAT-2:0], row_s1};
end
assign xx_ov = xx_sh[8*SM_LAT-1 -: 8];
wire active_d = act_sh[SM_LAT-1];
wire col_d = col_sh[SM_LAT-1];
wire row_d = row_sh[SM_LAT-1];

// The weights of the blend, from the same counters (smooth.v). Horizontally the output pixel
// is 256 (SMS) or 160 (GG) of the XSIZE units of a source pixel, vertically 192 (SMS),
// 144 (GG) or 224 (overlay) of 720.
localparam [16:0] KX_STEP_GG = (65536 * 256 + 160 / 2) / 160;
localparam [16:0] KX_HALF_960 = (65536 * 128 + 960 / 2) / 960;
localparam [16:0] KX_HALF_768 = (65536 * 128 + 768 / 2) / 768;
localparam [16:0] KX_HALF_800 = (65536 * 128 + 800 / 2) / 800;
localparam [16:0] KY_STEP_SMS = (65536 * 256 + 192 / 2) / 192;
localparam [16:0] KY_STEP_GG = (65536 * 256 + 144 / 2) / 144;
localparam [16:0] KY_STEP_OV = (65536 * 256 + 224 / 2) / 224;
localparam [16:0] KY_HALF = (65536 * 128 + 720 / 2) / 720;
wire [7:0] wx, wy_ax;
wire hnext, vnext_ax;
smooth_axis ax (
    .clk(clk_pixel), .mode(sm_mode), .pos(xcnt), .step(xstep), .size(XSIZE),
    .k_step(gg_mode ? KX_STEP_GG : 17'd65536),
    .k_half(gg_mode ? KX_HALF_800 : sl_geom ? KX_HALF_768 : KX_HALF_960),
    .first(xx == 8'd0), .last(xx == (gg_mode ? 8'd159 : 8'd255)), .w(wx), .next(hnext)
);
smooth_axis ay (
    .clk(clk_pixel), .mode(sm_mode), .pos(ycnt), .step(ystep), .size(12'd720),
    .k_step(overlay ? KY_STEP_OV : gg_mode ? KY_STEP_GG : KY_STEP_SMS), .k_half(KY_HALF),
    .first(yy_s == 8'd0), .last(yy_s == lines - 8'd1), .w(wy_ax), .next(vnext_ax)
);

// Integer-scale rows show whole lines: soft blends the rows at the edges of a line towards
// the line before and after it (SMS lines are 3 rows, 1/3 each way; Game Gear lines 5 rows,
// 2/5 and 1/5). Sharp has nothing to blend, the rows are whole. rphase is the output row
// within its source line: reset entering the picture, advanced every output row, wrapped at
// the last row of each line (sl_last/sl_show still show the row before at the change, so
// they say when the new row starts a line). The first line has no line before it, the last
// none after it.
reg [2:0] rphase = 3'd0;
always @(posedge clk_pixel) begin
    if (cy == 10'd0)
        rphase <= 3'd0;
    else if (cy[0] != cy_r[0]) begin       // a new output row
        if (!sl_show || sl_last)
            rphase <= 3'd0;
        else
            rphase <= rphase + 3'd1;
    end
end
localparam [7:0] W_THIRD = 8'd85;             // round(256 / 3)
localparam [7:0] W_FIFTH_1 = 8'd51;           // round(256 / 5)
localparam [7:0] W_FIFTH_2 = 8'd102;          // round(2 * 256 / 5)
reg [7:0] wy_g;
reg vnext_g;
always @(*) begin
    if (gg_mode) begin
        case (rphase)
            3'd0: begin vnext_g = 1'b0; wy_g = W_FIFTH_2; end
            3'd1: begin vnext_g = 1'b0; wy_g = W_FIFTH_1; end
            3'd3: begin vnext_g = 1'b1; wy_g = W_FIFTH_1; end
            3'd4: begin vnext_g = 1'b1; wy_g = W_FIFTH_2; end
            default: begin vnext_g = 1'b0; wy_g = 8'd0; end
        endcase
        if ((rphase < 3'd2 && yy_s == 8'd0) || (rphase > 3'd2 && yy_s == lines - 8'd1))
            wy_g = 8'd0;
    end else begin
        case (rphase)
            3'd0: begin vnext_g = 1'b0; wy_g = W_THIRD; end
            3'd2: begin vnext_g = 1'b1; wy_g = W_THIRD; end
            default: begin vnext_g = 1'b0; wy_g = 8'd0; end
        endcase
        if ((rphase == 3'd0 && yy_s == 8'd0) || (rphase == 3'd2 && yy_s == lines - 8'd1))
            wy_g = 8'd0;
    end
end
wire [7:0] wy = sl_geom ? ((sm_mode == 2'd2) ? wy_g : 8'd0) : wy_ax;
wire vnext = sl_geom ? vnext_g : vnext_ax;
always @(posedge clk_pixel)
    yb_s <= vnext ? ((yy_s == lines - 8'd1) ? yy_s : yy_s + 8'd1)
                  : ((yy_s == 8'd0) ? yy_s : yy_s - 8'd1);

// the frame buffer lookup, and the first-of-column flag with it
reg [23:0] rgb_q;
reg cn1, cn2;
always @(posedge clk_pixel) begin
    rgb_q <= {mem_portB_rdata[3:0], 4'b0, mem_portB_rdata[7:4], 4'b0, mem_portB_rdata[11:8], 4'b0}; // BGR4 to RGB8
    cn1 <= cnew;
    cn2 <= cn1;
end

smooth sm (
    .clk(clk_pixel), .cy(cy), .cfg(video_config[19:18]), .mode(sm_mode),
    .rd_b(sm_rd_b), .rd_rgb(rgb_q), .col_new(cn2), .wx(wx), .hnext(hnext), .wy(wy),
    .rgb_out(sm_rgb)
);

// calc rgb value to hdmi
reg [23:0] NES_PALETTE [0:63];
always @(posedge clk_pixel) begin
    if (active_d & sl_show) begin
        if (overlay)
            rgb_pre <= {overlay_color[4:0],3'b0,overlay_color[9:5],3'b0,overlay_color[14:10],3'b0};       // BGR5 to RGB8
        else
            rgb_pre <= sm_rgb;
    end else
        rgb_pre <= 24'h303030;
    pic_pre <= active_d & sl_show & ~overlay;
    dark_pre <= active_d & sl_show & ~overlay & sl_dark;
    col_pre <= col_d;
    row_pre <= row_d;
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
