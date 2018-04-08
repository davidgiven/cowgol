Cowgol CP/M Z80 distribution
============================

The `cpmdist.zip` file is a binary distribution intended to demonstrate
Cowgol on Z80 CP/M systems. It needs a platform with a Z80 and at least 50kB
of TPA. (Cowgol can be compiled for smaller. Email me.)

Installation
------------

There's nothing standard about CP/M, so I'm not even going to try to make
turnkey instructions.

The zipfile contains two directories, `a` and `b`. These are intended to go
on floppies A: and B: respectively, with B: containing the Cowgol binaries
and source and A: being a work disk. Copy the contents onto the disks of your
choice using your favourite CP/M disk copying tool: sorry, I can't advise on
this.

Once done, boot your system. Now do `SUBMIT COMPILE` and, hopefully, the
compiler will run, compiling the `TESTPROG.COW` source file, and leave you a
runnable binary called `COW.COM`.

Known issues
------------

There are many, of which this is a non-exhaustive list.

  - it's dead slow. There are several reasons, but the biggest of which is
    that Cowgol is a whole-program compiler and every time you invoke it it
    has to recompile the standard libraries. It's possible to partially
    precompile these, which will help, but this isn't implemented yet for
    CP/M.

  - standard libraries --- there aren't really many for CP/M. You get console
    printing and file access, and that's really it. Anything else you'll have
    to bind yourself. Sorry.

  - the compiler script --- CP/M 2.2 can't detect errors (Cowgol does try to
    set the exit status properly, though). So it'll just barrel on if
    something goes wrong. Any suggestions? Email me.

  - code generation bugs. Haven't run into one for a while, doesn't mean
    they're not still out there somewhere...
