# System call numbers are here:
# https://w3challs.com/syscalls/?arch=arm_thumb

.arch i386
.code32
.global _start
.global _exit
_start:
	/* On entry, the stack looks like this:
	 *
     * sp+... NULL
	 * ...
     * sp+8   argv[1]
     * sp+4   argv[0]
     * sp     argc
	 */

    lea 4(%esp), %eax
    mov %eax, (_argv)
    call cmain
_exit:
    mov $1, %eax
	xor %ebx, %ebx
    int $0x80

.bss
.global _argv
_argv:
    .space 4
.global _lomem, _himem
_lomem:
    .space 1024*1024
_himem:
