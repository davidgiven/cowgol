# System call numbers are here:
# https://w3challs.com/syscalls/?arch=arm_thumb

.arch i386
.code32
.global _start
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
    mov $1, %eax
    int $0x80

.bss
.global _argv
_argv:
    .space 4
.global _top, _himem
_top:
    .space 64*1024
_himem:
