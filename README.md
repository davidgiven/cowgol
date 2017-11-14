Cowgol
======


What?
-----

Cowgol is an experimental, Ada-inspired language for very small systems
(6502, Z80, etc). It's different because it's intended to be self-hosted on
these devices: the intention is that you can rebuild the entire compiler on
an 8-bit micro.

Right now it's in a state where you can build the cross-compiler on a PC,
then use it to compile the compiler for a 6502 device, and then use *that*
to (slowly) compile and run real programs on a 6502. It can't compile itself
yet --- there's not enough memory.

I'm currently targeting this at a BBC Micro with Tube second processor,
because that gives me a real operating system with file streams and 61kB
of usable RAM.

How?
----

So there's two main things here.

- `bootstrap/` contains the bootstrap compiler. It's a dodgy, buggy Lua
  script which translates Cowgol programs into C. You can then compile this
  using `gcc` and end up with a PC executable. x86 and amd64 only, I'm
  afraid: the generated code is full of misaligned accesses and it just won't
  work on an ARM.

- `src/` contains the real compiler. It's this massive, undocumented, eight-
  stage pipeline.

The tests proper are in `tests/cpu`. Some demo programs are in `demo`, and
some scripts for tying everything together are in `scripts`.

The system's in such an early stage so far that I'm not going to write much
more documentation than that, but the tl;dr set of instructions is:

    ninja

...will build the bootstrap compiler, run the tests, then build the BBC Tube
version. Now you can invoke the bootstrap compiler with:

    ./scripts/cowgol -a bbc -o cow.out src/arch/bbc/lib/runtime.cow test.cow

The first input file should be always be the runtime library.

The compiler works by having a shared state, `things.dat`, which is read into
memory by each stage, modified, and written out again on exit. Then there is
the opcode stream, `iops.dat`, which is streamed _through_ memory. Provided
you have enough RAM for the things table you should be able to compile
programs of unlimited size; you need 35kB for the things table to compile the
compiler. This will fit, just, so it's *theoretically* possible to build the
compiler on a BBC Tube, but it needs some other memory rearrangement before
it's worth trying. (And, realistically, making the code smaller and more
efficient.)


Testing on the BBC Micro
------------------------

### The demo floppy

As part of the build, `bin/bbcdist.adf` will be created. This is a ADFS-M
bootable floppy with the compiler on it. You can use this to play with the
system.

To use, fire up a BBC Micro with second processor. Enable the Tube. Mount the
disk. There'll be a file, `TestProg`. This is your source file. If you're on
a Master, you can edit this with the built-in editor, with `*edit testprog`.

Once you're done, save the file, and then do CTRL+SHIFT+BREAK. The compiler
will run, very very slowly, and generate you an executable called `cow/out`.
You can then run it with:

    *LOAD cow/out 800
    *GO 800

**Important note:** Cowgol binaries stomp all over the language workspace in
*zero page, and Basic can get pretty upset (including crashlooping). Before
*doing anything with it, you'll want to get Basic out of the way by doing:

    *GO F800

...to enter the Supervisor.

**A likewise important note:** For some unknown reason, when you `*RUN` a
*program on the Tube, it remembers where in memory it was and when you press
*BREAK the Tube OS will try to restart it. This doesn't work with the Cowgol
*compiler, and you'll end up rerunning random stages of the compiler and
*horrible things will happen. Use CTRL+BREAK instead.

**An even more important node:** Error handling behaviour is awful, as the
*manky little `*EXEC` script I wrote to run the compiler can't detect errors.
*Be handy with CTRL+SHIFT and the BREAK key.

### The VDFS symlink farm

In the `tools/vdfs` directory is a symlink farm pointing at the various
binaries and source files in the main distribution, with the relevant `.inf`
files set up for you. If you're using a BBC emulator such as
[b-em](https://github.com/stardot/b-em) or
[BeebEm](http://www.mkw.me.uk/beebem/) (and if you're on a Unix platform, of
course) then you can point your VDFS root here and you should have a live
setup just like the demo floppy, except much faster and with your changes
saved. And without the risk of running out of disk space!


Why not?
--------

So you've tried the demo disk!

...and you've discovered that the compiler takes eight minutes to compile
"Hello, world!". Does that answer your question?

There are a bunch of things that can be done to improve performance, but they
all need memory. This isn't free, so I'll need to make things smaller,
improve code sizes, make the generated code more efficient, etc.

But let's be honest; you're trying to compile a modern-ish language on a 2MHz
6502 with 64kB of RAM. It's not going to be fast.


License?
--------

Cowgol is available under the two-clause BSD license. Please see the COPYING
file for the full text.


Who?
----

Cowgol was written by me, David Given. You may contact me at dg@cowlark.com,
or visit my website at http://www.cowlark.com. There may or may not be
anything interesting there.
