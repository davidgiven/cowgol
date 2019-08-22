    extrn cmain

    ; CP/M entry point at 0x100.

    lxi sp, stackend
    call cmain
    rst 0
    dseg
stack:
    ds 128
stackend:


    public putchar
    cseg
putchar:
    pop b
    pop psw
    push b

    mov e, a
    mvi c, 2
    jmp 5

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

    dseg
t1: dw 0
t2: dw 0
