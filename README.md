Cowgol 2.0
==========


What?
-----

Cowgol is an experimental, Ada-inspired language for very small systems
(6502, Z80, etc). It's different because it's intended to be self-hosted on
these devices; the end goal is to be able to rebuild the entire compiler on
an 8-bit micro, although we're not there yet.

Here's the bullet point list of features:

  - a properly type safe, modern language inspired by Ada.

  - the compiler is written in itself and is fully bootstrapped.

  - a table-driven, easy to port backend (the 80386 backend is 1.2kloc with
    no other compiler changes needed).

  - tiny: the 80386 Linux compiler binary is 70kB (including ELF overhead)
    The 8080 CP/M compiler 58kB (split across two executables).

  - fast: on my PC it'll compile itself in ~~360ms~~ ~~130ms~~ 80ms.

  - global analysis: dead code removal and static variable allocation,
    leading to small and efficient binaries.

### About the compiler

Right now it's in a state where you can build the cross-compiler on a PC, then
use it to compile the compiler for your selected device, and if it's small
enough to fit use *that* to compile and run real programs. Realistically you'll
be cross-compiling on a PC.

The following targets are supported. Adding more is easy.

  - Z80 and 8080, on CP/M.

  - 6502 and 65c02, on the BBC Micro with Tube second processor.

  - 6303, on the 6303 version of Fuzix (if anyone knows about FLEX and wants to
    make this work, please get in touch).

  - 6502 interpreted bytecode, on the BBC Micro with Tube second processor;
    this works just like above, but produces a stack-based bytecode with
    integrated interpreter. It's much smaller, but also slower.

  - 80386, on Linux.

  - ARM Thumb2, on Linux.

  - PowerPC, on Linux.

  - 68000, on Atari ST TOS (although most of the system calls aren't hooked up
    yet so you can't do anything more than print stuff) and Linux m68k (if you
    can still find a machine which will run this).

  - 8086, on DOS (it emits small mode .exe files with 64kB of code and 64kB of data).

  - PDP11, on V7 Unix (thanks to
    [shattered@github](https://github.com/shattered) for contributing the PDP11
    backend for this).

  - Generic and terrible C. This produces very big and slow binaries which
    are used for bootstrapping the compiler if you don't have a Cowgol
    compiler.

  - Basic. Yes, really - there's a backend which will transpile into terrible
    Microsoft Basic. I wrote this mainly as a joke and only a subset of the
    language is supported, but it does work.

In addition, there's emulator and assembler support for these platforms, but no compiler:

  - the OBP spaceflight computer (used by, among other things, the OAO-3
    Copernicus orbiting observatory).

(It _used_ to [support the Apollo Guidance
Computer](http://cowlark.com/2019-07-20-cowgol-agc/index.html) used in the
Apollo spacecraft, but I had to remove the code generator while rewriting the
compiler and I haven't reworked the AGC backend.)

In terms of machines you can run the compiler _on_:

  - 80386 and ARM and PowerPC and 68000 Linux, duh.

  - A BBC Micro with Tube second processor. [Follow this link for a live
    in-browser
    demo](https://bbc.godbolt.org/?&model=MasterTurbo&disc1=https://cowlark.com/cowgol/bbct.ssd&disc2=https://cowlark.com/cowgol/bbctwork.ssd&rom=https://cowlark.com/cowgol/assembler.rom)
    courtesy of Matt Godbolt's excellent JSBeeb emulator: press SHIFT+F12
    (that's SHIFT+BREAK on a BBC Micro) to start the compiler, and when it's
    done type OUT to run the result. This is generating full 65c02 machine
    code.

  - Generic CP/M (both Z80 and 8080).

Many of the other platforms have unfinished system call libraries, so while the
compiler tests all pass and the compilers are being built, they won't work if
you run them. This should be easy to fix if necessary - let me know and ask (I
just haven't got round to it yet). Other platforms have working system call
libraries but Cowgol doesn't provide an assembler, so you need to source your
own (for example, MS-DOS and Atari ST TOS). So the compiler technically works
there; you just can't do anything useful with it.

### About the language

Here's a randomly chosen example pulled from the compiler source.

```
# Free up the node tree rooted in the parameter. This is more exciting than it
# should be because we don't have recursion.
#
# Editorial note: actually this subroutine no longer exists in the compiler
# source code because I replaced it with something simpler and better. No
# matter, the example still stands.
sub Discard(node: [Node]) is
        var pending := node;
        while pending != (0 as [Node]) loop
                node := pending;
                pending := node.dlink;

                # Unlink and push any children.
                if node.left != (0 as [Node]) then
                        node.left.dlink := pending;
                        pending := node.left;
                end if;
                if node.right != (0 as [Node]) then
                        node.right.dlink := pending;
                        pending := node.right;
                end if;

                # Now free this node.
                Free(node as [uint8]);
        end loop;
end sub;
```

The bullet list set of features is:

  - strongly typed - no implicit casting (not even between integers of
    different widths or signedness).

  - records, pointers, etc.

  - subroutines with multiple input and output arguments.

  - arbitrarily nested subroutines, with access to variables defined in an
    outer subroutine.

  - no recursion and limited stack use (most of the platforms I'm targeting
    don't really support stack frames).

  - byte, word, and quad arithmetic for efficient implementation on small
    systems.

  - simple type inference of variables if they're assigned during a
    declaration.

  - separate compilation with global analysis.

There's more about the language in the links below.



Why?
----

I've always been interested in compilers, and have had various other
compiler projects: [the Amsterdam Compiler Kit](http://tack.sourceforge.net)
and [Cowbel](http://cowlark.com/cowbel), to name two. (The
[languages](http://cowlark.com/index/languages.html) section of my website
contains a fair number of entries. The oldest compiler which still exists
dates from about 1998.)

Cowgol is based on what I've learnt from all this. It's supposed to be
_useful_, not just a toy. I'm pleasantly surprised by how good the generated
code is; not that it's anything up to that of, say, GCC, but the main code
generation binary of GCC is 23552kB, and Cowgol's is 65kB...



Where?
------

- [Check out the GitHub repository](http://github.com/davidgiven/cowgol) and
  build from source (Alternatively, you can download a source snapshot from
  [the latest release](https://github.com/davidgiven/cowgol/releases/latest),
  but I suggest the GitHub repository because I don't really intend to make
  formal releases often). [Build instructions are on their own
  page.](doc/building.md)

- [Ask a question by creating a GitHub
  issue](https://github.com/davidgiven/cowgol/issues/new), or just email me
  directly at [dg@cowlark.com](mailto:dg@cowlark.com) (But I'd prefer you
  opened an issue, so other people can see them).



How?
----

We have documentation! Admittedly, not much of it.

- [How to build and use the compiler](doc/building.md) - tl;dr: **read this**.

- [Everything you want to know about Cowgol, the language](doc/language.md) -
  tl;dr: very strongly typed; Ada-like syntax; multiple return parameters; no
  recursion; limited aliasing; nested functions.

- [An overview of Cowgol, the toolchain](doc/toolchain.md) - tl;dr: single-pass
  compiler frontend; global analyser and linker feeding into a third-party
  assembler; written in pure Cowgol.

- [Frequently Asked Questions](doc/faq.md) - tl;dr: random.



Why not?
--------

It's new, it's buggy, it's underdeveloped, and so far only one actual program
is written in Cowgol, which is the Cowgol compiler (And cowlink and cowwrap).

Apart from actual bugs, there are some unimplemented parts of the language.

  - no `null`. This one's semantic, but right now you have to cast `0` to
    pointer types to use `null` (I _do_ know about languages which don't have
    `null`, but they're all for larger machines than Cowgol's aimed at).

  - no debugging. Well... there's `print()`.

  - no stable standard library. I hack stuff in as I need it.

Your mileage (or kilometrage, depending) may vary. You Have Been Warned.



Who?
----

Cowgol was written mostly by me, David Given, with additional contributions
from [shattered@github](https://github.com/shattered). Feel free to contact me
by email at [dg@cowlark.com](mailto:dg@cowlark.com). You may also [like to
visit my website](http://cowlark.com); there may or may not be something
interesting there.



License?
--------

Cowgol is open source software available [under the 2-clause BSD
license](https://github.com/davidgiven/cowgol/blob/master/COPYING). Simplified
summary: do what you like with it, just don't claim you wrote it.

The exceptions are the contents of the `third_party` directory, which were
written by other people and are not covered by this license. This directory as
a whole contains GPL software, which means that if you redistribute the entire
directory, you must conform to the terms of the GPL.

`third_party/lib6502` contains a hacked copy of the lib6502 library, which is ©
2005 Ian Plumarta and is available under the terms of the MIT license. See
`third_party/lib6502/COPYING.lib6502` for the full text.

`third_party/zmac` contains a copy of the venerable zmac 8080 and Z80
assembler. It's in the public domain.

`third_party/lemon` contains a copy of the lemon parser generator. It's in the
public domain.

`third_party/apout` contains a copy of the apout PDP-11 SysV binary emulator,
primarily written by Warren Toomey and Eric A. Edwards. It is distributed under
the terms of the MIT license; see `third_party/apout/COPYRIGHT` for the full
text.

`third_party/rc2014emu` contains a subset of the RC2014 emulator written by
Alan Cox. It is distributed under the terms of the GPL 3.0 license; see
`third_party/rc2014emu/COPYING` for the full text.

`third_party/emu2` contains a copy of the emu2 DOS emulator written by
[dmsc@github](https://github.com/dmsc) (and others). It is distributed under
the terms of the GPL 2.0 license; see `third_party/emu2/LICENSE` for the full
text.

`third_party/djlink` contains a copy of the djlink 16-bit linker written by
[dj@delorie.com](https://delorie.com). It is distributed under the terms of
the GPL 2.0 license; see `third_party/djlink/copying` for the full text, with
additional grants described in `third_party/djlink/copying.dj`.

`third_party/musashi` contains a copy of the Musashi 68000 emulation library,
written by Karl Stenerud. It is distributable under the terms of the MIT
license; see `third_party/musashi/readme.txt` for the full text. It also in
turn contains a copy of John R. Hauser's softfloat library, distributable under
a custom but MIT-like license; see `third_party/musashi/softfloat/README.txt`
for the text.
