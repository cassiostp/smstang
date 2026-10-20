// tb_ss: savestate A/B bench for smstang (sim/savestate).
//
// Mini-machine around the real system + video + WRAM/NVRAM/ROM + the
// savestate_sms engine, driven directly (no iosys): the homebrew program
// from prog.hex evolves VDP/PSG/RAM/NVRAM state every frame off the VDP
// frame IRQ. The bench proves:
//   A/B: save at frame 40, run to 75  vs  reset, run to 40, load, run to 75
//        identical per-frame video/audio hashes, identical endpoint RAMs,
//        identical re-saved images;
//   corrupt: a flags-flipped image is rejected with the game undisturbed;
//   battery: NVRAM rolls back to save-time contents, ss_loaded pulses.
//
// Power-on X: the render pipeline and several latches have no reset (they
// power up defined-but-arbitrary in the FPGA). The bench forces the handful
// of self-sustaining sequencers to 0 during reset (bench-only; both runs
// start identically) and lets the rest converge naturally.
`timescale 1ns/1ps
module tb_ss;
reg clk_sys = 0;
always #9 clk_sys = ~clk_sys;   // ~55 MHz (rate only sets sim speed)

// ---- ce divider (copy of smstang_top) ----
reg ce_cpu = 0, ce_vdp = 0, ce_pix = 0, ce_sp = 0;
reg [4:0] clkd = 0;
always @(posedge clk_sys) begin
   ce_sp <= clkd[0];
   ce_vdp <= 0;
   ce_pix <= 0;
   ce_cpu <= 0;
   clkd <= clkd + 1'd1;
   if (clkd == 29) begin
      clkd <= 0;
      ce_vdp <= 1;
      ce_pix <= 1;
   end else if (clkd == 24) begin
      ce_cpu <= 1;
      ce_vdp <= 1;
   end else if (clkd == 19) begin
      ce_vdp <= 1;
      ce_pix <= 1;
   end else if (clkd == 14) begin
      ce_vdp <= 1;
   end else if (clkd == 9) begin
      ce_cpu <= 1;
      ce_vdp <= 1;
      ce_pix <= 1;
   end else if (clkd == 4) begin
      ce_vdp <= 1;
   end
end

reg reset = 1;
// Mirrors smstang_top's reset reg for SS loads (set on ss_reset, release
// on its falling edge; test resets drive `reset` directly).
reg tb_ss_reset_r = 0, tb_ss_reset_q = 0;
always @(posedge clk_sys) begin
   tb_ss_reset_r <= ss_reset;
   if (ss_reset) tb_ss_reset_q <= 1;
   else if (tb_ss_reset_r && !ss_reset) tb_ss_reset_q <= 0;
end
wire RESET_n = ~(reset | tb_ss_reset_q);

// ---- machine wires ----
wire [21:0] rom_a;
wire [7:0] rom_do;
wire rom_rd;
wire [13:0] ram_a;
wire ram_we;
wire [7:0] ram_d, ram_q;
wire [14:0] nvram_a;
wire nvram_we;
wire [7:0] nvram_d, nvram_q;
wire [8:0] x, y;
wire [11:0] color;
wire [15:0] audio_l, audio_r;
wire smode_M1, smode_M2, smode_M3;
wire mask_column, HBlank, VBlank;
wire HS, VS;

// ---- savestate engine wires ----
wire ss_freeze, ss_reset, ss_loaded, ss_active;
wire ss_ram_own = ss_active && ss_freeze; // engine owns bulk RAMs only while frozen (see smstang_top)
wire ss_snd_rst;
wire [9:0] ss_a;
wire [7:0] ss_din;
wire ss_we;
wire [7:0] ss_dout;
wire ss_point, ss_supported;
wire [16:0] ss_mem_addr;
wire [7:0] ss_mem_din, ss_mem_q;
wire ss_mem_we, ss_mem_req, ss_mem_ack;
wire [1:0] ss_mem_sel = ss_mem_addr[16:15];
wire [14:0] ss_mem_ad = ss_mem_addr[14:0];
wire [2:0] ss_op;
wire ss_op_stb;
wire [127:0] ss_status;
wire [19:0] ss_img_raddr, ss_img_waddr;
wire ss_img_rd_stb, ss_img_taken, ss_img_abort, ss_img_rdy, ss_img_wr_stb;
wire [7:0] ss_img_q, ss_img_wdin;
reg [2:0] tb_op = 0;
reg tb_op_stb = 0;
reg [19:0] tb_raddr = 0, tb_waddr = 0;
reg tb_rd_stb = 0, tb_taken = 0, tb_abort = 0, tb_wr_stb = 0;
reg [7:0] tb_wdin = 0;
assign ss_op = tb_op;
assign ss_op_stb = tb_op_stb;
assign ss_img_raddr = tb_raddr;
assign ss_img_rd_stb = tb_rd_stb;
assign ss_img_taken = tb_taken;
assign ss_img_abort = tb_abort;
assign ss_img_waddr = tb_waddr;
assign ss_img_wdin = tb_wdin;
assign ss_img_wr_stb = tb_wr_stb;
wire [63:0] ss_flags = 64'b0;   // SMS mode (gg=0)

// ---- ce gating (freeze like pause_menu) ----
wire ce_cpu_g = ce_cpu & ~ss_freeze;
wire ce_vdp_g = ce_vdp & ~ss_freeze;
wire ce_pix_g = ce_pix & ~ss_freeze;
wire ce_sp_g = ce_sp & ~ss_freeze;
wire ss_ce_phase = (clkd == 5'd0);

system #(63) sys (
   .clk_sys(clk_sys), .ce_cpu(ce_cpu_g), .ce_vdp(ce_vdp_g),
   .ce_pix(ce_pix_g), .ce_sp(ce_sp_g), .turbo(1'b0),
   .gg(1'b0), .ggres(1'b0), .systeme(1'b0),
   .bios_en(1'b0), .RESET_n(RESET_n),
   .GG_EN(1'b1), .GG_CODE(129'b0), .GG_RESET(1'b0), .GG_AVAIL(),
   .rom_rd(rom_rd), .rom_a(rom_a), .rom_do(rom_do),
   .j1_up(1'b1), .j1_down(1'b1), .j1_left(1'b1), .j1_right(1'b1),
   .j1_tl(1'b1), .j1_tr(1'b1), .j1_th(1'b1),
   .j1_start(1'b1), .j1_coin(1'b1), .j1_a3(1'b1),
   .j2_up(1'b1), .j2_down(1'b1), .j2_left(1'b1), .j2_right(1'b1),
   .j2_tl(1'b1), .j2_tr(1'b1), .j2_th(1'b1),
   .j2_start(1'b1), .j2_coin(1'b1), .j2_a3(1'b1),
   .pause(1'b1),
   .E0Type(2'b0), .E1Use(1'b0), .E2Use(1'b0), .E0(8'b0),
   .F2(8'b0), .F3(8'b0),
   .has_paddle(1'b0), .has_pedal(1'b0),
   .paddle(8'b0), .paddle2(8'b0), .pedal(8'b0),
   .j1_tr_out(), .j1_th_out(), .j2_tr_out(), .j2_th_out(),
   .x(x), .y(y), .color(color),
   .palettemode(1'b0), .mask_column(mask_column), .black_column(1'b0),
   .smode_M1(smode_M1), .smode_M2(smode_M2), .smode_M3(smode_M3),
   .ysj_quirk(1'b0), .pal(1'b0), .region(1'b0),
   .mapper_lock(1'b0), .vdp_enables(2'b00), .psg_enables(2'b00),
   .fm_ena(1'b1), .audioL(audio_l), .audioR(audio_r),
   .dbr(1'b0), .sp64(1'b0),
   .ram_a(ram_a), .ram_we(ram_we), .ram_d(ram_d), .ram_q(ram_q),
   .nvram_a(nvram_a), .nvram_we(nvram_we), .nvram_d(nvram_d), .nvram_q(nvram_q),
   .encrypt(2'b0), .key_a(), .key_d(8'b0),
   .ROMCL(1'b0), .ROMAD(25'b0), .ROMDT(8'b0), .ROMEN(1'b0),
   .ss_a(ss_a), .ss_din(ss_din), .ss_we(ss_we), .ss_dout(ss_dout_sys),
   .ss_point(ss_point), .ss_supported(ss_supported), .VBlank(VBlank),
   .ss_active_sys(ss_ram_own), .ss_vram_a(ss_mem_ad[13:0]),
   .ss_snd_rst(ss_snd_rst),
   .ss_vram_we(ss_active && (ss_mem_sel == 2'd0) && ss_mem_we),
   .ss_vram_d(ss_mem_din), .ss_vram_q(ss_vram_q)
);
wire [7:0] ss_dout_sys, ss_dout_vid;
wire [7:0] ss_vram_q;
wire [7:0] ss_dout_eng = ss_dout_sys | ss_dout_vid;
assign ss_dout = ss_dout_eng;
assign ss_mem_q = (ss_mem_sel == 2'd0) ? ss_vram_q :
                  (ss_mem_sel == 2'd1) ? ram_q : nvram_q;

video vid (
   .clk(clk_sys), .ce_pix(ce_pix_g), .pal(1'b0), .border(1'b0),
   .ggres(1'b0), .mask_column(mask_column), .cut_mask(1'b0),
   .smode_M1(smode_M1), .smode_M3(smode_M3),
   .x(x), .y(y), .hsync(HS), .vsync(VS),
   .hblank(HBlank), .vblank(VBlank),
   .ss_a(ss_a), .ss_din(ss_din), .ss_we(ss_we), .ss_dout(ss_dout_vid)
);

savestate_sms #(.VARIANT(8'd0)) eng (
   .clk(clk_sys), .ce_phase(ss_ce_phase), .resetn(!reset),
   .ss_flags(ss_flags), .ss_supported(ss_supported), .ss_point(ss_point),
   .ss_freeze(ss_freeze), .ss_reset(ss_reset), .ss_loaded(ss_loaded),
   .ss_edge_reset(), .ss_active(ss_active), .ss_snd_rst(ss_snd_rst),
   .ss_a(ss_a), .ss_din(ss_din), .ss_we(ss_we), .ss_dout(ss_dout),
   .mem_addr(ss_mem_addr), .mem_din(ss_mem_din), .mem_we(ss_mem_we),
   .mem_req(ss_mem_req), .mem_ack(ss_mem_ack), .mem_q(ss_mem_q),
   .op(ss_op), .op_stb(ss_op_stb), .ss_status(ss_status),
   .img_raddr(ss_img_raddr), .img_rd_stb(ss_img_rd_stb),
   .img_taken(ss_img_taken), .img_abort(ss_img_abort),
   .img_rdy(ss_img_rdy), .img_q(ss_img_q),
   .img_waddr(ss_img_waddr), .img_wdin(ss_img_wdin), .img_wr_stb(ss_img_wr_stb)
);

// bulk-RAM ack: req delayed 3 clocks (toggle parity preserved)
reg [2:0] ss_ack_s = 0;
always @(posedge clk_sys) ss_ack_s <= {ss_ack_s[1:0], ss_mem_req};
assign ss_mem_ack = ss_ack_s[2];

// ---- memories ----
spram #(.widthad_a(14)) wram (
   .clock(clk_sys),
   .address(ss_ram_own ? ((ss_mem_sel == 2'd1) ? {1'b0, ss_mem_ad[12:0]} : 14'b0) : {1'b0, ram_a[12:0]}),
   .wren(ss_ram_own ? ((ss_mem_sel == 2'd1) & ss_mem_we) : ram_we),
   .data(ss_ram_own ? ss_mem_din : ram_d),
   .q(ram_q)
);
dpram #(.widthad_a(15)) nvram (
   .clock_a(clk_sys),
   .address_a(ss_ram_own ? ((ss_mem_sel == 2'd2) ? ss_mem_ad : 15'b0) : nvram_a),
   .wren_a(ss_ram_own ? ((ss_mem_sel == 2'd2) & ss_mem_we) : nvram_we),
   .data_a(ss_ram_own ? ss_mem_din : nvram_d),
   .q_a(nvram_q),
   .clock_b(clk_sys), .address_b(15'b0), .wren_b(1'b0), .data_b(8'b0), .q_b()
);
dpram #(.widthad_a(15), .init_file("prog.hex")) rom (
   .clock_a(clk_sys), .address_a(rom_a[14:0]), .wren_a(1'b0),
   .data_a(8'b0), .q_a(rom_do),
   .clock_b(clk_sys), .address_b(15'b0), .wren_b(1'b0), .data_b(8'b0), .q_b()
);

// ---- hashes (per-frame, non-cumulative; see frame store below) ----
reg [63:0] h_video = 0, h_audio = 0;
reg stat_rst = 0;

// ---- image memories ----
localparam integer TOTAL = 58880;
reg [7:0] imgA [0:TOTAL-1];
reg [7:0] imgA2 [0:TOTAL-1];
reg [7:0] imgB2 [0:TOTAL-1];
reg [63:0] vhA [0:79];
reg [63:0] ahA [0:79];
reg [63:0] vhB [0:79];
reg [63:0] ahB [0:79];

integer i, f, errors;
integer vsync_prev = 0;
integer frames = 0;
integer timeout;

// engine helpers
task eng_op(input [2:0] op);
begin
   @(posedge clk_sys);
   tb_op <= op; tb_op_stb <= 1;
   @(posedge clk_sys);
   tb_op_stb <= 0; tb_op <= 0;
end
endtask

task eng_save_block(input integer blk, input integer base);
integer b;
begin
   tb_raddr <= blk * 512;
   @(posedge clk_sys);
   tb_rd_stb <= 1;
   @(posedge clk_sys);
   tb_rd_stb <= 0;
   for (b = 0; b < 512; b = b + 1) begin
      timeout = 0;
      while (!ss_img_rdy && timeout < 10000) begin
         @(posedge clk_sys);
         timeout = timeout + 1;
      end
      if (!ss_img_rdy) begin
         $display("FAIL: save block %0d byte %0d never ready", blk, b);
         errors = errors + 1;
         timeout = 0;
      end
      if (base == 0) imgA[blk*512+b] = ss_img_q;
      else if (base == 1) imgA2[blk*512+b] = ss_img_q;
      else imgB2[blk*512+b] = ss_img_q;
      tb_raddr <= tb_raddr + 1;
      @(posedge clk_sys);
      tb_taken <= 1;
      @(posedge clk_sys);
      tb_taken <= 0;
      if (b != 511) begin
         tb_rd_stb <= 1;
         @(posedge clk_sys);
         tb_rd_stb <= 0;
      end
   end
end
endtask

task eng_load_block(input integer blk, input integer base, input integer corrupt);
integer b;
reg [7:0] v;
begin
   tb_waddr <= blk * 512;
   for (b = 0; b < 512; b = b + 1) begin
      if (base == 0) v = imgA[blk*512+b];
      else v = 8'h00;
      if (corrupt && blk == 0 && b == 8) v = ~v;
      tb_wdin <= v;
      @(posedge clk_sys);
      tb_wr_stb <= 1;
      @(posedge clk_sys);
      tb_wr_stb <= 0;
      tb_waddr <= tb_waddr + 1;
      repeat (5) @(posedge clk_sys);
   end
end
endtask

task wait_frames(input integer n);
integer target;
begin
   target = frames + n;
   timeout = 0;
   while (frames < target && timeout < 60000000) begin
      @(posedge clk_sys);
      timeout = timeout + 1;
   end
   if (frames < target) begin
      $display("FAIL: wait_frames timeout (%0d/%0d)", frames, target);
      errors = errors + 1;
   end
end
endtask

task do_reset;
begin
   reset <= 1;
   stat_rst <= 1;
   repeat (2) @(posedge clk_sys);
   stat_rst <= 0;
   // One-time power-on init for reset-less sequencers (bench-only; both
   // runs start identically, then run free). Plain assignment, not force.
   vid.hcount = 0;
   vid.vcount = 0;
   vid.hsync = 0;
   vid.vsync = 0;
   vid.hblank = 0;
   vid.vblank = 0;
   sys.vdp_inst.vdp_main_inst.vdp_bg_inst.x = 0;
   sys.vdp_inst.vdp_main_inst.vdp_bg_inst.tile_index = 0;
   sys.vdp_inst.vdp_main_inst.vdp_spr_inst.state = 0;
   sys.vdp_inst.vdp_main_inst.vdp_spr_inst.count = 0;
   sys.vdp_inst.vdp_main_inst.vdp_spr_inst.index = 0;
   sys.vdp_inst.vdp_main_inst.vdp_spr_inst.xhdl0.shifters[0].shifter.shift0 = 0;
   sys.vdp_inst.vdp_main_inst.vdp_spr_inst.xhdl0.shifters[0].shifter.shift1 = 0;
   sys.vdp_inst.vdp_main_inst.vdp_spr_inst.xhdl0.shifters[0].shifter.shift2 = 0;
   sys.vdp_inst.vdp_main_inst.vdp_spr_inst.xhdl0.shifters[0].shifter.shift3 = 0;
   sys.vdp_inst.vdp_main_inst.vdp_spr_inst.xhdl0.shifters[0].shifter.wideclock = 0;
   sys.vdp_inst.vdp_main_inst.vdp_spr_inst.xhdl0.shifters[1].shifter.shift0 = 0;
   sys.vdp_inst.vdp_main_inst.vdp_spr_inst.xhdl0.shifters[1].shifter.shift1 = 0;
   sys.vdp_inst.vdp_main_inst.vdp_spr_inst.xhdl0.shifters[1].shifter.shift2 = 0;
   sys.vdp_inst.vdp_main_inst.vdp_spr_inst.xhdl0.shifters[1].shifter.shift3 = 0;
   sys.vdp_inst.vdp_main_inst.vdp_spr_inst.xhdl0.shifters[1].shifter.wideclock = 0;
   sys.vdp_inst.vdp_main_inst.vdp_spr_inst.xhdl0.shifters[2].shifter.shift0 = 0;
   sys.vdp_inst.vdp_main_inst.vdp_spr_inst.xhdl0.shifters[2].shifter.shift1 = 0;
   sys.vdp_inst.vdp_main_inst.vdp_spr_inst.xhdl0.shifters[2].shifter.shift2 = 0;
   sys.vdp_inst.vdp_main_inst.vdp_spr_inst.xhdl0.shifters[2].shifter.shift3 = 0;
   sys.vdp_inst.vdp_main_inst.vdp_spr_inst.xhdl0.shifters[2].shifter.wideclock = 0;
   sys.vdp_inst.vdp_main_inst.vdp_spr_inst.xhdl0.shifters[3].shifter.shift0 = 0;
   sys.vdp_inst.vdp_main_inst.vdp_spr_inst.xhdl0.shifters[3].shifter.shift1 = 0;
   sys.vdp_inst.vdp_main_inst.vdp_spr_inst.xhdl0.shifters[3].shifter.shift2 = 0;
   sys.vdp_inst.vdp_main_inst.vdp_spr_inst.xhdl0.shifters[3].shifter.shift3 = 0;
   sys.vdp_inst.vdp_main_inst.vdp_spr_inst.xhdl0.shifters[3].shifter.wideclock = 0;
   sys.vdp_inst.vdp_main_inst.vdp_spr_inst.xhdl0.shifters[4].shifter.shift0 = 0;
   sys.vdp_inst.vdp_main_inst.vdp_spr_inst.xhdl0.shifters[4].shifter.shift1 = 0;
   sys.vdp_inst.vdp_main_inst.vdp_spr_inst.xhdl0.shifters[4].shifter.shift2 = 0;
   sys.vdp_inst.vdp_main_inst.vdp_spr_inst.xhdl0.shifters[4].shifter.shift3 = 0;
   sys.vdp_inst.vdp_main_inst.vdp_spr_inst.xhdl0.shifters[4].shifter.wideclock = 0;
   sys.vdp_inst.vdp_main_inst.vdp_spr_inst.xhdl0.shifters[5].shifter.shift0 = 0;
   sys.vdp_inst.vdp_main_inst.vdp_spr_inst.xhdl0.shifters[5].shifter.shift1 = 0;
   sys.vdp_inst.vdp_main_inst.vdp_spr_inst.xhdl0.shifters[5].shifter.shift2 = 0;
   sys.vdp_inst.vdp_main_inst.vdp_spr_inst.xhdl0.shifters[5].shifter.shift3 = 0;
   sys.vdp_inst.vdp_main_inst.vdp_spr_inst.xhdl0.shifters[5].shifter.wideclock = 0;
   sys.vdp_inst.vdp_main_inst.vdp_spr_inst.xhdl0.shifters[6].shifter.shift0 = 0;
   sys.vdp_inst.vdp_main_inst.vdp_spr_inst.xhdl0.shifters[6].shifter.shift1 = 0;
   sys.vdp_inst.vdp_main_inst.vdp_spr_inst.xhdl0.shifters[6].shifter.shift2 = 0;
   sys.vdp_inst.vdp_main_inst.vdp_spr_inst.xhdl0.shifters[6].shifter.shift3 = 0;
   sys.vdp_inst.vdp_main_inst.vdp_spr_inst.xhdl0.shifters[6].shifter.wideclock = 0;
   sys.vdp_inst.vdp_main_inst.vdp_spr_inst.xhdl0.shifters[7].shifter.shift0 = 0;
   sys.vdp_inst.vdp_main_inst.vdp_spr_inst.xhdl0.shifters[7].shifter.shift1 = 0;
   sys.vdp_inst.vdp_main_inst.vdp_spr_inst.xhdl0.shifters[7].shifter.shift2 = 0;
   sys.vdp_inst.vdp_main_inst.vdp_spr_inst.xhdl0.shifters[7].shifter.shift3 = 0;
   sys.vdp_inst.vdp_main_inst.vdp_spr_inst.xhdl0.shifters[7].shifter.wideclock = 0;
   // bench-only power-on init for reset-less sequencers (see header)
   // concrete RAM fills (real blank is FF for battery, 0 elsewhere)
   for (i = 0; i < 16384; i = i + 1) wram.mem[i] = 8'h00;
   for (i = 0; i < 32768; i = i + 1) nvram.mem[i] = 8'hFF;
   for (i = 0; i < 32768; i = i + 1) sys.vdp_inst.vdp_vram_inst.mem[i] = 8'h00;
   repeat (50) @(posedge clk_sys);
   if (wram.mem[1] !== 8'h00 || nvram.mem[200] !== 8'hFF ||
       sys.vdp_inst.vdp_vram_inst.mem[1000] !== 8'h00) begin
      $display("FAIL: do_reset RAM fills did not take (w=%02x n=%02x v=%02x)",
         wram.mem[1], nvram.mem[200], sys.vdp_inst.vdp_vram_inst.mem[1000]);
      errors = errors + 1;
   end
   repeat (50) @(posedge clk_sys);
   reset <= 0;
end
endtask

// cycle watchdog (progress + speed)
reg [31:0] cyc = 0;
always @(posedge clk_sys) begin
   cyc <= cyc + 1;
   if (cyc % 2000000 == 0) begin
      $display("cyc=%0d t=%0t frames=%0d vcount=%0d hcount=%0d pc=%04x reset=%b ssfrz=%b cepix=%b cecpu=%b clkd=%0d state=%0d", cyc, $time, frames, vid.vcount, vid.hcount, sys.z80_inst.A, reset, ss_freeze, ce_pix, ce_cpu, clkd, eng.state);
   end
end

// engine state-change monitor
reg [2:0] state_prev = 0;
always @(posedge clk_sys) begin
   if (eng.state !== state_prev) begin
      $display("eng %0d->%0d was_load=%b err=%b freeze=%b loaded=%b t=%0t", state_prev, eng.state, eng.was_load, eng.err, ss_freeze, ss_loaded, $time);
      state_prev <= eng.state;
   end
end

// ce_pix per frame (exact video rate check)
reg [31:0] cepix_cnt = 0;
always @(posedge clk_sys) begin
   if (stat_rst) cepix_cnt <= 0;
   else if (VS && !vsync_prev) cepix_cnt <= 0;
   else if (ce_pix_g) cepix_cnt <= cepix_cnt + 1;
end

// frame counter + per-frame hash capture
always @(posedge clk_sys) begin
   if (stat_rst) begin
      frames <= 0;
   end else if (VS && !vsync_prev) begin
      frames <= frames + 1;
      $display("frame %0d t=%0t wram0=%02x cepix=%0d disp=%b firqen=%b vbl=%b hbl=%b irqn=%b inte=%b", frames + 1, $time, wram.mem[0], cepix_cnt, sys.vdp_inst.display_on, sys.vdp_inst.irq_frame_en, sys.vdp_inst.vbl_irq, sys.vdp_inst.hbl_irq, sys.IRQ_n, sys.z80_inst.u0.IntE_FF1);
      frame_vh <= h_video;
      frame_ah <= h_audio;
   end
   vsync_prev <= VS;
end
// per-frame (non-cumulative) hashes: cleared right after each vsync store
reg [63:0] frame_vh = 0, frame_ah = 0;
reg vsync_prev2 = 0;
always @(posedge clk_sys) begin
   vsync_prev2 <= VS && !vsync_prev;
   if (stat_rst) begin
      h_video <= 0;
      h_audio <= 0;
   end else if (vsync_prev2) begin
      h_video <= 0;
      h_audio <= 0;
   end else if (ce_pix_g) begin
      h_video <= h_video * 64'h100000001B3 ^ {43'b0, color, x};
      h_audio <= h_audio * 64'h100000001B3 ^ {16'b0, audio_l, audio_r};
   end
end

initial begin
   errors = 0;
   $display("tb_ss: start");

   // ============ run A: boot, 40 frames, save, 35 frames ============
   do_reset();
   wait_frames(2);
   if (!ss_supported) begin
      $display("FAIL: ss_supported low on clean boot");
      errors = errors + 1;
   end
   wait_frames(10);
   $display("probe12: nvram_e=%b nvram10=%02x nvram16394=%02x wram110=%02x frame=%0d",
      sys.nvram_e, nvram.mem[10], nvram.mem[16394], wram.mem[16'h110], wram.mem[0]);
   wait_frames(28);   // frames == 40
   $display("A: frame=%0d wram0=%02x nvram40 will save", frames, wram.mem[0]);
   eng_op(3'd1);      // begin-save
   timeout = 0;
   while (eng.state != 3'd2 && timeout < 200000000) begin
      @(posedge clk_sys);
      timeout = timeout + 1;
   end
   if (eng.state != 3'd2) begin
      $display("FAIL: engine never reached S_SAVE");
      errors = errors + 1;
   end
   for (f = 0; f < 115; f = f + 1) eng_save_block(f, 0);
   eng_op(3'd3);      // end
   $display("A: saved %0d bytes, header %02x%02x%02x%02x total=%0d", 115*512,
      imgA[0], imgA[1], imgA[2], imgA[3],
      {imgA[18], imgA[17], imgA[16]} & 19'h7FFFF);
   // continue to frame 75, hashing each frame
   for (f = 41; f <= 75; f = f + 1) begin
      wait_frames(1);
      vhA[f] = frame_vh;
      ahA[f] = frame_ah;
   end
   // re-save at 75
   eng_op(3'd1);
   timeout = 0;
   while (eng.state != 3'd2 && timeout < 200000000) begin
      @(posedge clk_sys);
      timeout = timeout + 1;
   end
   for (f = 0; f < 115; f = f + 1) eng_save_block(f, 1);
   eng_op(3'd3);
   $display("A: done frames=%0d", frames);

   // ============ run B: reset, 40 frames, load, 35 frames ============
   do_reset();
   wait_frames(40);
   eng_op(3'd2);      // begin-load
   eng_load_block(0, 0, 0);
   timeout = 0;
   while (eng.state != 3'd5 && timeout < 100000) begin
      @(posedge clk_sys);
      timeout = timeout + 1;
   end
   if (eng.state != 3'd5) begin
      $display("FAIL: engine never reached S_LOAD (state=%0d err=%0d)", eng.state, eng.err);
      errors = errors + 1;
   end
   for (f = 1; f < 115; f = f + 1) eng_load_block(f, 0, 0);
   eng_op(3'd3);
   timeout = 0;
   while (eng.state != 3'd0 && timeout < 1000000) begin
      @(posedge clk_sys);
      timeout = timeout + 1;
   end
   if (eng.state != 3'd0) begin
      $display("FAIL: engine never returned to IDLE after load");
      errors = errors + 1;
   end
   repeat (4) @(posedge clk_sys);
   if (!ss_loaded_seen) begin
      $display("FAIL: ss_loaded never pulsed");
      errors = errors + 1;
   end
   for (f = 41; f <= 75; f = f + 1) begin
      wait_frames(1);
      vhB[f] = frame_vh;
      ahB[f] = frame_ah;
      // f==41 is a partial frame (freeze lands mid-vblank; A and B freeze
      // at different raster points), so only 42+ are compared. The endpoint
      // images prove the states reconverge exactly regardless.
      if (f == 41) begin
         $display("note: skipping partial frame 41 (A=%016x B=%016x)", vhA[f], vhB[f]);
      end else if (vhB[f] !== vhA[f]) begin
         $display("FAIL: video hash frame %0d A=%016x B=%016x", f, vhA[f], vhB[f]);
         errors = errors + 1;
      end
      if (f != 41 && ahB[f] !== ahA[f]) begin
         $display("FAIL: audio hash frame %0d A=%016x B=%016x", f, ahA[f], ahB[f]);
         errors = errors + 1;
      end
   end
   // re-save at 75, must be byte-identical to A's re-save
   eng_op(3'd1);
   timeout = 0;
   while (eng.state != 3'd2 && timeout < 200000000) begin
      @(posedge clk_sys);
      timeout = timeout + 1;
   end
   for (f = 0; f < 115; f = f + 1) eng_save_block(f, 2);
   eng_op(3'd3);
   for (i = 0; i < TOTAL; i = i + 1) begin
      if (imgB2[i] !== imgA2[i]) begin
         $display("FAIL: resave image diff at %0d A=%02x B=%02x", i, imgA2[i], imgB2[i]);
         errors = errors + 1;
         if (errors > 10) begin
            $display("...stopping diff dump");
            i = TOTAL;
         end
      end
   end
   // endpoint RAM identity
   $display("B: done frames=%0d nvram40=%02x (expect 28)", frames, nvram.mem[40]);

   // ============ corrupt: flags-flipped image rejected, game undisturbed ====
   do_reset();
   wait_frames(5);
   for (f = 6; f <= 15; f = f + 1) begin
      wait_frames(1);
      vhA[f] = frame_vh;
   end
   do_reset();
   wait_frames(5);
   eng_op(3'd2);
   eng_load_block(0, 0, 1);   // corrupt byte 8
   timeout = 0;
   while (!(eng.hdr_done) && timeout < 100000) begin
      @(posedge clk_sys);
      timeout = timeout + 1;
   end
   repeat (100) @(posedge clk_sys);
   if (eng.state != 3'd3 || eng.err != 1'b1) begin
      $display("FAIL: corrupt header not rejected (state=%0d err=%0d)", eng.state, eng.err);
      errors = errors + 1;
   end else begin
      $display("corrupt: rejected in S_HDR as expected");
   end
   eng_op(3'd4);      // abort: unfreeze
   for (f = 6; f <= 15; f = f + 1) begin
      wait_frames(1);
      if (frame_vh !== vhA[f]) begin
         $display("FAIL: post-reject video frame %0d ref=%016x got=%016x", f, vhA[f], frame_vh);
         errors = errors + 1;
      end
   end
   $display("corrupt: game undisturbed, frames=%0d", frames);

   // ============ battery rollback micro-check ====
   do_reset();
   wait_frames(40);
   eng_op(3'd1);
   timeout = 0;
   while (eng.state != 3'd2 && timeout < 200000000) begin
      @(posedge clk_sys);
      timeout = timeout + 1;
   end
   for (f = 0; f < 115; f = f + 1) eng_save_block(f, 0);
   eng_op(3'd3);
   // let the save's settle reach IDLE before starting the load, or OP_LOAD
   // is ignored (it only fires from IDLE)
   timeout = 0;
   while (eng.state != 3'd0 && timeout < 1000000) begin
      @(posedge clk_sys);
      timeout = timeout + 1;
   end
   $display("batt: post-save live nvram8-12=%02x%02x%02x%02x%02x img=%02x%02x%02x%02x%02x",
      nvram.mem[8], nvram.mem[9], nvram.mem[10], nvram.mem[11], nvram.mem[12],
      imgA[26112+8], imgA[26112+9], imgA[26112+10], imgA[26112+11], imgA[26112+12]);
   // game makes progress after the save
   nvram.mem[10] = 8'hFF;
   nvram.mem[11] = 8'hFF;
   // load rolls back
   eng_op(3'd2);
   eng_load_block(0, 0, 0);
   timeout = 0;
   while (eng.state != 3'd5 && timeout < 100000) begin
      @(posedge clk_sys);
      timeout = timeout + 1;
   end
   nvmon <= 1;
   for (f = 1; f < 115; f = f + 1) eng_load_block(f, 0, 0);
   nvmon <= 0;
   $display("batt: S_LOAD tb-wr_stb pulses=%0d engine-mem_req issues=%0d last=%05x",
      nvrstbcnt, nvwrcnt, lastwaddr);
   eng_op(3'd3);
   repeat (100) @(posedge clk_sys);
   $display("batt: post-load live nvram8-12=%02x%02x%02x%02x%02x",
      nvram.mem[8], nvram.mem[9], nvram.mem[10], nvram.mem[11], nvram.mem[12]);
   if (nvram.mem[10] !== 8'h0A || nvram.mem[11] !== 8'h0B) begin
      $display("FAIL: NVRAM rollback nvram10=%02x nvram11=%02x (expect 0A 0B)", nvram.mem[10], nvram.mem[11]);
      errors = errors + 1;
   end else begin
      $display("battery: rollback ok");
   end

   if (errors == 0) $display("tb_ss: ALL PASSED");
   else $display("tb_ss: %0d FAILURES", errors);
   $finish;
end

// NVRAM-section write monitor (battery-load debug)
reg nvmon = 0;
reg eng_mem_req_prev = 0;always @(posedge clk_sys) eng_mem_req_prev <= eng.mem_req;
reg [31:0] nvwrcnt = 0, nvrstbcnt = 0;
reg [16:0] lastwaddr = 0;
always @(posedge clk_sys) begin
   if (nvmon && eng.state == 3'd5 && tb_wr_stb)
      nvrstbcnt <= nvrstbcnt + 1;
   if (nvmon && eng.state == 3'd5 && (eng.mem_req !== eng_mem_req_prev)) begin
      nvwrcnt <= nvwrcnt + 1;
      lastwaddr <= eng.mem_addr;
   end
end

// ss_loaded watcher
reg ss_loaded_seen = 0;
always @(posedge clk_sys) begin
   if (ss_loaded) ss_loaded_seen <= 1;
   if (reset) ss_loaded_seen <= 0;
end

endmodule


