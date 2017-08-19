COWGOL v0.0
===========

© 2017 David Given


What?
-----

Cowgol is an experimental, Ada-inspired language for very small systems
(6502, Z80, etc). It's different because it's intended to be self-hosted on
these devices: the intention is that you can rebuild the entire compiler on
an 8-bit micro.

It's really, really unfinished. Right now it's in a state where you can build
the compiler on a PC, and then use it to cross-compile a minimal 6502 program
which you can run (successfully) on a real machine.

Let me be clear:

THERE IS NOTHING USEFUL HERE YET.

So... moving on.


How?
----

So there's two main things here.

- `bootstrap/` contains the bootstrap compiler. It's a dodgy, buggy Lua
  script which translates Cowgol programs into C. You can then compile this
  using `gcc` and end up with a PC executable. x86 and amd64 only, I'm
  afraid: the generated code is full of misaligned accesses and it just won't
  work on an ARM.

- `src/` contains the real compiler. It's this massive, undocumented, seven-
  stage pipeline.

The system's in such an early stage so far that I'm not going to write any
more documentation than that, but the tl;dr set of instructions is:

    ninja

...will build the bootstrap compiler and run all the tests; then:

    bin/tokeniser test.cow
    bin/parser
    bin/typechecker
    mv iops-out.dat iops.dat
    bin/classifier
    bin/codegen
    mv iops-out.dat iops.dat
    bin/placer
    mv iops-out.dat iops.dat
    bin/emitter

(**Breaking news:** There's a script that will do this for you in
`scripts/cowgol`.) This will compile `test.cow` into `cow.out`. You can then
copy this to a BBC Micro, load it at 0x0E00, and then run it by jumping to
0x0E00.

The compiler works by having a shared state, `things.dat`, which is read into
memory by each stage, modified, and written out again on exit. Then there is
the opcode stream, `iops.dat`, which is streamed _through_ memory. Provided
you have enough RAM for the things table you should be able to compile
programs of unlimited size.

I have no idea whether this is feasible yet --- I'm targeting the 6502 to
begin with, and it's really wordy. If I compile the parser, which is one of
the bigger parts of the pipeline, then I end up (at the codegen stage, it
doesn't get any further than that) with a things table of about 20kB. So,
that _plus_ the binary both have to fit into memory. This is going to push it
on most systems. We'll see.


License?
--------

Cowgol is available under the two-clause BSD license. Please see the COPYING
file for the full text.


Who?
----

Cowgol was written by me, David Given. You may contact me at dg@cowlark.com,
or visit my website at http://www.cowlark.com. There may or may not be
anything interesting there.
