// Sim stand-ins for the Gowin primitives used below the HDMI serializer.
// Behavioural only (the serial output is not checked); cx/cy counting and
// the TMDS code production are the real RTL.
module OSER10 (
    output Q,
    input D0, D1, D2, D3, D4, D5, D6, D7, D8, D9,
    input PCLK, FCLK, RESET
);
    assign Q = D0;
endmodule
