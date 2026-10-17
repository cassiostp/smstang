Read the project-wide rules first: https://github.com/cassiostp/tangcore/blob/main/AGENTS.md

# smstang — Master System / Game Gear core

SMS and Game Gear for the Tang Console 138K/60K. Port of `MiSTer-devel/SMS_MiSTer`.

## Layout

- Top: `src/smstang_top.sv` (`module smstang_top`), machine `src/system.v`, VDP `src/video.v`/`vdp*.v`, `src/io.v`, `src/parts.v`, Sega mappers `src/MC8123.v`/`SEGASYS1_PRGDEC.v`, sound `src/jt89/*` + `src/VM2413/*` + `src/hybrid_pwm_sd.v`.
- Video: scaler `src/sms2hdmi.sv` into `src/hdmi2/hdmi.sv` (+ serializer/TMDS/packet/audio helpers); `src/video_fx.v`, `src/smooth.v`, `src/scanlines.v`.
- Memory: external `src/sdram.v` (`module sdram`) plus on-chip `src/spram.v`/`sprom.v`/`dpram.v` (the 32 KB battery `nvram_inst` is a `dpram`).
- iosys: `src/iosys/iosys_bl616.v` (plus `controller_ds2.sv`, `dualshock_controller.v`, `gowin_dpb_menu.v`, `textdisp.v`, `uart_fixed.v`).
- PLLs: `src/pll/` (138K `PLL`: `pll_12/27/53/74.v`), `src/plla/` (60K `PLLA`); one shared `src/boards/console.cst`, one shared `src/smstang.sdc`.

## Building

```tcl
gw_sh build.tcl <device>   # console60k console138k (ds2 + usb)
```

Only the device and PLL family differ between the two boards. CI:

```sh
gh workflow run cores.yml -R cassiostp/tangcore --ref ci/core-builds -f core=smstang -f ref=<branch> -f board=console138k
```

Fails on any setup/hold violation. `buildall.bat` notes 1.9.11.01 is needed for timing. Ignore the `*.gprj` files (the 60K one omits the SDC and points at a nonexistent `vm2413_vhdl/`); `build.tcl` is the source of truth.

## Clocks and constraints

- `src/smstang.sdc` is the only SDC (both boards share the 50 MHz crystal and PLL dividers): `clk_sys` ~53.70 MHz with a T80 multicycle relax (2 setup / 1 hold on `system/z80_inst`). No `create_generated_clock` entries.
- Generated in `smstang_top.sv`: `pll_53` (`clk_g -> clk_sys` + SDRAM clock), `pll_27` (-> 27 MHz), `pll_74` (-> 74.25 MHz pixel + 5x), `pll_12` (-> 12 MHz USB into `usb_hid_host`).

## Native-rate lock

NTSC SMS is 59.9345 Hz (262 lines x 3420 clocks); HDMI native is a 1652-pixel line (59.9274 Hz). `NATIVE_WIDTH = 1652` in `src/sms2hdmi.sv`; `std_timing = 1` selects the standard 1650 line. `video_std_timing` is tied `1'b0` in `src/smstang_top.sv`, so the build is native-only.
Halt at VDP line 192 (`HALT_LINE`), release at HDMI row 400 (`RELEASE_ROW`); `frame_halt` gates `ce_cpu/vdp/pix/sp_g`. PAL runs free (halt ignored).

## Firmware link

- Core ID 5 (`CORE_ID(5)` in `src/smstang_top.sv`; firmware maps 5 to `smstang.bin`).
- Save channel `SAVE_IF=1, SAVE_AW=15` (32 KB): game side is `dpram` port A, iosys save channel is port B (`sv_addr/sv_we/sv_din/sv_q`, `sv_core_we` dirty); UART `0x11/0x12` + `0x0A/0x0B`.
- `core_config` bits used: `[0]` Game Gear mode, `[17]` menu pause, `[16]` scanlines, `[19:18]` darkness, `[20]` thick, `[21]` output; `video_config` drives `sms2hdmi`/`video_fx`/`smooth`.
- `iosys_bl616.v` is one of six divergent copies (`cassiostp/tangcore#30`): a fix to one usually belongs in the others.

## Simulations (`sim/cosim/README.md` and `sim/video_fx/README.md` say how to run; iverilog in `tangcore-iv:1`)

- `cosim`: firmware-facing `iosys`+32 KB `dpram`, no SDRAM/game/video; FREQ 21.492 MHz for 2 Mbaud.
- `framelock`: real `sms2hdmi` vs a cycle-exact VDP over ~10 NTSC frames plus a ~400-frame Verilator soak; `tb_hdmi_native`/`tb_native_pos` check std-vs-native line lengths (1650 vs 1652) with identical pictures.
- `saveram`: real 2 Mbaud UART into `iosys_bl616 SAVE_IF=1,SAVE_AW=15` + `dpram`: 512-B restore/dump, `0x0B` dirty, block-0 clear, joypad interleave.
- `scanlines`: `sl_rows` geometry/darkening plus whole-frame MS/GG scaler-vs-model via `hdmi_stub`.
- `tmds`: 2-stage `tmds_channel` vs the pre-split version over 2.5M clocks.
- `video_fx`: `0x13`, `video_fx` vs `model.py`, regress-vs-git-history with filters off, FX/smoothing checks. (`verilator/README.md` is a separate RTL simulator entry point.)

## Traps

- No 60K feature cut: the two builds differ only in `pll/` vs `plla/`; there is no `picorv32` instance (only a comment in `textdisp.v`).
- `smooth.v` registers its line compare for 138K setup; PAL ignores the halt, so PAL rate checks must expect free-run.
