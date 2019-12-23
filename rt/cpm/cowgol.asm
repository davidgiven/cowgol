    extrn cmain

    ; CP/M entry point at 0x100.

    lxi sp, stackend
    call cmain
    rst 0
    dseg
stack:
    ds 128
stackend:

	; Adds two four-byte values from the stack.
	public add4
	cseg
add4:
	pop h
	shld add4_ret

	pop h ; HL = RHS low
	pop d ; DE = RHS high
	pop b ; BC = LHS low
	dad b ; HL = RHS low + LHS low
	pop b ; BC = LHS high
	xchg  ; DE = RHS low + LHS low, HL = RHS high
	jnc add4_skip
	inx h ; carry adjust
add4_skip:
	dad b ; HL = RHS high + LHS high + carry
	push h
	push d
add4_ret = $ + 1
	jmp 0

	; Subtracts two four-byte values from the stack.
    public sub4
    cseg
sub4:
	pop h
	shld sub4_ret

	pop h ; HL = RHS low
	pop d ; DE = RHS high
	pop b ; BC = LHS low
	
	mov a, c
	sub l
	mov c, a
	mov a, b
	sbb h
	mov b, a ; BC = result low

	pop h ; HL = LHS high

	mov a, l
	sbb e
	mov l, a
	mov a, h
	sbb d
	mov h, a

	push h
	push b

sub4_ret = $ + 1
    jmp 0

	; Negates the four-byte value on the stack.
	public neg4
	cseg
neg4:
	pop h

	pop b ; BC = low
	pop d ; DE = high

	xor a
	sub c
	mov c, a
	mvi a, 0
	sbb b
	mov b, a
	mvi a, 0
	sbb e
	mov e, a
	mvi a, 0
	sbb d
	mov d, a

	push d
	push b
	pchl

	; Sets the Z flag based on the 32-bit number on the top of the stack.
	public cmpu4
	cseg
cmpu4:
	pop h
	pop b			; low
	pop d			; high

	mov a, d
	or e
	or b
	or c
	pchl

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

	; Logical shift the value at the top of the stack right B bits.
	; Corrupts A, B, HL, DE.
	public lsr4
	cseg
lsr4:
	pop h
	shld lsr4_ret

	pop h ; HL = low
	pop d ; DE = high
lsr4_loop:
	dec b
	jm lsr4_exit
	ora a
	mov a, h
	rar
	mov h, a
	mov a, l
	rar
	mov l, a
	mov a, d
	rar
	mov d, a
	mov a, e
	rar
	mov e, a
	jmp lsr4_loop
lsr4_exit:
	push d
	push h
lsr4_ret = $ + 1
	jmp 0

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
