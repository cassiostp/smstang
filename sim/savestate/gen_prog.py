#!/usr/bin/env python3
"""Homebrew SMS test program for the savestate A/B bench (sim/savestate).

Hand-assembled Z80 (no toolchain dependency): exercises VDP registers,
VRAM/CRAM, sprites, scrolling, PSG tone/noise/vol, WRAM and battery NVRAM,
with state evolving every frame off the VDP frame IRQ. The bench compares
save->continue against save->reset->load->continue for bit identity.

Writes prog.hex (32 KB, for $readmemh) next to this script.
"""
from pathlib import Path

OUT = Path(__file__).parent / "prog.hex"
ROMSZ = 32 * 1024

code = bytearray()
labels = {}
patches = []  # (offset, label, kind)


def here():
    return len(code)


def label(name):
    labels[name] = len(code)


def emit(*bs):
    code.extend(bs)


def jp(lbl):
    emit(0xC3, 0, 0)
    patches.append((len(code) - 2, lbl, "abs"))


def djnz(lbl):
    emit(0x10, 0)
    patches.append((len(code) - 1, lbl, "rel"))


def ld_a_n(n):
    emit(0x3E, n & 0xFF)


def out_p(p):
    emit(0xD3, p & 0xFF)


def vdp_reg(val, reg):
    ld_a_n(val)
    out_p(0xBF)
    ld_a_n(0x80 | reg)
    out_p(0xBF)


def vram_addr(a, cmd=0x40):
    ld_a_n(a & 0xFF)
    out_p(0xBF)
    ld_a_n(cmd | ((a >> 8) & 0x3F))
    out_p(0xBF)


# ---- reset vector ----
emit(0xF3)                    # DI
emit(0x31, 0xF0, 0xDF)        # LD SP,$DFF0
jp("main")
while len(code) < 0x38:
    emit(0x00)

# ---- RST 38h: frame IRQ: frame++ ----
label("irq")
emit(0xF5)                    # PUSH AF
emit(0x21, 0x00, 0xC0)        # LD HL,$C000
emit(0x34)                    # INC (HL)
emit(0xF1)                    # POP AF
emit(0xFB)                    # EI
emit(0xED, 0x4D)              # RETI
while len(code) < 0x100:
    emit(0x00)

# ---- main ----
label("main")
# VDP regs: 192-line, display on, frame IRQ; tables; overscan/scroll/line
vdp_reg(0x06, 0)              # R0 mode 4
vdp_reg(0xE0, 1)              # R1 display + frame IRQ
vdp_reg(0x0E, 2)              # R2 nametable $3800
vdp_reg(0x7E, 5)              # R5 sprites $3F00
vdp_reg(0x00, 6)              # R6
vdp_reg(0x00, 7)              # R7 overscan black
vdp_reg(0x00, 8)              # R8 scroll x
vdp_reg(0x00, 9)              # R9 scroll y
vdp_reg(0xFF, 10)             # R10 line counter
# palette: 16 greys
vram_addr(0xC000, 0xC0)
emit(0x06, 16)                # LD B,16
label("pal")
emit(0x78)                    # LD A,B
emit(0xE6, 0x0F)              # AND $0F
emit(0xD3, 0xBE)              # OUT ($BE),A
emit(0x05)                    # DEC B
emit(0x78)                    # LD A,B
emit(0xD3, 0xBE)              # OUT ($BE),A (GG second byte; harmless on SMS)
djnz("pal")
# tiles @ $0000: tile0 blank, tile1 solid, tile2 stripes (3x32B)
vram_addr(0x0000)
emit(0x06, 32)
label("t0")
emit(0x3E, 0x00)
emit(0xD3, 0xBE)
djnz("t0")
emit(0x06, 32)
label("t1")
emit(0x3E, 0xFF)
emit(0xD3, 0xBE)
djnz("t1")
emit(0x06, 16)
label("t2a")
emit(0x3E, 0xAA)
emit(0xD3, 0xBE)
djnz("t2a")
emit(0x06, 16)
label("t2b")
emit(0x3E, 0x55)
emit(0xD3, 0xBE)
djnz("t2b")
# nametable @ $3800: checker of tile1/tile2 over the top rows
vram_addr(0x3800)
emit(0x06, 64)
label("nt")
emit(0x3E, 0x01)
emit(0xD3, 0xBE)
emit(0x3E, 0x00)
emit(0xD3, 0xBE)
emit(0x3E, 0x02)
emit(0xD3, 0xBE)
emit(0x3E, 0x00)
emit(0xD3, 0xBE)
djnz("nt")
# sprites @ $3F00: 4 sprites, tile 1
vram_addr(0x3F00)
for i in range(4):
    ld_a_n(80 + i * 16)
    out_p(0xBE)               # Y
    ld_a_n(80 + i * 24)
    out_p(0xBE)               # X
    ld_a_n(1)
    out_p(0xBE)               # tile
    ld_a_n(0)
    out_p(0xBE)               # unused
# PSG init: tone1/tone2 periods, noise, volumes
ld_a_n(0x80 | 0x05)
out_p(0x7F)
ld_a_n(0x02)
out_p(0x7F)                   # tone0 placeholder (rewritten per frame)
ld_a_n(0xA0 | 0x08)
out_p(0x7F)
ld_a_n(0x03)
out_p(0x7F)                   # tone1
ld_a_n(0xC0 | 0x02)
out_p(0x7F)
ld_a_n(0x05)
out_p(0x7F)                   # tone2
ld_a_n(0xE3)
out_p(0x7F)                   # noise white, tone2 rate
ld_a_n(0x92)
out_p(0x7F)                   # tone1 vol
ld_a_n(0x94)
out_p(0x7F)                   # tone2 vol
ld_a_n(0x9F)
out_p(0x7F)                   # noise vol mute
# battery NVRAM on + marker
ld_a_n(0x0C)
emit(0x32, 0xFC, 0xFF)        # LD ($FFFC),A (RAM enable)
ld_a_n(0xA5)
emit(0x32, 0x00, 0x80)        # LD ($8000),A
emit(0xFB)                    # EI

# ---- frame loop ----
label("loop")
emit(0x76)                    # HALT (wakes on frame IRQ)
# scroll x/y from frame
emit(0x3A, 0x00, 0xC0)        # LD A,(frame)
out_p(0xBF)
ld_a_n(0x88)
out_p(0xBF)                   # R8 = F
emit(0x3A, 0x00, 0xC0)
emit(0x47)                    # LD B,A
emit(0x80)                    # ADD A,B (2F: wraps, deterministic)
out_p(0xBF)
ld_a_n(0x89)
out_p(0xBF)                   # R9 = 2F
# PSG tone0 sweep + beep gate
emit(0x3A, 0x00, 0xC0)
emit(0xE6, 0x0F)              # AND $0F
emit(0xF6, 0x80)              # OR $80 (latch tone0 lo)
out_p(0x7F)
emit(0x3A, 0x00, 0xC0)
emit(0xE6, 0x07)              # AND $07 (hi bits)
out_p(0x7F)
emit(0x3A, 0x00, 0xC0)
emit(0xE6, 0x01)              # F & 1
emit(0xF6, 0x9E)              # OR $9E -> $9E/$9F (tone0 vol loud/mute)
out_p(0x7F)
# WRAM scratch: WRAM[$C100 + (F&$3F)] = F
emit(0x3A, 0x00, 0xC0)
emit(0xE6, 0x3F)
emit(0x4F)                    # LD C,A
emit(0x06, 0x00)              # LD B,0
emit(0x21, 0x00, 0xC1)        # LD HL,$C100
emit(0x09)                    # ADD HL,BC
emit(0x3A, 0x00, 0xC0)
emit(0x77)                    # LD (HL),A
# NVRAM progress: NVRAM[F] = F (battery rollback check)
emit(0x3A, 0x00, 0xC0)
emit(0x4F)
emit(0x06, 0x00)
emit(0x21, 0x00, 0x80)        # LD HL,$8000
emit(0x09)
emit(0x3A, 0x00, 0xC0)
emit(0x77)
# every 16th frame: overscan + CRAM[0] + sprite0 X from frame
emit(0x3A, 0x00, 0xC0)
emit(0xE6, 0x0F)              # F & 15
emit(0x0F)                    # RRCA x4 -> F>>4
emit(0x0F)
emit(0x0F)
emit(0x0F)
emit(0xE6, 0x0F)
out_p(0xBF)
ld_a_n(0x87)
out_p(0xBF)                   # R7 = F>>4 (only nonzero when F&$F0)
vram_addr(0xC000, 0xC0)
emit(0x3A, 0x00, 0xC0)
out_p(0xBE)                   # CRAM[0] lo = F
ld_a_n(0x00)
out_p(0xBE)                   # CRAM[0] hi
vram_addr(0x3F01, 0x40)       # sprite0 X byte
emit(0x3A, 0x00, 0xC0)
out_p(0xBE)
jp("loop")

# ---- resolve ----
for off, name, kind in patches:
    a = labels[name]
    if kind == "abs":
        code[off] = a & 0xFF
        code[off + 1] = (a >> 8) & 0xFF
    else:
        code[off] = (a - (off + 1)) & 0xFF

assert len(code) < ROMSZ, len(code)
img = bytearray([0x00] * ROMSZ)
img[: len(code)] = code
with open(OUT, "w") as f:
    for i in range(ROMSZ):
        f.write("%02x\n" % img[i])
print("prog: %d bytes code, labels %s" % (len(code), sorted(labels)))
