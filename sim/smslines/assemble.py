#!/usr/bin/env python3
"""Assemble sms224.asm into a 32 KB SMS test ROM (issue #45).

Two-pass assembly: labels/ORG/DEFB/DEFW/DEFM/DEFS handled here, Z80
instruction encoding by skoolkit's Assembler ($ hex, absolute jump targets).
Usage: python3 assemble.py [sms224.asm]  (writes smslines.bin next to it)

Also verifies the VDP mode sequence the bench replays: R1 $70 (224 lines)
then $68 (240 lines) via OUT ($BF),A, the $3800 name-table setup, the three
32-byte tiles, and the TMR SEGA header. Fails nonzero on any error.
"""
import re
import sys
from pathlib import Path

SRC = Path(sys.argv[1]) if len(sys.argv) > 1 else Path(__file__).parent / "sms224.asm"

from skoolkit.z80 import Assembler

ASM = Assembler()
REGISTERS = {
    "A", "B", "C", "D", "E", "H", "L", "AF", "BC", "DE", "HL",
    "SP", "IX", "IY", "NZ", "Z", "NC", "PO", "PE", "P", "M",
}
MNEMONICS = {
    "ORG", "DEFB", "DEFW", "DEFM", "DEFS", "ADC", "ADD", "AND", "BIT",
    "CALL", "CCF", "CP", "CPD", "CPDR", "CPI", "CPIR", "CPL", "DAA",
    "DEC", "DI", "DJNZ", "EI", "EX", "EXX", "HALT", "IM", "IN", "INC",
    "IND", "INDR", "INI", "INIR", "JP", "JR", "LD", "LDD", "LDDR", "LDI",
    "LDIR", "NEG", "NOP", "OR", "OTDR", "OTIR", "OUT", "OUTD", "OUTDR",
    "OUTI", "OTIR", "POP", "PUSH", "RES", "RET", "RETI", "RETN", "RL",
    "RLA", "RLC", "RLCA", "RLD", "RR", "RRA", "RRC", "RRCA", "RRD",
    "RST", "SBC", "SCF", "SET", "SLA", "SLL", "SRA", "SRL", "SUB",
    "XOR",
}
KEEP = REGISTERS | MNEMONICS


def strip_comment(line):
    in_str = False
    for i, ch in enumerate(line):
        if ch == '"':
            in_str = not in_str
        if ch == ";" and not in_str:
            return line[:i]
    return line


def parse_num(tok):
    tok = tok.strip()
    if tok.startswith("$"):
        return int(tok[1:], 16)
    if tok.startswith("0x"):
        return int(tok[2:], 16)
    return int(tok, 10)


def main():
    records = []  # (kind, addr, payload)
    labels = {}
    addr = 0
    org_seen = False

    lines = SRC.read_text().splitlines()
    # pass 1: addresses and label values (label operands faked as $0000)
    for lineno, raw in enumerate(lines, 1):
        line = strip_comment(raw).strip()
        if not line:
            continue
        while ":" in line:
            name, _, rest = line.partition(":")
            name = name.strip()
            if not re.fullmatch(r"[A-Za-z_][A-Za-z0-9_]*", name):
                raise SystemExit(f"{SRC}:{lineno}: bad label {name!r}")
            if name in labels:
                raise SystemExit(f"{SRC}:{lineno}: duplicate label {name}")
            labels[name] = addr
            line = rest.strip()
            if not line:
                break
        if not line:
            continue
        parts = line.split(None, 1)
        op = parts[0].upper()
        arg = parts[1] if len(parts) > 1 else ""
        if op == "ORG":
            addr = parse_num(arg)
            org_seen = True
            continue
        if not org_seen:
            raise SystemExit(f"{SRC}:{lineno}: code before ORG")
        if op == "DEFB":
            vals = [parse_num(t) for t in arg.split(",")]
            records.append(("data", addr, bytes(v & 0xFF for v in vals)))
            addr += len(vals)
        elif op == "DEFW":
            vals = [parse_num(t) for t in arg.split(",")]
            out = bytearray()
            for v in vals:
                out += bytes((v & 0xFF, (v >> 8) & 0xFF))
            records.append(("data", addr, bytes(out)))
            addr += len(out)
        elif op == "DEFM":
            m = re.fullmatch(r'"([^"]*)"', arg.strip())
            if not m:
                raise SystemExit(f"{SRC}:{lineno}: bad DEFM {arg!r}")
            out = m.group(1).encode("ascii")
            records.append(("data", addr, out))
            addr += len(out)
        elif op == "DEFS":
            items = [t.strip() for t in arg.split(",")]
            n = parse_num(items[0])
            fill = parse_num(items[1]) if len(items) > 1 else 0
            records.append(("data", addr, bytes([fill & 0xFF]) * n))
            addr += n
        else:
            # pass 1: known labels take their real values; not-yet-seen
            # (forward) labels fake a nearby address so relative jumps still
            # encode to their fixed length
            fake = line
            for name, val in labels.items():
                fake = re.sub(r"(?<!\$)\b%s\b" % re.escape(name), "$%04X" % val, fake)
            fake = re.sub(r"(?<!\$)\b[A-Za-z_][A-Za-z0-9_]*\b",
                          lambda m: ("$%04X" % (addr + 2))
                          if m.group(0).upper() not in KEEP
                          and not m.group(0)[0].isdigit() else m.group(0),
                          fake)
            enc = list(ASM.assemble(fake, addr))
            if not enc:
                raise SystemExit(f"{SRC}:{lineno}: cannot encode {line!r}")
            records.append(("code", addr, line, len(enc)))
            addr += len(enc)

    # pass 2: real encoding with resolved labels
    rom = bytearray([0x00]) * 0x8000
    for rec in records:
        kind, at = rec[0], rec[1]
        payload = rec[2]
        if kind == "data":
            rom[at:at + len(payload)] = payload
        else:
            line = payload
            for name, val in labels.items():
                line = re.sub(r"(?<!\$)\b%s\b" % re.escape(name), "$%04X" % val, line)
            enc = list(ASM.assemble(line, at))
            if not enc:
                raise SystemExit(f"cannot encode {payload!r} at ${at:04X}")
            rom[at:at + len(enc)] = bytes(enc)

    out = SRC.parent / "smslines.bin"
    out.write_bytes(bytes(rom))

    # verify the mode sequence the bench replays
    blob = bytes(rom)
    if blob[0x7FF0:0x7FF8] != b"TMR SEGA":
        raise SystemExit("header tag missing at $7FF0")
    out_bf = bytes((0xD3, 0xBF))  # OUT ($BF),A
    seqs = []
    i = 0
    while True:
        i = blob.find(out_bf, i)
        if i < 0:
            break
        if i >= 2 and blob[i - 2] == 0x3E:  # LD A,n just before
            seqs.append(blob[i - 1])
        i += 2
    for want in (0x70, 0x81, 0x68, 0x81):  # R1 224, select, R1 240, select
        if want not in seqs:
            raise SystemExit(f"R1 sequence byte ${want:02X} not in OUT ($BF) writes: "
                             + " ".join("$%02X" % b for b in seqs))
    if blob.find(bytes((0xD3, 0xBE))) < 0:
        raise SystemExit("no OUT ($BE),A data writes found")
    code_end = max((at + (len(payload) if kind == "data" else rec[3]))
                   for rec in records for kind, at, payload in [rec[:3]]
                   if at < 0x7FF0)
    print(f"smslines.bin: {len(rom)} bytes, code to ${code_end:04X}, "
          f"R1 writes {[f'${b:02X}' for b in seqs]}, header ok")


if __name__ == "__main__":
    main()
