Cowgol BBC bootable floppy
==========================

The BBC floppy disk image is a test setup intended to demonstrate Cowgol and
provide me something to test. It's not really intended for use for daily
development, because it's really slow.

Instructions
------------

You need:

- A BBC Micro with a 6502 Tube second processor.

- A single floppy disk drive.

- An ADFS file system ROM.

To use, simply boot the disk with SHIFT+BREAK and it'll run the compiler,
turning a source file called `$.TestProg` into a binary called `$.cow/out`.
(The first time you run it it will precompile the standard library, which
saves time on subsequent runs.)

If you don't have one of these, here's a screencast.

<iframe width="560" height="315" src="https://www.youtube.com/embed/epTQPSi3IyQ" frameborder="0" allowfullscreen></iframe>

Big warnings
------------

- **The compiler is really slow.** Really, really slow. There are some design
flaws which mean that the standard library is way more expensive to compile
than it should be, but the end result means it takes about eight minutes to
compile anything. I'm working on this.

- **The compiler is really buggy.** Really, really buggy. This is a really
early release, and it's about in a state where it'll compile "Hello, world"
--- mostly. Caveat emptor and your mileage may vary. See anything wrong?
[File a bug!](https://github.com/davidgiven/cowgol/issues/new) No matter how
trivial. Remember, if you don't report it, I can't fix it...

- **The driver script has no error checking.** If your program has
compilation errors, the script (which is a just a crude `*EXEC` script) will
push on anyway. Be ready with CTRL+SHIFT to see the messages if it looks like
anything's going wrong. Then press CTRL+BREAK to interrupt things.

- **BREAK doesn't work properly.** The mini Tube OS tries to reenter the last
executed program when you press BREAK, which doesn't really work here; I'm
looking for a fix for this. But for now, if you just press BREAK, it'll rerun
random bits of compiler pipeline and bad stuff will happen. Use CTRL+BREAK
instead.

- **Cowgol binaries hate Basic.** Cowgol stomps all over Basic's private
workspace, and they don't clean up properly afterwards. (Because reasons.)
Basic can get upset, including crashlooping with `Bad program` errors. To be
safe, only run Cowgol programs from the Supervisor. Use this to enter it:

```
*GO F800
```

- **The compiler does lots and lots of file access.** In fact, it's mostly
I/O bound. The faster your disk system, the better. (If you try Cowgol on a
real hard drive, please let me know!) It also needs a file system which has
decent support for writing to multiple files simultaneously; DFS doesn't work
so well, even aside from the 200kB disk size limit.

- **The compiler doesn't set the execution address of the output binary
yet.** Sorry. Set it yourself, or do:

```
*LOAD cow/out 800
*GO 800
```
