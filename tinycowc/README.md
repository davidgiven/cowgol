This is just a few simple notes on using the compiler prototype. You don't
need any other bits of Cowgol --- tinycowc is completely standalone.

To build:

    $ make

You need ninja, flex and bison (Posix yacc probably won't work).

## Apollo Guidance Computer

To use:

    $ ./tinycowc-agc lunarlander.cow

This will emit `cow.data.agc` and `cow.code.agc`. Now, use yaYUL to assemble
the `rt/agc/cowgol.agc` file, which includes the other two files. You'll end
up with a (hopefully) runnable `cowgol.agc.bin` file which you can load into
VirtualAGC.

## 8080

To use:

    $ ./build-cpm.sh examples/helloworld.cow

This uses tinycowc-8080, zmac and ld80 to compile the program and the
(incredibly small) runtime library, and will emit a `cowgol.com` file which
you can run on your favourite CP/M system.
