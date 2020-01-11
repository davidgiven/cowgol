# System call numbers are here:
# https://w3challs.com/syscalls/?arch=arm_thumb

.arch i386
.code32
.intel_syntax
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

    mov %eax, [%esp+4]
    mov _argv, %eax
    call cmain
    mov %eax, 1
    int 0x80

.bss
.global _argv
_argv:
    .space 4
.global _top, _himem
_top:
    .space 64*1024
_himem:
