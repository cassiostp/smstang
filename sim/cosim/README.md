# Master System co-simulation (`sim/cosim`)

A Verilator model of smstang's real firmware-facing interface logic — the
`iosys_bl616` UART protocol engine (with OSD text and the battery-save
channel) plus the 32 KB battery RAM it talks to — for the TangCore firmware
co-simulation (see firmware `host/README.md`, "RTL backend"). No game, no
video, no audio: it exercises firmware↔core interactions (combos and pad
frames during play, battery-save dumps/restores, reset, MODE, core_config
bits) without hardware.

## Layout

- `cosim_top.sv` — the small top: real `iosys_bl616` (as
  `iosys_bl616_cosim`, generated, see below) + the nvram `dpram` wired
  exactly as `smstang_top` wires them (iosys on port B, the game hook on
  port A; the game's wren IS `sv_core_we`), plus sim-only surroundings:
  game-write hooks (`poke_*`, `churn_en`), a ROM byte sink, MODE silencing,
  and a `tx_pending` output so the bridge never jumps over a reply owed by
  the model. Clocks and reset come from C++: ONE clk per sim tick (no fclk
  — nothing here is multi-clock; `hclk` mirrors `clk` and only feeds
  textdisp's unobserved render pipeline, OSD text is snapshotted straight
  out of the DPB array). The model runs iosys at 21.492 MHz with
  FREQ=21_492_000, NOT the board's 53.7 MHz: the UART divider comes from
  FREQ, so this keeps the wire at exactly 2 Mbaud in the firmware's
  timebase. The 20 ms pad throttle stretches to ~46 ms of sim time (its
  counter counts clk); the firmware polls, so nobody can tell.
- No SDRAM model: smstang's save path never touches the SDRAM controller
  (the ROM loader uses it, but no loader runs here — the ROM stream just
  lands in a byte counter). The battery RAM is the on-chip dual-port
  `dpram` from `src/dpram.v` (a generated copy, see below), which powers up
  all-0xFF like the firmware's blank SMS save (`saves.cpp` geom 0xFF).
- `gowin/` — behavioural stand-in for the Gowin DPB behind
  `gowin_dpb_menu` (OSD text buffer), copied from the NES co-sim: same
  module name and ports as this core's wrapper, zero-init, render side
  unmodelled.

## Generated sources (build-time, never committed)

`build/gen/` holds mechanical copies of real sources, each verified by the
build (grep checks + printed diff):

- `iosys_bl616_cosim.v` — from `src/iosys/iosys_bl616.v`, with exactly
  three changes: module renamed, the `CORE_ID` parameter deleted and added
  as the `cosim_core_id` input (programming the model answers as the
  programmed core; every reply byte stays DUT-generated), the `tx_data <=
  CORE_ID[7:0]` use pointed at it. (The NES recipe's `input reg` kbd
  softener is not needed: this iosys revision has no kbd port.)
- `dpram_sim.v` — from `src/dpram.v`: the memory gains `verilator public`
  (the bridge reads save bytes out of it directly) and a power-up fill of
  all-ones, placed in the else-branch of the core's own `init_file` guard,
  so a real caller's hex init would still win. No functional change.
- `uart_fixed_sim.v` — from the same-named source: the dummy
  `ASSERTION_ERROR` instances (which iverilog discards with the false
  generate branch but Verilator elaborates) replaced by empty begins. No
  functional change.
- The verilate line waives five style warnings (`-Wno-PINMISSING` etc.)
  that the core's own RTL carries; the log is then grepped for any waived
  warning naming `cosim_top`, `dpram` or `gowin_dpb` — the waivers must
  never cover our files.

## Tests

- The firmware `s-*.script` suite (`bash host/run-tests.sh --sms` over in
  the firmware worktree): save round trip (32768-byte `saves/sms/<rom>.sav`
  through dump → power cycle → restore), menu combo and reset combo during
  a dump with the game writing nvram continuously, `core_config` bits
  (scanlines/pause, plus Game Gear bit 0 via a `.gg` load), MODE — all
  through the real serial link at the real baud.

## Differences from the NES template (nestang `sim/cosim/`)

The porting recipe's step list, annotated:

1. `cosim_top.sv`: `SAVE_AW=15` (32 KB), no `SAVE_SYNC` parameter (this
   iosys revision is sync-flavored by construction: no `sv_req`/`sv_ack`
   ports, the save port IS a dpram port), `FREQ=21_492_000` (see above),
   `tx_pending` reads `sv_rd_req/sv_rd_ack` (the RX→TX toggle inside this
   iosys) instead of `sv_req/sv_ack`, and the save "client" is the dpram
   port map instead of the sdram_nes save channel.
2. `Makefile`: same sed anchors (they match this iosys line-for-line), the
   `config.sv` entry dropped (smstang has no configPackage), `dpram_sim.v`
   instead of `sdram_nes_sim.v`/`sdram_chip.sv`. NOTE the recipe's
   verilator-line guard is `(verilator && ! -s log) || (! grep log)`: a
   failing Verilator still passes the line if the log names no PINMISSING
   in our files — the subsequent make of `obj/Vcosim_top.mk` is what fails
   loudly. Kept as-is (same latent hole as the template).
3. Firmware `host/sim/backend_rtl/model_sms.cpp`: no SDRAM array path
   (`save_base()` is 0, the nvram dpram IS the save window), one clk per
   tick, and the factory lands under backend_rtl.cpp's hardcoded name
   `new_nes_model` (backend_rtl.cpp stays untouched; the SMS build links
   it + model_sms.cpp only — CMake errors if both cores are enabled).
4. `host/run-tests.sh`: `--sms` runs `s-*.script` with `--core
   smstang-rtl`; RTL build dirs are now `build-rtl-<core>`.
