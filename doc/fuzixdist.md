Cowgol Fuzix Z80 distribution
=============================

The `fuzixdist.tar` file is a binary distribution intended to demonstrate
Cowgol on Z80 Fuzix systems. It needs a platform supporting the Normal™ Z80
ABI; e.g. z80pack, but not the ZX Spectrum. It also needs at least 48kB of
userspace, which means the TRS80 model 4P need not apply. It's not really
intended for use for daily development, because it's really slow and full of
holes.

Instructions
------------

Ensure the tarfile is decompressed, by unzipping it on your host machine.

    $ gunzip fuzixdist.tar.gz

Copy it into your Fuzix filesystem. You'll want to use ucp for this.

    $ ucp $DISK "get fuzixdist.tar"

Set `$DISK` to point at your emulator's disk image (or a real disk device if
you're so lucky).

Now boot Fuzix. At the shell, expand the archive:

    # tar -x < fuzixdist.tar

This will install Cowgol in `/opt/packages/cowgol`.

**Note**: Fuzix' tar has a bug in it where overwritten files aren't truncated
*properly. So, weird things can happen if you reinstall Cowgol on top of a
*previous system. I recommend you delete all of `/opt/packages/cowgol` first.

Next, create a test file and invoke the compiler.

    # cd /tmp
    # echo 'print("Hello, world!\n");' > test.cow
    # /opt/packages/cowgol/bin/cowgol test.cow

After a short pause and quite a lot of tracing (if you're on an emulator) or
a very long pause and quite a lot of tracing (if you're on real hardware),
the compilation will end. You'll have a file called `cow.out` in the current
directory, which you can run.

    # chmod a+rx cow.out
    # ./cow.out
    Hello, world!
    #

Libraries
---------

The Cowgol standard libraries (hollow laughter) are installed into
`/opt/packages/cowgol/share`. If you want to use any of them, add them (to
the beginning!) of the list of source files when invoking the `cowgol`
script. No, they're not documented yet.

Known issues
------------

There are many, of which this is a non-exhaustive list.

  - it's dead slow. There are several reasons, but the biggest of which is
    that Cowgol is a whole-program compiler and every time you invoke it it
    has to recompile the standard libraries. It's possible to partially
    precompile these, which will help, but this isn't implemented yet for
    Fuzix.

  - the standard library itself is a bit of a disaster; most of the Fuzix
    system calls have been crudely hacked in (so you can actually write and
    run real, useful programs) but there's a lot of them and loading them all
    every time is a disaster, space-wise. (Nearly 5kB of things and 1kB of
    strings.) This all needs rethinking.

  - there are many Fuzix shell scripting bugs, which means the driver script
    doesn't always detect errors properly.

  - you can't build Cowgol itself on Fuzix --- there just isn't enough RAM
    available. Although it's marginal; with a small syscall library and a few
    basic optimisations, it may be possible.

  - code generation bugs. Haven't run into one for a while, doesn't mean
    they're not still out there somewhere...
