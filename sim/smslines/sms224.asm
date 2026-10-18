; smslines homebrew test: 224-line then 240-line pattern with marked rows.
;
; Own code for issue #45 (cassiostp/tangcore#45): smstang's frame buffer used
; to store only lines 0-191, cropping the Master System II VDP's 224/240-line
; modes. This ROM first selects the 224-line mode (VDP R1 M1), draws a name
; table whose first row uses tile 1 and whose last row (row 27) uses tile 2,
; holds it ~3 s, then selects the 240-line mode (R1 M3) with first row tile 1
; and last row (row 29) tile 2, and loops the two phases forever.
;
; The middle rows use tile 0. Tile 1 is solid ($FF fill), tile 2 is striped
; ($AA fill), tile 0 is blank. The sim bench (tb_smslines.v) replays the same
; two phases at frame-buffer level with the same marker concept (first line
; white, last line red, middle lines line-unique) and checks the buffer and
; the scaler output; run.sh verifies this binary holds the R1 sequence
; $60 -> $70 -> $68 written with OUT ($BF),A.
;
; SMS VDP ports: $BE data, $BF control. Register write: OUT value then
; OUT $80+reg. VRAM write: OUT address bytes then OUT data bytes. V counter
; reads at $7E. Only R0/R1/R2 are programmed here; the rest stay at the VDP
; reset defaults, which is enough to select the line mode and draw the grid.
; Assembled with assemble.py (skoolkit encoder, $ hex, labels, ORG / DEFB /
; DEFW / DEFM / DEFS). The checksum at $7FFA is a placeholder; no firmware
; check runs in the bench.

        ORG $0000
Reset:  DI
        JP Start

        ORG $0038
        EI
        RETI

        ORG $0066
        RETN

Start:  LD SP,$DFF0

; ---- phase 1: 224-line mode ------------------------------------------
; R0 = $06: Mode 4 (M4) + extended modes (M2). R1 = $70: display on,
; frame IRQ on, M1 (224 lines). R2 = $0E: name table at $3800.
Phase224:
        LD A,$06
        OUT ($BF),A
        LD A,$80
        OUT ($BF),A
        LD A,$70
        OUT ($BF),A
        LD A,$81
        OUT ($BF),A
        LD A,$0E
        OUT ($BF),A
        LD A,$82
        OUT ($BF),A

        CALL LoadTiles
        LD A,28                 ; 28 name rows in 224-line mode
        CALL FillNames          ; row 0 = tile 1, last row = tile 2
        LD B,180
        CALL WaitFrames         ; hold ~3 s

; ---- phase 2: 240-line mode ------------------------------------------
; R1 = $68: display on, frame IRQ on, M3 (240 lines). R0/R2 unchanged.
Phase240:
        LD A,$68
        OUT ($BF),A
        LD A,$81
        OUT ($BF),A

        LD A,30                 ; 30 name rows in 240-line mode
        CALL FillNames
        LD B,180
        CALL WaitFrames
        JP Phase224             ; loop both phases forever

; ---- LoadTiles: 3 tiles at VRAM $4000 --------------------------------
; Tile 0 blank, tile 1 solid $FF, tile 2 striped $AA. 32 bytes per tile.
LoadTiles:
        XOR A
        OUT ($BF),A             ; VRAM address low ($4000)
        LD A,$40
        OUT ($BF),A             ; address high + VRAM-write flag
        LD B,32
T0Loop: XOR A
        OUT ($BE),A
        DJNZ T0Loop
        LD B,32
T1Loop: LD A,$FF
        OUT ($BE),A
        DJNZ T1Loop
        LD B,32
T2Loop: LD A,$AA
        OUT ($BE),A
        DJNZ T2Loop
        RET

; ---- FillNames: A = row count; row 0 tile 1, last row tile 2 ----------
; Name table at $3800 via the VRAM data port (address auto-increments),
; 32 columns x 2 bytes per entry. D = row index, E = last row index,
; B = rows left, C = columns left.
FillNames:
        PUSH BC
        PUSH DE
        LD B,A                  ; rows left
        DEC A
        LD E,A                  ; last row index
        LD D,0                  ; row index
        XOR A
        OUT ($BF),A             ; VRAM address low ($3800)
        LD A,$78
        OUT ($BF),A             ; address high + VRAM-write flag ($38|$40)
NameRow:
        LD A,D
        CP 0
        JP NZ,NotFirst
        LD A,1                  ; first row: tile 1
        JP HaveTile
NotFirst:
        LD A,D
        CP E
        JP NZ,MidRow
        LD A,2                  ; last row: tile 2
        JP HaveTile
MidRow: XOR A                   ; middle rows: tile 0
HaveTile:
        LD C,32
NameCol:
        OUT ($BE),A             ; tile index low byte
        PUSH AF
        XOR A
        OUT ($BE),A             ; tile flags byte 0
        POP AF
        DEC C
        JP NZ,NameCol
        INC D                   ; next row
        DJNZ NameRow
        POP DE
        POP BC
        RET

; ---- WaitFrames: B = VDP frames to wait (V counter at $7E) ------------
WaitFrames:
        IN A,($7E)              ; current counter
        LD C,A
WFSpin: IN A,($7E)
        CP C
        JP Z,WFSpin             ; wait for the counter to move
        DJNZ WaitFrames
        RET

        ORG $7FF0
        DEFM "TMR SEGA"         ; SMS header tag
        DEFW $FFFF              ; reserved
        DEFW $0000              ; checksum placeholder
        DEFW $0000              ; product code
        DEFB $04                ; region: export
