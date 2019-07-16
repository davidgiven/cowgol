This is just a few simple notes on using the compiler. You don't need any
other bits of Cowgol --- tinycowc is completely standalone.

To build:

    $ make

You need ninja, flex and bison (Posix yacc probably won't work).

To use:

    $ ./tinycowc < inputfile.cow > outputfile.asm

To turn the result into a CP/M executable, you need zmac.

    $ zmac -8 test.asm -o test.cim
    $ mv test.cim test.com

Then get it onto your favourite CP/M system and it should run.
