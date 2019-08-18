    extrn cmain

    ; CP/M entry point at 0x100.

    lxi sp, stackend
    call cmain
    rst 0


    public putchar
putchar:
    pop b
    pop psw
    push b

    mov e, a
    mvi c, 2
    jmp 5

    dseg
stack:
    ds 128
stackend:
