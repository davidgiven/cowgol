See the main documentation for actual documentation, but if you've just TYPEd
this in the emulator, the survival guide is:

Drive A: work disk
Drive B: the Cowgol compiler binaries and standard library

To compile something, edit TESTPROG.COW with ED, and then do:

    SUBMIT COMPILE

If it completes successfully --- it won't stop if an error occurs, it'll
just make junk --- you can run the resulting binary with:

    COW



