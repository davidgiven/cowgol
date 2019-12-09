This is just a few simple notes on using the compiler prototype. You don't
need any other bits of Cowgol --- tinycowc is completely standalone.

To build:

    $ make

You need ninja, flex, lemon, pasmo and zmac.

## Apollo Guidance Computer

To use:

    $ ./tinycowc-agc lunarlander.cow

This will emit `cow.data.agc` and `cow.code.agc`. Now, use yaYUL to assemble
the `rt/agc/cowgol.agc` file, which includes the other two files. You'll end
up with a (hopefully) runnable `cowgol.agc.bin` file which you can load into
VirtualAGC.

## C backend

This generates C code which can then be compiled into an executable with
a C compiler. It's intended for testing and bootstrapping. It's kinda hacky
and right now probably only works on 64-bit architectures (because it assumes
that pointers are eight bytes long).

To use:

    $ ./build-c.sh examples/helloworld.cow

This will produce an executable called `cowgol`.

## 8080

To use:

    $ ./build-cpm.sh examples/helloworld.cow

This uses tinycowc-8080, zmac and ld80 to compile the program and the
(incredibly small) runtime library, and will emit a `cowgol.com` file which
you can run on your favourite CP/M system.
