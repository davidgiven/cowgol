This is just a few simple notes on using the AGC version of the compiler. You
don't need any other bits of Cowgol --- tinycowc is completely standalone.

To build:

    $ make

You need ninja, flex and bison (Posix yacc probably won't work). There's a
bug in the dependency tree so that the first time you build it you have to do
`mkdir .obj && touch .obj/parser.h`.

To use:

    $ ./tinycowc lunarlander.agc

This will emit `cow.data.agc` and `cow.code.agc`. Now, use yaYUL to assemble
the `cowgol.agc` file, which includes the other two files. You'll end up with
a (hopefully) runnable `cowgol.agc.bin` file which you can load into
VirtualAGC.
