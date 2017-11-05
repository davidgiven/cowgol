About the Cowgol toolchain
==========================

Cowgol is both a compiler toolchain, and a programming language. This page
shortly describes the toolchain.

## Introduction

Cowgol's a pretty vanilla compiler in the modern style, with the usual
compiler passes (plus some extra). There's a shared state between all the
passes known as the *things table* which is held in RAM, and the actual
instructions (known as iops) are streamed through each pass via files. It
does a lot of file access, but it means that if you have enough memory to
hold the things table, you can compile unlimited sized programs.

Right now the most complex program built with Cowgol is the code generator
itself, which needs a things table of about 35kB.

There's also a strings table, which contains any constant data referred to by
the program. These are accessed as needed so they don't have to be held in
memory.

The front end uses a stack machine representation, while the backend uses a
memory machine representation.

## The passes

These are, in order:

- **the initialiser**: creates a new, empty program, ready for adding
tokenised and parsed code to. Normally this is only used for precompiling the
runtime library. In normal use, you would simply take a copy of the data
files for the runtime library and add your own code to that, so as to save
time (the runtime library is big and takes about eight minutes to tokenise
and parse).

- **the tokeniser**: reads the source files and produces a token stream and the string table.

- **the parser**: reads the token stream and parses the Cowgol language out of it. It generates an iop stream containing stack-based front end opcodes.

- **the typechecker**: reads in the iops stream containing the front end
opcodes and does type analysis and reporting of errors; it also looks up
symbolic names which the parser was unable to resolve (so allowing forward
references). In addition, it concerts the stack-based front-end opcodes into
memory-machine back-end opcodes used by the code generator. This last stage
doesn't really belong here and needs to be split out into a separate pass.

- **the blockifier**: this will, eventually, do some simple basic block
analysis and dead code removal. What it does now is to rewrite label
references based on directives produced by the parser.

- **the classifier**: constructs the call graph and determines which
subroutines and variables are referred to. Once it knows which variables are
used, it assigns them to addresses in the data segment (and in zero page on
the 6502).

- **the code generator**: turns the memory-machine opcodes into real
processor opcodes.

- **the placer**: now that the actual code has been generated, we know how
big each subroutine is. The placer assigns them addresses in the code
segment.

- **the emitter**: assembles all the segments and writes out the executable
image.

There's platform-specific code in every pass except the tokeniser, the parser
and the blockifier. The BBC Micro version is in
[src/arch/bbc](https://github.com/davidgiven/cowgol/tree/master/src/arch/bbc).
(This needs a refactor.)

** The backend model

The backend uses a memory machine abstraction, where every instruction reads
from memory and writes to memory. The code generator then caches values in
memory in registers. This leads to pretty crummy register utilisation, but
it's very very cheap.

Given an abstract instruction like:

```
a := b + c
```

...then `a`, `b` and `c` are all memory references, referred to as an
effective address (EA). Each one may be an LEA, VALUE or DEREF, expressed as:

- LEA: address of an object. `object+numoffset+varoffset`
- VALUE: value of an object. `[object+numoffset+varoffset]`
- DEREF: value pointed to by an object. `[[object]+numoffset+varoffset]`

`numoffset` refers to a constant offset; `varoffset` refers to an offset in a
variable. Either or both may be missing.

EAs are typed, and the backend tracks their types. (Although this may be
removed as the only thing it really cares about are the widths.) Constant
values are held in memory and referred to by address (the code generator may
optimise the fetch away if it wants to).

The typechecker generates abstract code, and then there's a platform-specific simplification pass which chops instructions up into pieces which the architecture can understand. So:

```
[i] := [[array] + offset]  # generated from i := array[offset]
```

...becomes:

```
[tmp] := array             # 16 bit load constant
[tmp] := [tmp] + [offset]  # 16 bit add
[i] := [[tmp]]             # load value via pointer deref
```

Sadly, this leads to a lot of repeated work and pretty poor generated code
(if `[[array] + offset]` is referred to again, we should be able to avoid
recalculating `tmp`). I'm thinking of ways to avoid this. Factoring the
simplification phase into its own pass will be necessary to improve things
here.

## Porting to a new architecture

Cowgol's intended to be portable, although it probably isn't. It certainly
won't work on big-endian architectures --- this may be fixable, but I've
deliberately avoided thinking about this for simplicity.

All the platform-specific code should be in
[src/arch](https://github.com/davidgiven/cowgol/tree/master/src/arch).
The most complicated part is the code generator. Currently the 6502 code
generator is a bit of a mess and needs a proper overhaul. It uses a very
simple value cache where it tries to remember which 8-bit values are stored in
which register, and flushes them to memory lazily. It's important to remember
that you need to flush the cache whenever doing a pointer access to maintain
pointer aliasing rules. There's no attempt to track values between basic
blocks (because it's really hard); the cache is flushed and values reloaded
from memory as needed. 16-bit and 32-bit values aren't cached at all and are
worked on directly in memory.

This is a reasonable strategy for the very register-light old architectures,
but would be very wasteful (although simple!) on a register-centric
architecture like the ARM. You'll want to rewrite the code generator from
scratch. The 6502 one is about 1.7kloc.

You also need a simplifier, which breaks down complex backend instructions.
This is much smaller, but pretty subtle, and I spent ages removing bugs from
the 6502 one (and probably adding new ones). If you're on a register
architecture, life may be easier as there are fewer address modes to deal
with.
