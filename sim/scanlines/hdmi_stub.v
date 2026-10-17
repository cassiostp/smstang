// Stand-ins for the Gowin and HDMI parts of a scaler, for simulation: a pixel
// counter with the real module's timing (cx, cy count the frame, and
// the picture is the rgb input seen while cx = x + 1), and a pass-through
// output buffer. The frame size follows the VIDEO_ID_CODE the DUT passes:
// 4 is the 1650x750 720p frame, 48 the 858x525 480p120 frame.
module hdmi #(
    parameter VIDEO_ID_CODE = 4,
    parameter DVI_OUTPUT = 0,
    parameter VIDEO_REFRESH_RATE = 60.0,
    parameter IT_CONTENT = 1,
    parameter AUDIO_RATE = 48000,
    parameter AUDIO_BIT_WIDTH = 16,
    parameter START_X = 0,
    parameter START_Y = 0,
    // Line length (htotal) when std_timing is 0, picked so the HDMI frame
    // rate matches the console's own refresh rate (twice it at 480p120).
    // Only frame_width changes; the active picture stays put.
    parameter int NATIVE_FRAME_WIDTH = 1650
) (
    input         clk_pixel_x5,
    input         clk_pixel,
    input         clk_audio,
    input  [23:0] rgb,
    input         reset,
    // 1: standard timing (1650-pixel 720p, 858-pixel 480p120); 0: native rate.
    // Unconnected (z) in baselines built from history means standard timing.
    input         std_timing,
    input  [15:0] audio_sample_word [1:0],
    output [2:0]  tmds,
    output        tmds_clock,
    output reg [10:0] cx = START_X,
    output reg [9:0]  cy = START_Y,
    output [10:0] frame_width,
    output [9:0]  frame_height
);
    localparam STD_WIDTH = (VIDEO_ID_CODE == 48) ? 858 : 1650;
    localparam FRAME_HEIGHT = (VIDEO_ID_CODE == 48) ? 525 : 750;
    assign frame_width = (std_timing === 1'b0) ? NATIVE_FRAME_WIDTH : STD_WIDTH;
    assign frame_height = FRAME_HEIGHT;
    assign tmds = 3'b0;
    assign tmds_clock = 1'b0;
    always @(posedge clk_pixel) begin
        cx <= (cx == frame_width - 11'd1) ? 11'd0 : cx + 11'd1;
        if (cx == frame_width - 11'd1)
            cy <= (cy == FRAME_HEIGHT - 1) ? 10'd0 : cy + 10'd1;
    end
endmodule

module ELVDS_OBUF (input I, output O, output OB);
    assign O = I;
    assign OB = ~I;
endmodule
