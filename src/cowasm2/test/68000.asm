	.seg 0 \ text
begin:
	abcd d0, d1
	abcd -(a0), -(a1)

	addx d0, d1
	addx -(a0), -(a1)
	addx.b d0, d1
	addx.b -(a0), -(a1)

	subx d0, d1
	subx -(a0), -(a1)
	subx.b d0, d1
	subx.b -(a0), -(a1)

	add #1, d1
	add #1, a1
	add #1, (a1)
	add #1, -(a1)
	add #1, (a1)+
	add #1, (94,a1)
	add #1, (94).w
	add #1, (94).l
	add.b #1, d1
	add.w #1, d1
	add.l #1, d1

	add #8, d1
	add #8, a1
	add #8, (a1)
	add #8, -(a1)
	add #8, (a1)+
	add #8, (94,a1)
	add #8, (94).w
	add #8, (94).l
	add.b #8, d0
	add.w #8, d0
	add.l #8, d0

	add d1, d2
	add a1, d2
	add (a1), d2
	add -(a1), d2
	add (a1)+, d2
	add (94,a1), d2
	add (94).w, d2
	add (94).l, d2
	add (94,pc), d2
	add.b d1, d2
	add.w d1, d2
	add.l d1, d2

	sub #1, d1
	sub #1, a1
	sub #1, (a1)
	sub #1, -(a1)
	sub #1, (a1)+
	sub #1, (94,a1)
	sub #1, (94).w
	sub #1, (94).l
	sub.b #1, d1
	sub.w #1, d1
	sub.l #1, d1

	sub #8, d1
	sub #8, a1
	sub #8, (a1)
	sub #8, -(a1)
	sub #8, (a1)+
	sub #8, (94,a1)
	sub #8, (94).w
	sub #8, (94).l
	sub.b #8, d0
	sub.w #8, d0
	sub.l #8, d0

	sub d1, d2
	sub a1, d2
	sub (a1), d2
	sub -(a1), d2
	sub (a1)+, d2
	sub (94,a1), d2
	sub (94).w, d2
	sub (94).l, d2
	sub (94,pc), d2
	sub.b d1, d2
	sub.w d1, d2
	sub.l d1, d2

	cmp #1, d1
	cmp #1, a1
	cmp #1, (a1)
	cmp #1, -(a1)
	cmp #1, (a1)+
	cmp #1, (94,a1)
	cmp #1, (94).w
	cmp #1, (94).l
	cmp.b #1, d1
	cmp.w #1, d1
	cmp.l #1, d1

	cmp #8, d1
	cmp #8, a1
	cmp #8, (a1)
	cmp #8, -(a1)
	cmp #8, (a1)+
	cmp #8, (94,a1)
	cmp #8, (94).w
	cmp #8, (94).l
	cmp.b #8, d0
	cmp.w #8, d0
	cmp.l #8, d0

	cmp d1, d2
	cmp a1, d2
	cmp (a1), d2
	cmp -(a1), d2
	cmp (a1)+, d2
	cmp (94,a1), d2
	cmp (94).w, d2
	cmp (94).l, d2
	cmp (94,pc), d2
	cmp.b d1, d2
	cmp.w d1, d2
	cmp.l d1, d2

	and #1, d1
	and #1, (a1)
	and #1, -(a1)
	and #1, (a1)+
	and #1, (94,a1)
	and #1, (94).w
	and #1, (94).l
	and.b #1, d1
	and.w #1, d1
	and.l #1, d1

	and #8, d1
	and #8, (a1)
	and #8, -(a1)
	and #8, (a1)+
	and #8, (94,a1)
	and #8, (94).w
	and #8, (94).l
	and.b #8, d0
	and.w #8, d0
	and.l #8, d0

	and d1, d2
	and (a1), d2
	and -(a1), d2
	and (a1)+, d2
	and (94,a1), d2
	and (94).w, d2
	and (94).l, d2
	and (94,pc), d2
	and.b d1, d2
	and.w d1, d2
	and.l d1, d2

	or #8, d1
	or #8, (a1)
	or #8, -(a1)
	or #8, (a1)+
	or #8, (94,a1)
	or #8, (94).w
	or #8, (94).l
	or.b #8, d0
	or.w #8, d0
	or.l #8, d0

	or d1, d2
	or (a1), d2
	or -(a1), d2
	or (a1)+, d2
	or (94,a1), d2
	or (94).w, d2
	or (94).l, d2
	or (94,pc), d2
	or.b d1, d2
	or.w d1, d2
	or.l d1, d2

	eor #8, d1
	eor #8, (a1)
	eor #8, -(a1)
	eor #8, (a1)+
	eor #8, (94,a1)
	eor #8, (94).w
	eor #8, (94).l
	eor.b #8, d0
	eor.w #8, d0
	eor.l #8, d0

	eor d1, d2
	eor d2, (a1)
	eor d2, -(a1)
	eor d2, (a1)+
	eor d2, (94,a1)
	eor d2, (94).w
	eor d2, (94).l
	eor.b d1, d2
	eor.w d1, d2
	eor.l d1, d2

	and #7, ccr
	and #7, sr
	or #7, ccr
	or #7, sr
	eor #7, ccr
	eor #7, sr

	asl d1, d2
	asl #7, d2
	asl.b d1, d2
	asl.b #7, d2
	asl.w (a1)
	asl.w (94).l
	asr d1, d2
	asr #7, d2
	asr.w (a1)
	asr.w (94).l

	lsl d1, d2
	lsr d1, d2
	lsl #1, d2
	lsr #1, d2
	lsl.w (a1)
	lsr.w (a1)
	roxl d1, d2
	roxr d1, d2
	roxl.w (a1)
	roxr.w (a1)
	rol d1, d2
	ror d1, d2
	rol.w (a1)
	ror.w (a1)

bra_label:
	bra 54
	bra begin
	bra bra_label
	bsr bra_label
	bhi bra_label
	bls bra_label
	bcc bra_label
	bcs bra_label
	bne bra_label
	beq bra_label
	bvc bra_label
	bvs bra_label
	bpl bra_label
	bmi bra_label
	bge bra_label
	blt bra_label
	bgt bra_label
	ble bra_label

	btst d1, d2
	bchg d1, d2
	bclr d1, d2
	bset d1, d2
	btst #3, d2
	bchg #3, d2
	bclr #3, d2
	bset #3, d2
	btst #3, (99).l
	bchg #3, (99).l
	bclr #3, (99).l
	bset #3, (99).l

	chk d2, d1
	divu d2, d1
	divs d2, d1
	mulu d2, d1
	muls d2, d1
	chk #3, d1
	divu #3, d1
	divs #3, d1
	mulu #3, d1
	muls #3, d1

	negx d1
	clr d1
	neg d1
	not d1
	tst d1
	negx (99).l
	clr (99).l
	neg (99).l
	not (99).l
	tst (99).l
	tst.b d1
	tst.w d1
	tst.l d1

	cmpm.l (a1)+, (a2)+
	cmpm.b (a1)+, (a2)+

	dbf d1, bra_label
	dbt d1, bra_label
	dbhi d1, bra_label
	dbls d1, bra_label
	dbcc d1, bra_label
	dbcs d1, bra_label
	dbne d1, bra_label
	dbeq d1, bra_label
	dbvc d1, bra_label
	dbvs d1, bra_label
	dbpl d1, bra_label
	dbmi d1, bra_label
	dbge d1, bra_label
	dblt d1, bra_label
	dbgt d1, bra_label
	dble d1, bra_label

	exg d1, d2
	exg a1, a2
	exg d1, a2
	exg a1, d2

	ext.w d1
	ext.l d1

	illegal
	reset
	nop
	rte
	rts
	trapv
	rtr

	jmp (bra_label).l
	jmp (0x1234).w
	jsr (a1)

	lea (a1), a2
	lea (bra_label).l, a2
	lea (0x1234).w, a2

	link a1, #99

	move d1, d2
	move a1, a2
	move a1, d2
	move d1, a2
	move (0x1234).l, (0x5678).l
	move #7, d2
	move.b d1, d2
	move.w d1, d2
	move.l d1, d2
	move.w d1, a2
	move.l d1, a2

	move.w d1, ccr
	move.w d1, sr
	move.w sr, d1
	move.l a1, usp
	move.l usp, a1

	movem.w {a0,a1,a2,a3,d0,d2}, -(a7)
	movem.w (a7)+, {a0,a1,a2,a3,d0,d2}
	movem.l {a0,a1,a2,a3,d0,d2}, -(a7)
	movem.l (a7)+, {a0,a1,a2,a3,d0,d2}
	movem {a0,a1,a2,a3,d0,d2}, (0x1234).l
	movem (0x1234).l, {a0,a1,a2,a3,d0,d2}
	
	movep d1, {0x1234, a2}
	movep.w d1, {0x1234, a2}
	movep {0x1234, a2}, d1
	movep.w {0x1234, a2}, d1

	nbcd.b d2
	nbcd.b (0x1234).l

	pea (0x1234).l
	pea (a2)
	pea (0x1234, pc)

	sf d1
	st d1
	shi d1
	sls d1
	scc d1
	scs d1
	sne d1
	seq d1
	svc d1
	svs d1
	spl d1
	smi d1
	sge d1
	slt d1
	sgt d1
	sle d1
	st (a1)
	st (0x12345).l

	swap.w d4

	tas.b d3
	tas.b (a1)
	tas.b (0x12345).l

	trap #2
	
	unlk a5

	.seg 1 \ data
	.dd 0x12345678
	.dd bra_label

	.seg 2 \ bss
	.dd 0x87654321

