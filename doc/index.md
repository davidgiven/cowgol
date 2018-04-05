Cowgol
======


What?
-----

Cowgol is an experimental, Ada-inspired language for very small systems
(6502, Z80, etc). It's different because it's intended to be self-hosted on
these devices: the end goal is to be able to rebuild the entire compiler on
an 8-bit micro.

Right now it's in a state where you can build the cross-compiler on a PC,
then use it to compile the compiler for a 6502 (or Z80) device, and then use
*that* to (slowly) compile and run real programs on a 6502 (or Z80). It's
theoretically capable of compiling itself but need memory tuning first. (And,
realistically, bugfixing.)

The compiler itself will run on these architectures (as well as
cross-compiling from a modern PC in a fraction of the time):

  - 6502, on a BBC Micro with Tube second processor; this is the only
    platform I've found which is big enough (as it gives me a real operating
    system with file streams and 61kB of usable RAM). (The distribution
    contains a simple emulator.)

  - Z80, on CP/M. (The distribution contains a simple emulator.)

It will also cross compile for:

  - 6502, on the Commodore 64 (for ultra hackers only; email me).

(Just for fun we also build cross compilers which will let you build for the
BBC Micro from CP/M, and vice versa.)


Why?
----

I've always been interested in compilers, and have had various other
compiler projects: [the Amsterdam Compiler Kit](http://tack.sourceforge.net/)
and [Cowbel](http://cowlark.com/cowbel/), to name two. (The
[languages](http://cowlark.com/index/languages.html) section of my website
contains a fair number of entries. The oldest compiler which still exists
dates from about 1998.)

Cowgol is a spinoff of the Amsterdam Compiler Kit --- thematically, although
it shares no code. By dividing the task into many small, discrete units, it
gets to do (if slowly) a job which machines this size shouldn't really be
able to do. In many ways it's an exercise in minimalism, just like Cowbel,
although in a different direction.


Where?
------

- [Get the latest
release](https://github.com/davidgiven/cowgol/releases/latest) if you want
precompled binaries! Currently only available for the BBC Micro. Don't forget
to [read the instructions](bbcdist.html).

- [Check out the GitHub repository](http://github.com/davidgiven/cowgol) and
build from source. (Alternatively, you can download a source snapshot from
[the latest release](https://github.com/davidgiven/cowgol/releases/latest),
but I suggect the GitHub repositories better because I don't really intend to
make formal releases often.) Build instructions as in the README.

- [Ask a question by creating a GitHub
issue](https://github.com/davidgiven/cowgol/issues/new), or just email me
directly at [dg@cowlark.com](mailto:dg@cowlark.com). (But I'd prefer you
opened an issue, so other people can see them.)


How?
----

We have documentation! Admittedly, not much of it.

- [Everything you want to know about Cowgol, the language](language.html);
tl;dr: very strongly typed; Ada-like syntax; multiple return parameters; no
recursion; nested functions.

- [An overview of Cowgol, the toolchain](toolchain.html); tl;dr: eight-stage
compiler pipeline; separate front-end and back-end; maximum RAM use: about
60kB; call graph analysis for efficient variable packing; suitable for other
languages; written in pure Cowgol.

- [About the BBC Micro bootable floppy](bbcdist.html); tl;dr: crude, slow,
not suitable for production use; requires a BBC Micro with 6502 Tube second
processor although I recommend a BBC Master Turbo (mainly for the built-in
editor); requires extreme patience as it takes eight minutes to compile a
small program.

You will need some dependencies:

  - the Ninja build tool

  - Lua 5.2 (needed for the build)

  - the Pasmo Z80 assembler (needed to build part of the CP/M emulator)

  - the libz80ex Z80 emulation library (needed for the CP/M emulator)

If you're on a Debianish platform, you should be able to install them
with:

    apt install ninja-build lua5.2 pasmo libz80ex-dev

Once done you can build the compiler itself with:


```
ninja
```

You'll be left with a lot of stuff in the `bin` directory. The BBC cross
compiler is in `bin/bbc_on_native`; the BBC native compiler is in `bin/bbc`.
The BBC demo disk is in `bin/bbcdist.adf`. Likewise, the CP/M cross compiler is
in `bin/cpmz_on_native` and the native compiler is in `bin/cpmz`.

To run the cross compiler, do:

```
./scripts/cowgol -a bbc_on_native -o cow.out \
    src/arch/bbc/lib/runtime.cow \
    src/arch/6502/lib/runtime.cow \
    src/arch/common/lib/runtime.cow \
    srctest.cow
```

You'll be left with a BBC Micro executable in `cow.out`. For the Commodore
64, substitute `c64_on_native` and `src/arch/c64/...` in the obvious places.
For CP/M, substitute `cpmz_on_native`, `src/arch/cpmz/...`, and
`src/arch/z80/...` in the obvious places.

The first three input files should be always be the runtime library.

The compiler works by having a shared state, `things.dat`, which is read into
memory by each stage, modified, and written out again on exit. Then there is
the opcode stream, `iops.dat`, which is streamed through memory. Provided you
have enough RAM for the things table you should be able to compile programs
of unlimited size; you need 35kB for the things table to compile the
compiler. This will fit, just, so it's theoretically possible to build the
compiler on a BBC Tube, but it needs some other memory rearrangement before
it's worth trying. (And, realistically, making the code smaller and more
efficient.)

**Special emulation bonus!** Are on a Unix platform? Do you have
*[b-em](https://github.com/stardot/b-em) or
[BeebEm](http://www.mkw.me.uk/beebem/)? If so, there's a farm of symlinks on
`tools/vdfs` which point at all the appropriate binaries and source files in
the main ditribution, with `.inf` files already set of for you. You can point
your VDFS root here and you should have a live setup just like the demo
floppy, except much faster and with your changes saved. And without the risk
of running out of disk space! Just remember to set your machine type to a BBC
Master Turbo, and then crank the emulation speed for both the main computer
and the Tube processor as high as they will go.

**Even specialler emulation bonus!** There's a _built in_ emulator for CP/M
*which will let you run Cowgol for CP/M out of the box using the farm of
*symlinks in `tools/cpm`! After building Cowgol, do this:

    $ bin/cpm -p a=tools/cpm/a -p b=tools/cpm/b/
    a> submit compile

...and watch the fun! (If you get this running on real hardware, please let
me know. I want to know how long it takes.)


Why not?
--------

So you've tried the demo disk!

...and you've discovered that the compiler takes seven minutes to compile
"Hello, world!". Does that answer your question?

There are a bunch of things that can be done to improve performance, but they
all need memory. This isn't free, so I'll need to make things smaller,
improve code sizes, make the generated code more efficient, etc.

But let's be honest; you're trying to compile a modern-ish language on a
2-4MHz device with 64kB of RAM. It's not going to be fast.


Who?
----

Cowgol was written, entirely so far, by me, David Given. Feel free to send me
email at [dg@cowlark.com](mailto:dg@cowlark.com). You may also [like to visit
my website](http://cowlark.com); there may or may not be something
interesting there.


License?
--------

Cowgol is open source software available [under the 2-clause BSD
license](https://github.com/davidgiven/cowgol/blob/master/COPYING).
Simplified summary: do what you like with it, just don't claim you wrote it.

`src/bbctube` contains a hacked copy of the lib6502 library, which is © 2005
Ian Plumarta. See `emu/bbctube/COPYING.lib6502` for the full text.

`tools/cpm/a` contains some tools from the original CP/M 2.2 binary
distribution for the Imsai 1800, redistributable under a special license. See
`tools/cpm/a/!readme.txt` for the full text.
