.syntax unified
.global _start
.code 32
_start:
	/* On entry, the stack looks like this:
	 *
     * sp+... NULL
	 * ...
     * sp+8   argv[1]
     * sp+4   argv[0]
     * sp     argc
	 */

	ldr r0, =_thumb_start
	bx r0

.global _exit
.thumb_func
_thumb_start:
	add r1, sp, #4
	ldr r0, =_argv
	str r1, [r0]

	bl cmain
_exit:
	mov r0, #0
	mov r7, #1 /* __exit() */
	svc #0

.bss
.align 4
.global _argv
_argv:
	.space 4
.global _lomem, _himem
_lomem:
	.space 1024*1024
_himem:

.code 16

