.syntax unified
.global _start
.code 32
_start:
	ldr sp, =stack_top
	ldr r0, =cmain
	blx r0
	mov r0, #0
	mov r7, #1 /* __exit() */
	svc #0

.bss
	.align 4
	.ds 4096
stack_top:

