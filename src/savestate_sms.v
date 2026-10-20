// Save-state engine for smstang (TangCore SMS/Game Gear).
//
// Streams a flat state image between the iosys UART block channel (commands
// 0x18/0x19/0x1A, see iosys_bl616.v) and the SMS machine while the machine
// is frozen (ss_freeze gates the clock enables exactly like menu pause).
// Cloned from nestang's src/savestate.v (phase 1): same wire protocol, same
// FSM shape, same block/taken handshake. Differences: fixed-size SMS image
// (no per-game sizing in v1; SystemE and FM-touched games refuse via
// ss_supported), bulk sections are on-chip RAMs (VRAM/WRAM/NVRAM) reached
// through a wire-only top adapter (mem_addr = {sel,addr}, ack is a delayed
// req), and settle re-aligns to a canonical clkd phase (the NES clkref
// trick) so the loaded run's CPU/VDP alignment matches the saved run's.
//
// Image layout (512-byte blocks, 115 total = 58880 bytes):
//   block 0        header (below)
//   bytes 512..    registers (1024 B, byte bus ss_a/ss_din/ss_we)
//   then           VRAM 16384 B   (vdp_inst low 16 KB)
//   then           WRAM 8192 B    (spram low 8 KB)
//   then           NVRAM 32768 B  (battery dpram, full 32 KB)
//
// Header (little-endian): 0..3 "TCSS", 4 format=1, 5 core-state-ver=1,
// 6 core_id=5, 7 variant (0 standard, 1 hz120), 8..15 sms_flags (v1: only
// bit 0 = Game Gear mode, so cross-mode loads refuse), 16..19 total_bytes,
// 20..23 vram_bytes, 24..27 wram_bytes, 28.. firmware fields (ROM size/CRC,
// payload CRC; zero from the FPGA, patched by the firmware into its file
// copy). On load the core re-checks magic, versions, flags and sizes before
// any reset is issued, so a rejected state leaves the running game
// untouched.
module savestate_sms #(
    parameter [7:0] VARIANT = 8'd0
) (
    input             clk,
    input             ce_phase,       // canonical ce-grid phase from the top
    input             resetn,
    input      [63:0] ss_flags,
    input             ss_supported,
    input             ss_point,
    output reg        ss_freeze,
    output reg        ss_reset,
    output reg        ss_loaded,
    output            ss_edge_reset,
    // Audio resync: asserted through S_SETTLE on both paths so the
    // non-snapshotted audio tail (OPLL, PSG amp/mixer registers) restarts
    // identically after a save and after a load (the OPLL idles with a
    // drifting output -- Verified in sim/savestate/opll_idle -- and the
    // amp/mixer registers reconverge within cycles; freezing holds them).
    output            ss_snd_rst,
    output            ss_active,
    // register byte bus to the SMS machine
    output reg [9:0]  ss_a,
    output reg [7:0]  ss_din,
    output reg        ss_we,
    input      [7:0]  ss_dout,
    // bulk RAM port (top adapter: {sel,addr} -> VRAM/WRAM/NVRAM,
    // ack is req delayed; the engine's rd_lat covers the RAM latency)
    //   sel 0: VRAM  addr[13:0], 1: WRAM addr[12:0], 2: NVRAM addr[14:0]
    output reg [16:0] mem_addr,
    output reg [7:0]  mem_din,
    output reg        mem_we,
    output reg        mem_req,
    input             mem_ack,
    input      [7:0]  mem_q,
    // iosys control (0x18 payload): 1 begin-save, 2 begin-load, 3 end, 4 abort
    input      [2:0]  op,
    input             op_stb,
    output     [127:0] ss_status,
    // iosys image byte channel (mirrors the battery save channel shape)
    input      [19:0] img_raddr,
    input             img_rd_stb,
    input             img_taken,
    input             img_abort,
    output reg        img_rdy,
    output reg [7:0]  img_q,
    input      [19:0] img_waddr,
    input      [7:0]  img_wdin,
    input             img_wr_stb
);

localparam [2:0] OP_SAVE = 3'd1, OP_LOAD = 3'd2, OP_END = 3'd3, OP_ABORT = 3'd4;

// ---- fixed v1 section sizes ----
localparam [18:0] VRAM_BYTES = 19'd16384;
localparam [18:0] WRAM_BYTES = 19'd8192;
localparam [18:0] NVRAM_BYTES = 19'd32768;
localparam [19:0] TOTAL_BYTES = 20'd58880;   // 512 + 1024 + 16384 + 8192 + 32768
localparam [15:0] TOTAL_BLOCKS = 16'd115;    // TOTAL_BYTES / 512

// Latched at begin (paranoia parity with the NES engine; the layout is
// fixed, but the header check compares against these).
reg [18:0] vram_bytes, wram_bytes;
reg [19:0] total_bytes;
wire [19:0] sec_reg_end   = 20'd1536;                  // 512 hdr + 1024 regs
wire [19:0] sec_vram_end  = sec_reg_end + 20'd16384;
wire [19:0] sec_wram_end  = sec_vram_end + 20'd8192;
wire [19:0] sec_nvram_end = sec_wram_end + 20'd32768;  // == TOTAL_BYTES

// ---- header byte generation (save direction) ----
function [7:0] hdr_byte(input [8:0] a);
    case (a)
    9'd0: hdr_byte = 8'h54;  // T
    9'd1: hdr_byte = 8'h43;  // C
    9'd2: hdr_byte = 8'h53;  // S
    9'd3: hdr_byte = 8'h53;  // S
    9'd4: hdr_byte = 8'd1;
    9'd5: hdr_byte = 8'd1;
    9'd6: hdr_byte = 8'd5;
    9'd7: hdr_byte = VARIANT;
    9'd8:  hdr_byte = ss_flags[7:0];
    9'd9:  hdr_byte = ss_flags[15:8];
    9'd10: hdr_byte = ss_flags[23:16];
    9'd11: hdr_byte = ss_flags[31:24];
    9'd12: hdr_byte = ss_flags[39:32];
    9'd13: hdr_byte = ss_flags[47:40];
    9'd14: hdr_byte = ss_flags[55:48];
    9'd15: hdr_byte = ss_flags[63:56];
    9'd16: hdr_byte = total_bytes[7:0];
    9'd17: hdr_byte = total_bytes[15:8];
    9'd18: hdr_byte = {4'b0, total_bytes[19:16]};
    9'd19: hdr_byte = 8'd0;
    9'd20: hdr_byte = vram_bytes[7:0];
    9'd21: hdr_byte = vram_bytes[15:8];
    9'd22: hdr_byte = {5'b0, vram_bytes[18:16]};
    9'd23: hdr_byte = 8'd0;
    9'd24: hdr_byte = wram_bytes[7:0];
    9'd25: hdr_byte = wram_bytes[15:8];
    9'd26: hdr_byte = {5'b0, wram_bytes[18:16]};
    default: hdr_byte = 8'd0;
    endcase
endfunction

// ---- header capture (load direction) ----
reg        chk_magic, chk_ver, chk_core;
reg [63:0] chk_flags;
reg [19:0] chk_total;
reg [18:0] chk_vram, chk_wram;
reg        hdr_ok, hdr_done;

// ---- control FSM ----
localparam [2:0] S_IDLE = 3'd0, S_WAIT = 3'd1, S_SAVE = 3'd2,
                 S_HDR = 3'd3, S_RESET = 3'd4, S_LOAD = 3'd5, S_SETTLE = 3'd6;
reg [2:0]  state = S_IDLE;
reg        err = 0;
reg        was_load = 0;
reg [6:0]  settle_cnt = 0;
reg [28:0] wdog = 0;        // ~6 s at 53.7 MHz without link activity: abort
reg [26:0] wait_cnt = 0;    // capture-point patience (~2.5 s), then freeze anyway

assign ss_active = (state != S_IDLE);
// Held through load settle: the bulk RAMs keep their restored contents
// frozen while unfreeze waits for the canonical ce phase (see S_SETTLE).
assign ss_snd_rst = (state == S_SETTLE);
assign ss_edge_reset = 1'b0;
wire ready = (state == S_SAVE) || (state == S_LOAD) || (state == S_HDR);
wire [15:0] total_blocks = TOTAL_BLOCKS;
assign ss_status = {
    {5'b0, state}, VARIANT,
    ss_flags,
    total_blocks,
    8'd1, 8'd1,
    {5'b0, ss_active, err, ready},
    {7'b0, ss_supported}
};

// ---- SDRAM byte engine (same level handshake as iosys's save engine) ----
reg [1:0]  ack_s = 0;
reg        wr_pend = 0, rd_pend = 0, rd_out = 0, resync = 0;
reg [4:0]  rd_lat = 0;
reg [16:0] pend_addr = 0;
reg [7:0]  pend_din = 0;
reg        pend_we = 0;
// Fast-path (header/register) read completion, 1 clk after the strobe.
reg        fast_rdy = 0;
reg [7:0]  fast_q = 0;
reg        fast_pipe = 0;  // register-read pipe: module dout regs settle

// Address translation for a byte in a memory section: {sel,addr} for the
// top adapter (0 VRAM, 1 WRAM, 2 NVRAM).
function [16:0] mem_translate(input [19:0] a);
    reg [19:0] off;
    begin
        if (a < sec_vram_end)       off = a - sec_reg_end;
        else if (a < sec_wram_end)  off = a - sec_vram_end;
        else                        off = a - sec_wram_end;
        if (a < sec_vram_end)       mem_translate = {2'd0, off[14:0]};
        else if (a < sec_wram_end)  mem_translate = {2'd1, off[14:0]};
        else                        mem_translate = {2'd2, off[14:0]};
    end
endfunction

always @(posedge clk) begin
    if (!resetn) begin
        state <= S_IDLE;
        ss_freeze <= 0;
        ss_reset <= 0;
        ss_loaded <= 0;
        ss_we <= 0;
        ss_a <= 0;
        ss_din <= 0;
        err <= 0;
        was_load <= 0;
        hdr_ok <= 0;
        hdr_done <= 0;
        img_rdy <= 0;
        img_q <= 0;
        mem_req <= 0;
        mem_addr <= 0;
        mem_din <= 0;
        mem_we <= 0;
        ack_s <= 0;
        wr_pend <= 0;
        rd_pend <= 0;
        rd_out <= 0;
        resync <= 0;
        rd_lat <= 0;
        fast_rdy <= 0;
        fast_pipe <= 0;
        wdog <= 0;
        wait_cnt <= 0;
        settle_cnt <= 0;
        vram_bytes <= 0;
        wram_bytes <= 0;
        total_bytes <= 0;
    end else begin
        ss_we <= 0;
        ss_loaded <= 0;
        ack_s <= {ack_s[0], mem_ack};

        // ---------- control ----------
        if (op_stb || img_rd_stb || img_wr_stb || img_taken)
            wdog <= 0;
        else if (state != S_IDLE)
            wdog <= wdog + 1'd1;

        if (op_stb) begin
            case (op)
            OP_SAVE: if (state == S_IDLE) begin
                if (!ss_supported) begin
                    err <= 1;
                end else begin
                    err <= 0;
                    was_load <= 0;
                    vram_bytes <= VRAM_BYTES;
                    wram_bytes <= WRAM_BYTES;
                    total_bytes <= TOTAL_BYTES;
                    wait_cnt <= 0;
                    state <= S_WAIT;
                end
            end
            OP_LOAD: if (state == S_IDLE) begin
                if (!ss_supported) begin
                    err <= 1;
                end else begin
                    err <= 0;
                    was_load <= 1;
                    hdr_ok <= 0;
                    hdr_done <= 0;
                    chk_magic <= 1;
                    chk_ver <= 0;
                    chk_core <= 0;
                    vram_bytes <= VRAM_BYTES;
                    wram_bytes <= WRAM_BYTES;
                    total_bytes <= TOTAL_BYTES;
                    ss_freeze <= 1;
                    state <= S_HDR;
                end
            end
            OP_END: if (state == S_SAVE || state == S_LOAD) begin
                settle_cnt <= 7'd64;
                state <= S_SETTLE;
            end
            OP_ABORT: begin
                state <= S_IDLE;
                ss_freeze <= 0;
                ss_reset <= 0;
                img_rdy <= 0;
                fast_rdy <= 0;
                fast_pipe <= 0;
                wr_pend <= 0;
                rd_pend <= 0;
                rd_out <= 0;
                mem_we <= 0;
                mem_addr <= 0;
                mem_req <= ~mem_req;   // dummy read: rebuild req/ack parity
                resync <= 1;
            end
            default: ;
            endcase
        end else if (state != S_IDLE && &wdog) begin
            // Link went silent mid-transfer: unfreeze rather than wedge.
            state <= S_IDLE;
            ss_freeze <= 0;
            ss_reset <= 0;
            img_rdy <= 0;
            fast_rdy <= 0;
            fast_pipe <= 0;
            wr_pend <= 0;
            rd_pend <= 0;
            rd_out <= 0;
            mem_we <= 0;
            mem_addr <= 0;
            mem_req <= ~mem_req;
            resync <= 1;
            err <= 1;
        end

        case (state)
        S_WAIT: begin
            wait_cnt <= wait_cnt + 1'd1;
            if (ss_point || &wait_cnt) begin
                ss_freeze <= 1;
                state <= S_SAVE;
            end
        end
        S_HDR: begin
            if (hdr_done) begin
                hdr_done <= 0;
                if (hdr_ok) begin
                    settle_cnt <= 7'd32;
                    ss_reset <= 1;
                    state <= S_RESET;
                end else begin
                    err <= 1;   // stay frozen in S_HDR; firmware aborts
                end
            end
        end
        S_RESET: begin
            if (settle_cnt == 7'd16)
                ss_reset <= 0;
            if (settle_cnt == 7'd0)
                state <= S_LOAD;
            else
                settle_cnt <= settle_cnt - 1'd1;
        end
        S_SETTLE: begin
            // Unfreeze on a canonical ce-grid phase (both after a save and
            // after a load): the ce_* enables derive from the free-running
            // clkd divider, so resuming at a fixed phase makes the loaded
            // run's CPU/VDP alignment match the saved run's post-save
            // timing cycle for cycle.
            if (settle_cnt == 7'd0 && ce_phase) begin
                ss_freeze <= 0;
                if (was_load) ss_loaded <= 1;
                state <= S_IDLE;
            end else if (settle_cnt != 7'd0)
                settle_cnt <= settle_cnt - 1'd1;
        end
        default: ;
        endcase

        // ---------- image writes (load direction) ----------
        if (img_wr_stb && (state == S_HDR || state == S_LOAD)) begin
            if (img_waddr < 20'd512) begin
                if (state == S_HDR) begin
                    case (img_waddr[8:0])
                    9'd0: if (img_wdin != 8'h54) chk_magic <= 0;
                    9'd1: if (img_wdin != 8'h43) chk_magic <= 0;
                    9'd2: if (img_wdin != 8'h53) chk_magic <= 0;
                    9'd3: if (img_wdin != 8'h53) chk_magic <= 0;
                    9'd4: chk_ver <= (img_wdin == 8'd1);
                    9'd5: chk_core <= (img_wdin == 8'd1);
                    9'd6: if (img_wdin != 8'd5) chk_core <= 0;
                    9'd8:  chk_flags[7:0] <= img_wdin;
                    9'd9:  chk_flags[15:8] <= img_wdin;
                    9'd10: chk_flags[23:16] <= img_wdin;
                    9'd11: chk_flags[31:24] <= img_wdin;
                    9'd12: chk_flags[39:32] <= img_wdin;
                    9'd13: chk_flags[47:40] <= img_wdin;
                    9'd14: chk_flags[55:48] <= img_wdin;
                    9'd15: chk_flags[63:56] <= img_wdin;
                    9'd16: chk_total[7:0] <= img_wdin;
                    9'd17: chk_total[15:8] <= img_wdin;
                    9'd18: chk_total[19:16] <= img_wdin[3:0];
                    9'd20: chk_vram[7:0] <= img_wdin;
                    9'd21: chk_vram[15:8] <= img_wdin;
                    9'd22: chk_vram[18:16] <= img_wdin[2:0];
                    9'd24: chk_wram[7:0] <= img_wdin;
                    9'd25: chk_wram[15:8] <= img_wdin;
                    9'd26: chk_wram[18:16] <= img_wdin[2:0];
                    default: ;
                    endcase
                    if (img_waddr == 20'd511) begin
                        hdr_done <= 1;
                        hdr_ok <= chk_magic && chk_ver && chk_core &&
                            (chk_flags == ss_flags) &&
                            (chk_total == total_bytes) &&
                            (chk_vram == vram_bytes) && (chk_wram == wram_bytes);
                    end
                end
            end else if (state == S_LOAD) begin
                if (img_waddr < sec_reg_end) begin
                    ss_a <= (img_waddr - 20'd512);
                    ss_din <= img_wdin;
                    ss_we <= 1;
                end else begin
                    wr_pend <= 1;
                    pend_addr <= mem_translate(img_waddr);
                    pend_din <= img_wdin;
                    pend_we <= 1;
                end
            end
        end

        // ---------- image reads (save direction) ----------
        if (img_abort) begin
            img_rdy <= 0;
            fast_rdy <= 0;
            fast_pipe <= 0;
            rd_pend <= 0;
            rd_out <= 0;
            mem_we <= 0;
            mem_addr <= 0;
            resync <= 1;
            mem_req <= ~mem_req;
        end else begin
            if (img_rd_stb && state == S_SAVE) begin
                if (img_raddr < 20'd512) begin
                    fast_q <= hdr_byte(img_raddr[8:0]);
                    fast_rdy <= 1;
                end else if (img_raddr < sec_reg_end) begin
                    ss_a <= (img_raddr - 20'd512);
                    fast_pipe <= 1;     // module dout regs settle next clk
                end else begin
                    rd_pend <= 1;
                    pend_addr <= mem_translate(img_raddr);
                    pend_we <= 0;
                end
            end
            if (fast_pipe && !img_taken) begin
                fast_q <= ss_dout;
                fast_rdy <= 1;
                fast_pipe <= 0;
            end
            if (fast_rdy && !img_taken) begin
                img_q <= fast_q;
                img_rdy <= 1;
                fast_rdy <= 0;
            end
            // NB: taken must not clear fast_rdy -- iosys pulses taken and
            // the next rd_stb in the same cycle.
            if (img_taken) begin
                img_rdy <= 0;
                rd_out <= 0;
            end
        end

        // ---------- SDRAM engine ----------
        if (resync && mem_req == ack_s[1])
            resync <= 0;
        if (rd_out && mem_req == ack_s[1]) begin
            if (rd_lat != 5'd0)
                rd_lat <= rd_lat - 1'd1;
            else if (!img_taken) begin
                img_q <= mem_q;
                img_rdy <= 1;
            end
        end
        if (!resync && mem_req == ack_s[1] && !img_abort && !(op_stb && op == OP_ABORT) && !(state != S_IDLE && &wdog && !op_stb)) begin
            if (wr_pend) begin
                wr_pend <= 0;
                mem_addr <= pend_addr;
                mem_din <= pend_din;
                mem_we <= 1;
                mem_req <= ~mem_req;
            end else if (rd_pend) begin
                rd_pend <= 0;
                mem_addr <= pend_addr;
                mem_we <= 0;
                rd_out <= 1;
                rd_lat <= 5'd24;
                mem_req <= ~mem_req;
            end
        end
    end
end

endmodule
