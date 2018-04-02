	ORG 0xff80 ; FBASE

bdos: ; BDOS entry point
	out (0xff), a
	ret

COLDSTART: ; system startup entry point --- this needs to be three bytes after FBASE.
	jp boot	    ; 0: Cold start routine
bios:
	jp wboot	; 1: Warm boot - reload command processor
	jp const	; 2: Console status
	jp conin	; 3: Console input
	jp conout	; 4: Console output
	jp list	    ; 5: Printer output
	jp punch	; 6: Paper tape punch output
    jp reader	; 7: Paper tape reader input
	jp home	    ; 8: Move disc head to track 0
	jp seldsk	; 9: Select disc drive
	jp settrk	;10: Set track number
	jp setsec	;11: Set sector number
	jp setdma	;12: Set DMA address
	jp read     ;13: Read a sector
	jp write	;14: Write a sector

boot:
	xor a
	ld (3), a ; iobyte
	ld (4), a ; drive
	; falls through
wboot:
	ld a, 0xc3 ; jp
	ld (0), a
	ld (5), a

	ld hl, bios
	ld (1), hl

	ld hl, bdos
	ld (6), hl

	ld a, (4) ; get the current drive/user
	ld c, a
	out (1), a

const:
	out (2), a
	ret

conin:
	out (3), a
	ret

conout:
	out (4), a
	ret

list:
	out (5), a
	ret

punch:
	out (6), a
	ret

reader:
	out (7), a
	ret

home:
	out (8), a
	ret

seldsk:
	out (9), a
	ret

settrk:
	out (10), a
	ret

setsec:
	out (11), a
	ret

setdma:
	out (12), a
	ret

read:
	out (13), a
	ret

write:
	out (14), a
	ret

