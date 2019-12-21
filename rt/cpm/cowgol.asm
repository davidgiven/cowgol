    extrn cmain

    ; CP/M entry point at 0x100.

    lxi sp, stackend
    call cmain
    rst 0
    dseg
stack:
    ds 128
stackend:


    public add4
    cseg
add4:
    pop b
    pop d
    pop h
    xthl
    dad d
    shld t1
    pop d
    pop h
    jnc .1
    inx h
.1: dad d
    push h
    lhld t1
    push h
    push b
    ret

    public sub4
    cseg
sub4:
    pop b

    pop h          ; hl=rhslo
    pop d          ; de=rhshi
    xchg           ; hl=rhshi, de=rhslo
    shld t1
    pop h          ; hl=lhslo, de=rhslo, t1=rhshi
    mov a, l
    sub e
    mov l, a
    mov a, h
    sbb d
    mov h, a       ; hl=resultlo, t1=rhshi
    shld t2        ; t1=rhshi, t2=resultlo
    pop d          ; de=lhshi, t1=rhshi, t2=resultlo
    lhld t1        ; hl=rhshi, de=lhshi, t2=resultlo
    mov a, e
    sbb l
    mov e, a
    mov a, d
    sbb h
    mov d, a       ; de=resulthi, t2=resultlo
    lhld t2
    push d
    push h

    push b
    ret

	; Copies a 32-bit value pointed to from DE to HL.
	; Corrupts A.
	public cpy4
	cseg
cpy4:
	ldax d
	mov m, h
	inc d
	inc h
	ldax d
	mov m, h
	inc d
	inc h
	ldax d
	mov m, h
	inc d
	inc h
	ldax d
	mov m, h
	ret

	; Shifts A left B bits.
	; Corrupts A and B.
	public asl1
	cseg
asl1:
	dec b
	rm
	add a
	jmp asl1

	; Shifts HL left B bits.
	; Corrupts A and HL.
	public asl2
	cseg
asl2:
	dec b
	rm
	dad h
	jmp asl2

	; Logical shift A right B bits.
	; Corrupts A and B.
	public lsr1
	cseg
lsr1:
	dec b
	rm
	ora a
	rar
	jmp lsr1

	; Logical shift HL right B bits.
	; Corrupts A, B and HL.
	public lsr2
	cseg
lsr2:
	dec b
	rm
	ora a
	mov a, h
	rar
	mov h, a
	mov a, l
	rar
	mov l, a
	jmp lsr2

	; Arithmetic shift A right B bits.
	; Corrupts A, B and C.
	public asr1
	cseg
asr1:
	mov c, a		; old copy of A
asr1_loop:
	dec b
	rm
	rla
	mov a, c
	rra
	mov c, a
	jmp asr1_loop

	; Arithmetic shift HL right B bits.
	; Corrupts A, B and HL.
	public asr2
	cseg
asr2:
	dec b
	rm
	mov a, h
	rla
	mov a, h
	rra
	mov h, a
	mov a, l
	rar
	mov l, a
	jmp asr2

    dseg
t1: dw 0
t2: dw 0
