IOWR equ 0o400000

	cseg

interrupt0: dw 0, 0, 0, 0, 0, 0, 0, 0

interrupt1:
	dw 0
	dw 0
	dw 0
	dw 0
	dw 0
	dw 0
	dw 0o000777
	dw entry

interrupt2: dw 0, 0, 0, 0, 0, 0, 0, 0
interrupt3: dw 0, 0, 0, 0, 0, 0, 0, 0
interrupt4: dw 0, 0, 0, 0, 0, 0, 0, 0
interrupt5: dw 0, 0, 0, 0, 0, 0, 0, 0
interrupt6: dw 0, 0, 0, 0, 0, 0, 0, 0
interrupt7: dw 0, 0, 0, 0, 0, 0, 0, 0
interrupt8: dw 0, 0, 0, 0, 0, 0, 0, 0
interrupt9: dw 0, 0, 0, 0, 0, 0, 0, 0
interrupta: dw 0, 0, 0, 0, 0, 0, 0, 0
interruptb: dw 0, 0, 0, 0, 0, 0, 0, 0
interruptc: dw 0, 0, 0, 0, 0, 0, 0, 0
interruptd: dw 0, 0, 0, 0, 0, 0, 0, 0
interrupte: dw 0, 0, 0, 0, 0, 0, 0, 0
interruptf: dw 0, 0, 0, 0, 0, 0, 0, 0

interruptS:
	dw 0, 0, 0, 0
	dw 0 ; irqp
	dw 0
	dw 0o000777
	dw systemcall

entry:
	ord
	red

	; DIV mixed signs

	lds 0
	lda -1
	lde -3
	div 2
	tov
	cpd
	andd
	iet -1
	andd
	ste [temp]
	lda [temp]
	iet 1
	brc divms_success
	lde 'J'
	io IOWR
	hlt
divms_success:

	; DIV left scaled

	lds -1
	lda 0
	lde 3
	div 2
	tov
	cpd
	andd
	iet 3
	andd
	ste [temp]
	lda [temp]
	iez
	brc divls_success
	lde 'I'
	io IOWR
	hlt
divls_success:

	; DIV right scaled

	lds 17
	lda 3
	lde 0
	div 2
	tov
	cpd
	andd
	iet 1
	andd
	ste [temp]
	lda [temp]
	iet 1
	brc divrs_success
	lde 'H'
	io IOWR
	hlt
divrs_success:

	; DIV simple

	lds 0
	lda 0
	lde 3
	div 2
	tov
	cpd
	andd
	iet 1
	andd
	ste [temp]
	lda [temp]
	iet 1
	brc divs_success
	lde 'G'
	io IOWR
	hlt
divs_success:

	; ADX

	ldx 5
	adx -6
	stx [temp]
	lda [temp]
	iet -1
	brc adx_success
	lde 'F'
	io IOWR
	hlt
adx_success:

	; EXIT

	lda 1
	lde 2
	ldx 3
	exit
	iet 2
	andd
	ste [temp]
	lda [temp]
	iet 2
	andd
	stx [temp]
	lda [temp]
	iet 2
	brc exit_success
	lda 'E'
	io IOWR
	hlt
exit_success:

	; LDP

	lde 1234
	lda 4096
	ldp
	ste [0]
	lda [0]
	sub [0]
	ldp
	ldx 4096
	lda [0, x]
	iet 1234
	brc ldp_success
	lda 'D'
	io IOWR
	hlt
ldp_success:

	; IOP

	lda 3
	iop
	cpd
	andd
	lda 1
	iop
	brc iop_success
	lda 'C'
	io IOWR
	hlt
iop_success:

	; IGZ

	lda -1
	igz
	cpd
	andd
	lda 1
	igz
	brc igz_success
	lda 'B'
	io IOWR
	hlt
igz_success:

	; Mixed sign MUL

	lds 0
	lda -2
	mul 3
	tov
	cpd
	andd
	iet 0o777777
	andd
	ste [temp]
	lda [temp]
	iet -6
	brc msm_success
	lda 'A'
	io IOWR
	hlt
msm_success:

	; Scaled positive overflow MUL

	rov
	lds 18
	lda 0o200000
	mul 1
	tov
	andd
	iet 0o400000
	andd
	ste [temp]
	lda [temp]
	iet 0o400000
	brc spom_success
	lda 'e'
	io IOWR
	hlt
spom_success:

	; Scaled positive MUL

	lds 17
	lda 2
	mul 3
	tov
	cpd
	andd
	iet 6
	andd
	ste [temp]
	lda [temp]
	iet 0
	brc scp_success
	lda 'f'
	io IOWR
	hlt
scp_success:

	; Scaled MUL

	lds -9
	lda 0o2000
	mul 0o3000
	tov
	cpd
	andd
	iet 0
	andd
	ste [temp]
	lda [temp]
	iet 0o6000
	brc scm_success
	lda 'g'
	io IOWR
	hlt
scm_success:

	; Simple MUL

	lds 0
	lda 2
	mul 3
	tov
	cpd
	andd
	iet 0
	andd
	ste [temp]
	lda [temp]
	iet 6
	brc sm_success
	lda 'h'
	io IOWR
	hlt
sm_success:

	; LDS/SSA

	lds -4
	ssa
	iet (-4) and 0o77
	brc lds_success
	lda 'g'
	io IOWR
	hlt
lds_success:

	; ILT false

	lda 4
	ilt 2
	cpd
	brc ilt3_success
	lda 'h'
	io IOWR
	hlt
ilt3_success:

	; ILT unsigned

	lda 2
	ilt 4
	brc ilt2_success
	lda 'i'
	io IOWR
	hlt
ilt2_success:

	; ILT signed

	lda -2
	ilt 4
	brc ilt1_success
	lda 'j'
	io IOWR
	hlt
ilt1_success:

	; Sub overflow negative

	lda 0o400000
	sub 1
	tov
	andd
	iet 0o377777
	andd
	lda 0
	adc
	iet 1
	brc son_success
	lda 'k'
	io IOWR
	hlt
son_success:

	; Sub overflow positive

	lda 0o377777
	sub -1
	tov
	andd
	iet 0o400000
	andd
	lda 0
	adc
	iet 0
	brc sop_success
	lda 'l'
	io IOWR
	hlt
sop_success:

	; SUB no overflow negative

	lda -1
	sub -1
	tov
	cpd
	andd
	iet 0
	andd
	lda 0
	adc
	iet 0
	brc sn_success
	lda 'm'
	io IOWR
	hlt
sn_success:

	; SUB no overflow positive

	lda 0
	sub 1
	tov
	cpd
	andd
	iet -1
	andd
	lda 0
	adc
	iet 1
	brc sp_success
	lda 'n'
	io IOWR
	hlt
sp_success:

	; XNGT

	ldx 1
	xngt 0
	cpd
	andd
	xngt 1
	andd
	xngt 2
	brc xngt_success
	lda 'o'
	io IOWR
	hlt
xngt_success:

	; EXU doing nothing

	lda 0
exuexu:
	exu exuexu
	iet 0
	brc edn_success
	lda 'p'
	io IOWR
	hlt
edn_success:

	; EXU doing something

	lda 0
	exu lda1
	iet 1
	brc eds_success
	lda 'q'
	io IOWR
	hlt
eds_success:

	; Call subroutine

	lda 0
	brm [test_subr]
	iet 1
	brc cs_success
	lda 'r'
	io IOWR
	hlt
cs_success:

	; Double cycle right

	lda 0o400001
	lde 0o400001
	dcy -1
	iet 0o600000
	andd
	ste [temp]
	lda [temp]
	iet 0o600000
	brc dcr_success
	lda 's'
	io IOWR
	hlt
dcr_success:

	; Double cycle left

	lda 0o400001
	lde 0o400001
	dcy 1
	iet 0o000003
	andd
	ste [temp]
	lda [temp]
	iet 0o000003
	brc dcl_success
	lda 't'
	io IOWR
	hlt
dcl_success:

	; Cycle right

	lda 0o400001
	cyc -1
	iet 0o600000
	brc cr_success
	lda 'u'
	io IOWR
	hlt
cr_success:

	; Cycle left

	lda 0o400001
	cyc 1
	iet 0o000003
	brc cl_success
	lda 'v'
	io IOWR
	hlt
cl_success:

	; Double shift right

	lda 0o400001
	lde 0o600001
	dsh -1
	tov
	cpd
	andd
	iet 0o600000
	andd
	ste [temp]
	lda [temp]
	iet 0o700000
	brc dsr_success
	lda 'w'
	io IOWR
	hlt
dsr_success:

	; Double shift left

	lda 0o400001
	lde 0o600001
	dsh 1
	tov
	andd
	iet 0o000003
	andd
	ste [temp]
	lda [temp]
	iet 0o400002
	brc dsl_success
	lda 'y'
	io IOWR
	hlt
dsl_success:

	; Shift right

	lda 0o400001
	shf -1
	tov
	cpd
	andd
	iet 0o600000
	brc sr_success
	lda 'x'
	io IOWR
	hlt
sr_success:

	; Shift left

	lda 0o400001
	shf 1
	tov
	andd
	iet 0o000002
	brc sl_success
	lda 'z'
	io IOWR
	hlt
sl_success:

	; Carrying positive add

	lda 0o777777
	add 1
	tov
	cpd		; want no overflow
	andd
	iet 0
	andd
	lda 0
	adc
	iet 1
	brc cpa_success
	lda 'a'
	io IOWR
	hlt
cpa_success:
	
	; Overflowing negative add

	lda 0o400000
	add -1
	iet 0o377777
	andd
	tov
	andd
	lda 0
	adc
	iet 0
	brc ona_success
	lda 'b'
	io IOWR
	hlt
ona_success:

	; Overflowing positive add

	lda 0o377777
	add 1
	iet 0o400000
	andd
	tov
	andd
	lda 0
	adc
	iet 1
	brc opa_success
	lda 'c'
	io IOWR
	hlt
opa_success:

	; Simple add

	lda 1
	add 2
	iet 3
	brc add_success
	lda 'd'
	io IOWR
	hlt

add_success:
	hlt

test_subr:
	dw 0
lda1:
	lda 1
	bru [test_subr]

systemcall:
	add 1
	adx -1
	tin interruptS

saveda: dw 0
savede: dw 0
savedx: dw 0
savedsc: dw 0

	dseg
temp: dw 0

