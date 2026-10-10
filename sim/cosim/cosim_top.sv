// cosim_top: the Master System co-simulation DUT. A small top around the REAL
// smstang firmware-facing interface logic -- iosys_bl616 (UART protocol, OSD
// text, save channel) plus the real 32 KB battery nvram (dpram, dual port) --
// and test hooks. No game, no video, no audio, no SDRAM: unlike the NES
// co-sim there is no save client in a memory controller to model -- smstang
// keeps its battery RAM on-chip (smstang_top wires iosys's save port to port
// B of the nvram dpram and the game's write enable straight to sv_core_we),
// so the save path is iosys + that RAM, which is exactly what the firmware
// interaction touches. This exercises firmware<->core interactions (pad
// frames, combos, save dumps/restores, reset, MODE, core_config) without
// hardware.
//
// CYCLES AND CLOCKS
//   clk/hclk/resetn come from the C++ bridge; one sim tick (firmware
//   sim_time, 1/21.492MHz) is one clk period, and everything lives in that
//   one domain (dpram is single-clock; iosys is single-clock; hclk only
//   feeds textdisp's render pipeline, whose pixels nobody observes -- OSD
//   text is snapshotted straight out of the DPB array, see below). The real
//   board runs this logic at 53.7MHz; the model runs it at 21.492MHz and
//   passes FREQ=21_492_000 to iosys so the UART stays EXACTLY 2 Mbaud in
//   sim time (its divider comes from FREQ) and the bridge's per-tick TX
//   sampling sees the same wire levels as hardware. The 20 ms pad throttle
//   stretches to ~46 ms sim time (JOY_UPDATE_INTERVAL counts clk); the
//   firmware polls, so that is invisible.
//
// PROGRAMMING MODEL
//   The generated iosys_bl616_cosim answers core-ID replies with the
//   cosim_core_id input (see Makefile: the ONLY difference from the real
//   iosys_bl616.v, made by mechanical sed at build time and verified by
//   diff). Programming a bitstream = the bridge sets cosim_core_id and
//   pulses resetn, like hardware loading fresh logic. The nvram is dpram
//   logic inside the FPGA; mid-run reset pulses keep its contents (like
//   reset on a running board). A power cycle re-execs the whole sim, so the
//   array re-enters at its 0xFF blank value, like an FPGA reprogrammed
//   from flash.
//   silence=1 (MODE blackout) forces both UART lines idle; the bridge ends
//   it with a reset pulse and cosim_core_id=0 (flash bitstream), after which
//   the firmware reboots.
//
// GAME/TRAFFIC MODEL
//   No CPU/VDP here: the only game-side path the firmware can observe is
//   the nvram game port. churn_en makes the "game" continuously scribble
//   nvram (LFSR-spread, deterministic) so combos race real dumps;
//   poke_valid/poke_off/poke_data/poke_ack deliver single game writes for
//   wram-write/wram-burst (and poke-save). Poke wins over churn. Either
//   write is ALSO sv_core_we (wired like smstang_top: the game port's wren),
//   so iosys dirties the save and owes the MCU a 0x0B notice exactly as a
//   running game would. Unlike the NES co-sim there is no bus arbitration to
//   contend with (a dual-port RAM answers both sides at once -- the firmware
//   geometry says so too: no pause while dumping): what these tests race is
//   the UART-side interleave of block frames, notices, pad frames and
//   replies, which is fully modeled.
//   The save channel shares the RAM with the game with zero delay, so a dump
//   runs at pure UART speed (~16 ms for 64 blocks at 2 Mbaud).
//
// OBSERVABILITY (all real unless noted)
//   core_config/video_config/overlay: straight out of iosys (expect-config-bit reads the
//   real register). rom_bytes: ROM payload bytes consumed (firmware streams
//   the ROM; no loader parses it here; SMS headers are not inspected by the
//   loader). OSD text / nvram: read by the C++ bridge DIRECTLY out of the
//   behavioral arrays (gowin_dpb_menu.mem, dpram.mem, both
//   `verilator public`), no model clocking per cell. The char buffer lives
//   at DPB $000-$37F = {1'b0, y[4:0], x[4:0]} (32x28).
module cosim_top (
    input wire clk,
    input wire hclk,
    input wire resetn,

    input wire [11:0] joy1,
    input wire [11:0] joy2,

    input wire uart_rx,
    output wire uart_tx,
    input wire silence,
    input wire [15:0] cosim_core_id,

    output wire [31:0] core_config,
    output wire [31:0] video_config,
    output wire overlay,
    output reg [31:0] rom_bytes,
    // TX-pending for the bridge's idle jump: a reply owed or a frame on the
    // wire. Hierarchical into iosys (cosim-owned top; the DUT itself is
    // untouched): send_state covers every TX frame, response_* the core-ID /
    // config-string handoff (RX posts, TX picks up a tick or two later), and
    // sv_rd_req/sv_notify the save-block / dirty-notice path. Without this
    // the bridge would jump over the idle gap between a request and its
    // reply, skipping the reply unsampled. (A joypad frame due on its timer
    // is NOT included: delaying it by a jump is harmless, the firmware
    // polls.)
    output wire tx_pending,
    input wire poke_valid,
    input wire [14:0] poke_off,     // one byte of the 32 KB nvram
    input wire [7:0] poke_data,
    output reg poke_ack,
    input wire churn_en
);

