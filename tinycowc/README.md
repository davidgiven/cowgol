This is just a few simple notes on using the compiler prototype. You don't
need any other bits of Cowgol --- tinycowc is completely standalone.

To build:

    $ make

You need ninja, flex and bison (Posix yacc probably won't work).

## Apollo Guidance Computer

To use:

    $ ./tinycowc-agc lunarlander.cow

This will emit `cow.data.agc` and `cow.code.agc`. Now, use yaYUL to assemble
the `cowgol.agc` file, which includes the other two files. You'll end up with
a (hopefully) runnable `cowgol.agc.bin` file which you can load into
VirtualAGC.

## 8080

To use:

    $ ./tinycowc-8080 (some program which isn't the lunar lander).cow > output.asm

To turn the result into a CP/M executable, you need zmac.

    $ zmac -8 output.asm -o test.cim
    $ mv test.cim test.com

Then get it onto your favourite CP/M system and it should run.
