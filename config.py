import os


def enable_if(command):
    return os.system(f"command -v {command} > /dev/null") == 0


has_gccataritos = enable_if("m68k-atari-mint-as")
has_nasm = enable_if("nasm")
has_gcc386 = enable_if("i686-linux-gnu-as")
has_gcc68k = enable_if("m68k-linux-gnu-as")
has_gccthumb2 = enable_if("arm-linux-gnueabihf-as")
has_gccpowerpc = enable_if("powerpc-linux-gnu-as")
has_tass64 = enable_if("64tass")
has_qemuarm = enable_if("qemu-arm")
has_qemu386 = enable_if("qemu-i386")
has_qemuppc = enable_if("qemu-ppc")
has_qemu68k = enable_if("qemu-m68k")

has_ataritos = has_gccataritos
has_amigacpm = has_gccataritos
has_msdos = has_nasm
has_lx386 = has_gcc386
has_lxthumb2 = has_gccthumb2
has_lx68k = has_gcc68k
has_lxppc = has_gccpowerpc
has_bbct = has_tass64
has_bbctiny = has_tass64
has_bbct6502 = has_tass64
