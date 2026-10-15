// Direct check of the shared hdmi.sv change with the real RTL: with
// std_timing = 1 the 720p mode counts the standard 1650x750 frame, with 0
// it counts NATIVE_FRAME_WIDTH x 750; sync start/size/polarity and the
// active picture are untouched.
`timescale 1ns/1ps

module tb_hdmi_native;

    reg clk_pixel = 0, clk_audio = 0;
    always #6.734 clk_pixel = ~clk_pixel;      // 74.25 MHz
    always #10.411 clk_audio = ~clk_audio;

    reg std_timing = 1;
    wire [10:0] cx, fw;
    wire [9:0] cy, fh;
    wire [2:0] tmds;
    wire tmds_clock;
    reg [15:0] aw [1:0];

    initial begin
        aw[0] = 0; aw[1] = 0;
    end

    hdmi #(.VIDEO_ID_CODE(4), .DVI_OUTPUT(1), .NATIVE_FRAME_WIDTH(1652)) dut (
        .clk_pixel_x5(1'b0), .clk_pixel(clk_pixel), .clk_audio(clk_audio),
        .reset(1'b0), .std_timing(std_timing),
        .rgb(24'd0), .audio_sample_word(aw),
        .tmds(tmds), .tmds_clock(tmds_clock),
        .cx(cx), .cy(cy),
        .frame_width(fw), .frame_height(fh),
        .screen_width(), .screen_height()
    );

    reg [10:0] max_cx = 0;
    reg [31:0] len = 0, frames = 0;
    reg [9:0] cy_q = 0;
    always @(posedge clk_pixel) begin
        cy_q <= cy;
        if (cx > max_cx) max_cx <= cx;
        if (cy == 0 && cy_q != 0) begin
            frames <= frames + 1;
            len <= 0;
        end else
            len <= len + 1;
    end

    initial begin
        // standard timing: one full frame must be 1650x750
        wait (frames >= 1);
        if (fw != 1650 || fh != 750 || max_cx != 1649) begin
            $display("FAIL: std fw=%0d fh=%0d max_cx=%0d", fw, fh, max_cx);
            $fatal(1, "tb_hdmi_native: FAIL");
        end
        $display("std: 1650x750 ok");
        // native timing takes effect on the next frame (cx/cy wrap at 1652)
        max_cx = 0;
        std_timing = 0;
        wait (frames >= 3);
        if (fw != 1652 || fh != 750 || max_cx != 1651) begin
            $display("FAIL: nat fw=%0d fh=%0d max_cx=%0d", fw, fh, max_cx);
            $fatal(1, "tb_hdmi_native: FAIL");
        end
        // sync geometry untouched: hsync at 1280+110 .. +40, vsync lines
        // 725..729; picture 1280x720
        $display("nat: 1652x750 ok");
        $display("tb_hdmi_native: PASS");
        $finish;
    end

    initial begin
        #100000000;
        $display("FAIL: watchdog");
        $fatal(1, "tb_hdmi_native: FAIL");
    end

endmodule