// ---- UART gating (MODE blackout) ----
wire uart_rx_iosys = silence ? 1'b1 : uart_rx;
wire uart_tx_iosys;
assign uart_tx = silence ? 1'b1 : uart_tx_iosys;

// ---- save channel (iosys <-> nvram port B), as smstang_top wires it ----
wire [14:0] sv_addr;
wire [7:0] sv_din, sv_q;
wire sv_we;

// ---- ROM sink: count what the firmware streams (no loader here) ----
wire [7:0] rom_loading_unused;
wire [7:0] rom_do;
wire rom_do_valid;
always @(posedge clk) begin
    if (!resetn)
        rom_bytes <= 0;
    else if (rom_do_valid)
        rom_bytes <= rom_bytes + 1;
end

assign tx_pending = (sys.send_state != 4'd0) || (sys.response_req != sys.response_ack) ||
                    (sys.sv_rd_req != sys.sv_rd_ack) || sys.sv_notify;

iosys_bl616_cosim #(
    .FREQ(21_492_000),
    .SAVE_IF(1),
    .SAVE_AW(15)
) sys (
    .clk(clk),
    .hclk(hclk),
    .resetn(resetn),
    .cosim_core_id(cosim_core_id),

    .overlay(overlay),
    .overlay_x(8'h00),
    .overlay_y(8'h00),
    .overlay_color(),
    .joy1(joy1),
    .joy2(joy2),
    .hid1(),
    .hid2(),

    .rom_loading(rom_loading_unused),
    .rom_do(rom_do),
    .rom_do_valid(rom_do_valid),

    .sv_addr(sv_addr),
    .sv_din(sv_din),
    .sv_we(sv_we),
    .sv_q(sv_q),
    .sv_core_we(game_we),
    .core_config(core_config),
    .video_config(video_config),
    .uart_rx(uart_rx_iosys),
    .uart_tx(uart_tx_iosys)
);

// ---- Battery RAM: the real dpram shape (generated copy, see Makefile),
// wired as smstang_top wires nvram_inst: port A game, port B iosys ----
reg [14:0] addrA = 0;
reg weA = 0;
reg [7:0] dinA = 0;
wire [7:0] game_q;
wire game_we = weA;                  // sv_core_we, exactly as smstang_top

dpram #(.widthad_a(15)) nvram (
    .clock_a(clk),
    .address_a(addrA),
    .wren_a(weA),
    .data_a(dinA),
    .q_a(game_q),
    .clock_b(clk),
    .address_b(sv_addr),
    .wren_b(sv_we),
    .data_b(sv_din),
    .q_b(sv_q)
);

// ---- game-side nvram writes (clk domain) ----
// Deterministic 16-bit LFSR (x^16+x^14+x^13+x^11+1), never zero.
reg [15:0] lfsr = 16'hACE1;
function [15:0] lfsr_next(input [15:0] s);
    lfsr_next = {s[14:0], s[15] ^ s[13] ^ s[12] ^ s[10]};
endfunction

reg [14:0] churn_addr = 0;
reg [15:0] tc = 0;

always @(posedge clk) begin
    if (!resetn) begin
        addrA <= 0;
        weA <= 0;
        dinA <= 0;
        poke_ack <= 0;
        tc <= 0;
        churn_addr <= 0;
        lfsr <= 16'hACE1;
    end else begin
        tc <= tc + 1;
        lfsr <= lfsr_next(lfsr);

        // poke_ack is level (not a pulse): it stays up from accept until the
        // bridge releases poke_valid, so a batch-granularity sampler cannot
        // miss it between evaluations.
        if (!poke_valid)
            poke_ack <= 0;

        // dpram samples wren_a every clk (no controller frame to align to),
        // but we hold the write several clk exactly like the NES model's
        // poke_hold, so the poke cannot depend on the bridge's sampling
        // phase.
        if (poke_valid) begin
            // Test hook: one game-path nvram write (dirties the save).
            addrA <= poke_off;
            dinA <= poke_data;
            weA <= 1;
            poke_ack <= 1;
        end else if (churn_en && (tc % 32 == 0)) begin
            // The game scribbles its battery RAM (combo-during-dump): one
            // byte every 32 clk, LFSR-spread over the 32 KB (NES recipe).
            churn_addr <= churn_addr + 1'd1;
            addrA <= lfsr[14:0] ^ churn_addr;
            dinA <= lfsr[7:0] ^ churn_addr[7:0];
            weA <= 1;
        end else begin
            weA <= 0;
        end
    end
end

endmodule
