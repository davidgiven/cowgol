OPBEMU
======

This is a simple emulator for the OBP computer, used in a variety of spacecraft
including the OAO-3 Copernicus orbiting telescope. It's a two's-complement
18-bit word Von Neumann architecture with 50-ish instructions and a
surprisingly easy-to-use, orthogonal instruction set. It supports up to 64kw of
RAM, divided into 4kw pages, and has hardware multiply and divide, simple
memory protection, rich IO including DMA channels, and ran at 250kHz (!).

This tool is a hardware-less non-cycle-accurate simulator which attempts to
model most of the ISA side of things, including interrupts. It's based on these
documents:

  - [Support Software For The Space Electronics Branch On-Board Processor,
	1968](https://cdn.hackaday.io/files/1804677721100128/OAO-3_Instruction_set.pdf)
  - [Advanced On-Board Processor,
	1973](https://ntrs.nasa.gov/api/citations/19740002071/downloads/19740002071.pdf)

The first document describes the OBP, but is rather incomplete, so I've filled
in the gaps from the second document, which describes the OBP's successor, the
AOP. The missing bits are:

  - encoding of the NEG instruction (the encoding's just missing from the OBP
	document)
  - description and encoding of the SUB instruction (this instruction is
	missing completely from the OBP document, but there's a hole in the
	instruction set, so I copied the instruction from the AOP)
  - description of the interrupt description block (I'm assuming the OBP works
	the same as the AOP)

The OBP document describes a diagnostics suite which could be used to verify my
interpretation, but I've no idea where to find it. I've written my own,
`testsuite.asm`. It's not complete.

There's a simple assembler, too, as part of the cowasm tool (written in Cowgol;
build the rest of the compiler suite to get it). This supports constant pools
which makes writing code vastly easier but only really supports the first
4096-word page of memory.

I/O device 0 is the console, allowing the simulated machine to read and write
bytes via the IO instruction. This only works with modes 3 and 4, so there's no
DMA.

The simulator, along with the rest of Cowgol, is 2-clause BSD licensed. See
COPYING in the root directory for the full text.

To build: simply compile and link together the two C files. It should be
standard Posix C.

To use: invoke it with `obpemu [-d] <imagefile>`. `-d` enters the debugger on
startup. The image file should be a memory image, starting at 0, with each
18-bit word encoded as three 8-bit bytes, little-endian order.

David Given
dg@cowlark.com
2021-07-03
