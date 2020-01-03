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
	.space 4096
stack_top:

.global _top, _himem
_top:
	.space 64*1024
_himem:

