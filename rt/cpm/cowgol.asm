    extrn cmain

    ; CP/M entry point at 0x100.

    lxi sp, stackend
    call cmain
    rst 0
    dseg
stack:
    ds 128
stackend:

    ; Multiples two 8-bit values: A = B * D.
    ; Uses DE.
    public mul1
    cseg
mul1:
    mvi c, 0            ; initial result
    mvi e, 9            ; number of bits
mul1_again:
    mov a, d
    rar                 ; rotate D, leaving result in A
    dcr e
    rz                  ; if finished, return with result in A
    mov d, a
    mov a, c
    jnc mul1_nocarry
    add b
mul1_nocarry:
    rar
    mov c, a
    jmp mul1_again

    ; Multiplies two 16-bit values: HL = BC * DE.
    ; Uses A, of course.
    public mul2
    cseg
mul2:
    lxi h, 0            ; HL = result
mul2_again:
    mov a, b            ; if multiplier = 0 then finished
    ora c
    rz

    xra a               ; clear carry and shift BC right
    mov a, b 
    rar
    mov b, a
    mov a, c
    rar
    mov c, a

    jnc mul2_nocarry    ; if carry, HL = HL + DE
    dad d
mul2_nocarry:
    xchg                ; HL = HL * 2
    dad h
    xchg
    jmp mul2_again

    ; Multiplies two 32-bit values from the stack, leaving the result
    ; on the stack.
    ; Uses EVERYTHING.
    ; This routine is taken from the ACK 8080 standard library:
    ; https://github.com/davidgiven/ack/blob/default/mach/i80/libem/mli4.s
    ; It's (c) 1987, 1990, 1993, 2005 Vrije Universiteit, Amsterdam, The Netherlands,
    ; and is distributable under the 3-clause BSD license.
    public mul4
    cseg
mul4:
    pop h
    shld mul4_return + 1

    pop h                   ; store multiplier
    shld block1
    pop h
    shld block1+2
    pop h                   ; store multiplicand
    shld block2
    pop h
    shld block2+2
    lxi h,0
    shld block3             ; product = 0
    shld block3+2
    lxi b,0
mul4_lp1:
    lxi h,block1
    dad b
    mov a,m                 ; get next byte of multiplier
    mvi b,8
mul4_lp2:
    rar
    jnc mul4_2
    lhld block2             ; add multiplicand to product
    xchg
    lhld block3
    dad d
    shld block3
    lhld block2+2
    jnc mul4_1
    inx h
mul4_1:
    xchg
    lhld block3+2
    dad d
    shld block3+2

mul4_2:
    lhld block2             ; shift multiplicand left
    dad h
    shld block2
    lhld block2+2
    jnc mul4_3
    dad h
    inx h
    jmp mul4_4
mul4_3:
    dad h
mul4_4:
    shld block2+2

    dcr b
    jnz mul4_lp2

    inr c
    mov a,c
    cpi 4
    jnz mul4_lp1

    lhld block3+2
    push h
    lhld block3
    push h
mul4_return:
    jmp 0

    ; Divides two eight-bit unsigned numbers: B / D.
    ; The quotient is returned in A, the remainder in B.
    public dvrmu1
    cseg
dvrmu1:
    mvi c, 8            ; bit count
    xra a               ; remainder
dvrmu1_1:
    mov e, a            ; temporarily store remainder in E
    mov a, b
    add a
    mov b, a
    mov a, e
    rla
    cmp d
    jc dvrmu1_2
    inc b
    sub d
dvrmu1_2:
    dec c
    jnz dvrmu1_1
    ret

    ; Divides two eight-bit signed numbers: B / D.
    ; The quotient is returned in D, the remainder in B.
    public dvrms1
    cseg
dvrms1:
    mov a, b
    xor d                ; discover sign of result
    push psw             ; save for later
    xor d                ; recover sign of b (sign of remainder)
    push psw             ; save for later
    jp dvrms1_b_positive
    xra a                ; invert b to make it positive
    sub b
    mov b, a
dvrms1_b_positive:
    mov a, d
    or d                 ; get sign of d
    jp dvrms1_d_positive
    xra a                ; invert d to make it positive
    sub d
    mov d, a
dvrms1_d_positive:
    call dvrmu1          ; actually do the division
    mov d, a
    pop psw              ; get sign of remainder
    jp dvrms1_remainder_positive
    xra a
    sub d
    mov d, a
dvrms1_remainder_positive:
    pop psw              ; get sign of result
    rp                   ; finish now if we're good
    xra a
    sub b
    mov b, a
    ret

    ; Divides two sixteen-bit unsigned numbers: DE / BC.
    ; The quotient is returned in DE, the remainder in HL.
    public dvrmu2
    cseg
dvrmu2:
    xra a               ; negate BC
    sub c
    mov c,a
    mvi a,0
    sbb b
    mov b,a

    lxi h, 0            ; initial value of remainder
    mvi a, 16           ; loop counter
dvrmu2_2:
    push psw            ; save loop counter
    dad h               ; hl = hl << 1
    xchg
    dad h
    xchg                ; de = de << 1
    jnc dvrmu2_4
    inx h
dvrmu2_4:
    push h              ; save remainder
    dad b               ; add negative divisor
    jnc dvrmu2_5
    xthl
    inx d
dvrmu2_5:
    pop h
    pop psw
    dcr a
    jnz dvrmu2_2
    ret

    ; Divides two eight-bit signed numbers: DE / BC.
    ; The quotient is returned in DE, the remainder in HL.
    public dvrms2
    cseg
dvrms2:
    mov a, d
    xor b                ; discover sign of result
    push psw             ; save for later
    xor b                ; recover sign of b (sign of remainder)
    push psw             ; save for later
    jp dvrms2_de_positive
    xra a                ; invert de to make it positive
    sub e
    mov e, a
    sbb a
    sub d
    mov d, a
dvrms2_de_positive:
    mov a, b
    or b                 ; get sign of bc
    jp dvrms2_bc_positive
    xra a                ; invert bc to make it positive
    sub c
    mov c, a
    sbb a
    sub b
    mov b, a
dvrms2_bc_positive:
    call dvrmu2          ; actually do the division
    pop psw              ; get sign of remainder
    jp dvrms2_remainder_positive
    xra a
    sub l
    mov l, a
    sbb a
    sub h
    mov h, a
dvrms2_remainder_positive:
    pop psw              ; get sign of result
    rp                   ; finish now if we're good
    xra a                ; invert bc to make it positive
    sub e
    mov e, a
    sbb a
    sub d
    mov d, a
    ret

    ; Divides two four-byte unsigned values from the stack, leaving the
    ; quotient then the remainder pushed.
    ; Uses EVERYTHING.
    ; This routine is taken from the ACK 8080 standard library:
    ; https://github.com/davidgiven/ack/blob/default/mach/i80/libem/dvi4.s
    ; It's (c) 1987, 1990, 1993, 2005 Vrije Universiteit, Amsterdam, The Netherlands,
    ; and is distributable under the 3-clause BSD license.
    public dvrmu4
    cseg
dvrmu4:
    pop b

    pop h               ; store divisor
    shld block3
    xchg
    pop h
    shld block3+2

    pop h               ; store dividend
    shld block1
    pop h
    shld block1+2

    push b
    call dvrmu4core
    pop d

    lhld block1+2
    push h
    lhld block1+0
    push h
    lhld block2+2
    push h
    lhld block2+0
    push h
    xchg
    pchl

    ; Divides two four-byte signed values from the stack, leaving the quotient
    ; then the remainder pushed.
    ; Uses EVERYTHING.
    ; This routine is taken from the ACK 8080 standard library:
    ; https://github.com/davidgiven/ack/blob/default/mach/i80/libem/dvi4.s
    ; It's (c) 1987, 1990, 1993, 2005 Vrije Universiteit, Amsterdam, The Netherlands,
    ; and is distributable under the 3-clause BSD license.
    public dvrms4
    cseg
dvrms4:
    pop b

    pop h               ; store divisor
    shld block3
    xchg
    pop h
    shld block3+2

    pop h               ; store dividend
    shld block1
    pop h
    shld block1+2

    push b              ; put return address back on stack

    lxi h, block3+3
    lda block1+3
    xra m               ; discover sign of result
    push psw            ; save for later
    xra m               ; recover sign of divisor (sign of remainder)
    push psw            ; save for later
    lxi h, block1
    cm neg4core         ; negate divisor if negative

    lda block3+3
    ora a               ; get sign of dividend
    lxi h, block3
    cm neg4core         ; negate dividend if negative

    call dvrmu4core     ; actually perform the division

    pop psw             ; get sign of remainder
    lxi h, block2
    cm neg4core

    pop psw             ; get sign of result
    lxi h, block1
    cm neg4core

    pop d               ; get return address
    lhld block1+2       ; push result and exit
    push h
    lhld block1+0
    push h
    lhld block2+2
    push h
    lhld block2+0
    push h
    xchg
    pchl

    ; Core code for the 32-bit division. Divides block3 / block1, leaving
    ; the quotient in block1 and the remainder in block2.
dvrmu4core:
    lxi h,0             ; store initial value of remainder
    shld block2
    shld block2+2

    mvi b,32
dvrmu4_again:
    lxi h,block1        ; left shift: block2 <- block1 <- 0
    mvi c,8
    xra a
dvrmu4_shiftloop:
    mov a,m
    ral
    mov m,a
    inx h
    dcr c
    jnz dvrmu4_shiftloop

    lxi h,block2+3      ; which is larger: divisor or remainder?
    lxi d,block3+3
    mvi c,4
dvrmu4_cmploop:
    ldax d
    cmp m
    jz dvrmu4_same
    jnc dvrmu4_gt
    jmp dvrmu4_le
dvrmu4_same:
    dcx d
    dcx h
    dcr c
    jnz dvrmu4_cmploop

dvrmu4_le:
    lxi d,block2        ; remainder is larger or equal: subtract divisor
    lxi h,block3
    mvi c,4
    xra a
dvrmu4_subloop:
    ldax d
    sbb m
    stax d
    inx d
    inx h
    dcr c
    jnz dvrmu4_subloop
    lxi h,block1
    inr m

dvrmu4_gt:
    dcr b
    jnz dvrmu4_again    ; keep looping
    ret

    ; Divides two four-byte unsigned values from the stack, 
    public divu4
    cseg
divu4:
    pop h
    shld divu4_ret+1
    call dvrmu4
    pop h
    pop h
divu4_ret
    jmp 0

    ; Takes the remainder of two four-byte unsigned values from the stack, 
    public remu4
    cseg
remu4:
    pop h
    shld remu4_ret+1
    call dvrmu4
    pop b
    pop d
    pop h
    pop h
    push d
    push b
remu4_ret
    jmp 0

    ; Divides two four-byte signed values from the stack, 
    public divs4
    cseg
divs4:
    pop h
    shld divs4_ret+1
    call dvrms4
    pop h
    pop h
divs4_ret
    jmp 0

    ; Takes the remainder of two four-byte nsigned values from the stack, 
    public rems4
    cseg
rems4:
    pop h
    shld rems4_ret+1
    call dvrms4
    pop b
    pop d
    pop h
    pop h
    push d
    push b
rems4_ret
    jmp 0

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

    ; ANDs two four-byte values from the stack.
    public and4
    cseg
and4:
    pop h
    shld and4_ret

    pop h ; HL = RHS low
    pop d ; DE = RHS high
    pop b ; BC = LHS low
    
    mov a, c
    ana l
    mov c, a
    mov a, b
    ana h
    mov b, a ; BC = result low

    pop h ; HL = LHS high

    mov a, l
    ana e
    mov l, a
    mov a, h
    ana d
    mov h, a

    push h
    push b

and4_ret = $ + 1
    jmp 0

    ; ORs two four-byte values from the stack.
    public or4
    cseg
or4:
    pop h
    shld or4_ret

    pop h ; HL = RHS low
    pop d ; DE = RHS high
    pop b ; BC = LHS low
    
    mov a, c
    ora l
    mov c, a
    mov a, b
    ora h
    mov b, a ; BC = result low

    pop h ; HL = LHS high

    mov a, l
    ora e
    mov l, a
    mov a, h
    ora d
    mov h, a

    push h
    push b

or4_ret = $ + 1
    jmp 0

    ; Exclusive-ORs two four-byte values from the stack.
    public eor4
    cseg
eor4:
    pop h
    shld eor4_ret

    pop h ; HL = RHS low
    pop d ; DE = RHS high
    pop b ; BC = LHS low
    
    mov a, c
    xra l
    mov c, a
    mov a, b
    xra h
    mov b, a ; BC = result low

    pop h ; HL = LHS high

    mov a, l
    xra e
    mov l, a
    mov a, h
    xra d
    mov h, a

    push h
    push b

eor4_ret = $ + 1
    jmp 0

    ; NOTs the four-byte value on the stack.
    public not4
    cseg
not4:
    pop h
    pop d               ; DE = low word
    pop b               ; BC = high word

    mov a, d
    cpl
    mov d, a
    mov a, e
    cpl
    mov e, a

    mov a, b
    cpl
    mov b, a
    mov a, c
    cpl
    mov c, a

    push b
    push d
    pchl

    ; Negates the four-byte value on the stack.
    public neg4
    cseg
neg4:
    pop d

    lxi h, 0
    dad sp
    call neg4core

    xchg
    pchl

    ; Negates the four-byte value pointed to by hl.
neg4core:
    xra a
    sub m
    mov m, a
    inx h

    mvi a, 0
    sbb m
    mov m, a
    inx h

    mvi a, 0
    sbb m
    mov m, a
    inx h

    mvi a, 0
    sbb m
    mov m, a
    ret

    ; Sets the Z flag based on the 32-bit number on the top of the stack.
    public cmpu4
    cseg
cmpu4:
    pop h
    pop b           ; low
    pop d           ; high

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

    ; Logical shift the value at the top of the stack left B bits.
    ; Corrupts A, B, HL, DE.
    public asl4
    cseg
asl4:
    pop h
    shld lsr4_ret

    pop h ; HL = low
    pop d ; DE = high
asl4_loop:
    dec b
    jm lsr4_exit

    dad h
    jnc asl4_skip
    inx d
asl4_skip:
    xchg
    dad h
    xchg

    jmp asl4_loop
asl4_exit:
    push d
    push h
asl4_ret = $ + 1
    jmp 0

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

    ; Arithmetic shift the value at the top of the stack right B bits.
    ; Corrupts A, B, HL, DE.
    public asr4
    cseg
asr4:
    pop h
    shld asr4_ret

    pop h ; HL = low
    pop d ; DE = high
asr4_loop:
    dec b
    jm asr4_exit
    mov a, h
    rla
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
    jmp asr4_loop
asr4_exit:
    push d
    push h
asr4_ret = $ + 1
    jmp 0

    ; Arithmetic shift A right B bits.
    ; Corrupts A, B and C.
    public asr1
    cseg
asr1:
    mov c, a        ; old copy of A
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

    ; Loads a 32-bit value at HL and pushes it.
    ; Corrupts BC, DE.
    public load4
    cseg
load4:
    mov e, m
    inx h
    mov d, m
    inx h
    mov c, m
    inx h
    mov b, m
    pop h
    push b
    push d
    pchl

    ; Pops a 32-bit value and stores it at HL.
    ; Corrupts BC, DE.
    public store4
    cseg
store4:
    pop d ; return address
    pop b ; low word
    xchg ; d = address, h = return address
    xthl ; d = address, b = low word, h = high word
    xchg ; d = high word, b = low word, h = address
    mov m, c
    inx h
    mov m, b
    inx h
    mov m, e
    inx h
    mov m, d
    ret

    dseg
block1: ds 4
block2: ds 4
block3: ds 4

; vim: sw=4 ts=4 et

