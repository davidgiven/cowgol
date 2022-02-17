Building and using the compiler
===============================

Building it
-----------

To build, you'll need a Unixish machine (I develop on Linux) with some
dependencies.

  - the Ninja build tool

  - Lua 5.1 (needed for the build)

  - the Pasmo Z80 assembler (needed to build part of the CP/M emulator)

  - the 64tass 6502 assembler (needed to build the 6502 code)

  - the libz80ex Z80 emulation library (needed for the CP/M emulator)
  
  - flex and bison and libbsd and libreadline (these are standard)

  - a C compiler and these GNU binutils packages:

    - i686-linux-gnu
	- arm-linux-gnueabihf
	- m68k-linux-gnu
	- m68k-atari-mint
	  Packages are available from http://vincent.riviere.free.fr/soft/m68k-atari-mint
	- powerpc-linux-gnu

  - the nasm ix86 assembler

  - the qemu userspace emulator

  - the gpp preprocessor

If you're on a Debianish platform, you should be able to install them (after
adding any custom package sources as above) with:

    apt install ninja-build lua5.1 pasmo libz80ex-dev flex libbsd-dev libreadline-dev bison binutils-arm-linux-gnueabihf binutils-i686-linux-gnu binutils-powerpc-linux-gnu binutils-m68k-linux-gnu binutils-m68k-atari-mint qemu-user gpp 64tass nasm

Once done you can build the compiler itself with:


```
make
```

You'll be left with a lot of stuff in the `bin` directory. The tools are all
labeled as (name).(toolchain).(extension); however, several extensions also
contain a dot.  So, `cowfe-65c02.ncpmz.z80.com` is cowfe, the main front-end
compiler, targeting the 65c02, built with the `ncpmz` toolchain, which produced
a `z80.com` executable.



Toolchains
----------

The build process tries to build all the combinations of source (the toolchain
used to build the compiler) and target (the machine the compiler is compiling
for). 

Cowgol defines these toolchains:

  - `bootstrap`: this is the compiler shipped in C with the distribution.
    It's only used to build the first stage compiler.

  - `ncgen`: targeting C, built with the bootstrap compiler.

  - `nncgen`: targeting C, built with `ncgen`.

  - `lx386`: targeting Linux 80386 binaries, built with `nncgen`.

  - `cpm`: targeting CP/M 8080 binaries, built with `nncgen`.

  - `cpmz`: targeting CP/M Z80 binaries, built with `nncgen`.

  - `bbct`: targeting BBC Tube 65c02 binaries, built with `nncgen`.

  - `bbcti`: targeting BBC Tube 6502 bytecode binaries, built with `nncgen`.

  - `bbct6502`: targeting BBC Tube 6502 binaries, built with `nncgen`.

`ncgen` and `nncgen` should behave identically. The compiler is built with
itself to make sure that `nncgen` was built with a compiler built from the
current compiler source, which is invaluable for testing. On a PC when you're
cross-compiling you'll most likely want to be using the `nncgen` binaries (with
the `nncgen.exe` extension).

To run the cross compiler to generate a Linux 80386 binary, do:

```
$ bin/cowfe-80386.nncgen.exe -Irt/ -Irt/lx386/ examples/helloworld.cow helloworld.cob
$ bin/cowbe-80386.nncgen.exe helloworld.cob helloworld.coo
$ bin/cowlink-lx386.nncgen.exe .obj/rt/lx386/cowgol.coo helloworld.coo -o helloworld.s
$ i686-linux-gnu-as helloworld.s -o helloworld.o
$ i686-linux-gnu-ld helloworld.o -o helloworld
$ ./helloworld
Hello, world!
```

If you're on a system which can run Linux i686 binaries, this will work too:

```
$ bin/cowfe-80386.lx386.lx386.exe -Irt/ -Irt/lx386/ examples/helloworld.cow helloworld.cob
$ bin/cowbe-80386.lx386.lx386.exe helloworld.cob helloworld.coo
$ bin/cowlink-lx386.lx386.lx386.exe .obj/rt/lx386/cowgol.coo helloworld.coo -o helloworld.s
$ i686-linux-gnu-as helloworld.s -o helloworld.o
$ i686-linux-gnu-ld helloworld.o -o helloworld
$ ./helloworld
Hello, world!
```

cowfe and cowbe
---------------

The compiler is split into two binaries, for the front end (cowfe) and the back
end (cowbe). cowfe parses the Cowgol language, does type checking, generates
the AST, determines variable and record sizes, etc. It emits a temporary file,
the `.cob` file. cowbe then takes this temporary file and generates actual
machine code, emitting a `.coo` file.

The `.cob` file is an implementation detail of the compiler and can be
completely ignored. Don't try to use mismatched cowfe and cowbe binaries ---
weird things will happen. If you're interested, you can see the contents using
the `cowbdmp` tool, but that's primarily intended for my debugging, so it's not
very user friendly.


Cowwrap and cowlink
-------------------

The general build process is:

  - cowfe and cowbe compile `.cow` files into `.coo` files.

  - cowwrap compiles `.cos` 'assembly' files into `.coo` files.

  - cowlink links together multiple `.coo` files, performs the global
	optimisation, and emits an 'assembly' file.

  - the 'assembly' file is 'assembled' with your native toolchain into an
	executable.

'Assembly' is in quotation marks because it's not necessarily actual assembly.
The `cgen` target actually emits C. This is treated just like any other
assembly language, with cowlink emitting a (hideous and very large) C file,
which is then compiled with, typically, gcc.

Cowlink is the tool which scans the `.coo` files, determines which subroutines
are used, places their variable storage in memory, and converts them into a
plain text file.

`.coo` files themselves are a chunked format containing both 'assembly' source
and binary markup. They're not considered readable or writeable by humans,
although at a pinch you can look at them in a text editor. Because they're not
writeable, cowwrap is a tool for converting annotated text files into `.coo`
files. If you look in `rt/*/cowgol.cos` you can see the runtime library for the
various platforms. The format's not documented yet, sorry.

