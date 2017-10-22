Cowgol
======


What?
-----

Cowgol is an experimental, Ada-inspired language for very small systems
(6502, Z80, etc). It's different because it's intended to be self-hosted on
these devices: the end goal is to be able to rebuild the entire compiler on
an 8-bit micro.

Right now it's in a state where you can build the cross-compiler on a PC,
then use it to compile the compiler for a 6502 device, and then use *that*
to (slowly) compile and run real programs on a 6502. It's theoretically
capable of compiling itself but need memory tuning first. (And, realistically,
bugfixing.)

It's currently targeted at a BBC Micro with Tube second processor, because
that gives me a real operating system with file streams and 61kB of usable
RAM.


Why?
----

I don't understand the question?


Where?
------

- [Get the latest
release](https://github.com/davidgiven/cowgol/releases/latest) if you want
precompled binaries! Currently only available for the BBC Micro. Don't forget
to [read the instructions](bbcdist.html).

- [Check out the GitHub repository](http://github.com/davidgiven/cowgol) and
build from source. (Alternatively, you can download a source snapshot from
[the latest release](https://github.com/davidgiven/cowgol/releases/latest),
but I suggect the GitHub repositories better because I don't really intend to
make formal releases often.) Build instructions as in the README.

- [Ask a question by creating a GitHub
issue](https://github.com/davidgiven/cowgol/issues/new), or just email me
directly at [dg@cowlark.com](mailto:dg@cowlark.com). (But I'd prefer you
opened an issue, so other people can see them.)


How?
----

We have documentation! Admittedly, not much of it.

- [Everything you want to know about Cowgol, the language](language.html);
tl;dr: very strongly typed; Ada-like syntax; multiple return parameters; no
recursion; nested functions.

- [An overview of Cowgol, the toolchain](toolchain.html); tl;dr: eight-stage
compiler pipeline; separate front-end and back-end; maximum RAM use: about
60kB; call graph analysis for efficient variable packing; suitable for other
languages; written in pure Cowgol.

- [About the BBC Micro bootable floppy](bbcdist.html); tl;dr: crude, slow,
not suitable for production use; requires a BBC Micro with 6502 Tube second
processor although I recommend a BBC Master (mainly for the built-in editor);
requires extreme patience as it takes eight minutes to compile a small
program.


Who?
----

Cowgol was written, entirely so far, by me, David Given. Feel free to send me email at [dg@cowlark.com](mailto:dg@cowlark.com). You may also [like to visit my website](http://cowlark.com); there may or may not be something interesting there.


License?
--------

Cowgol is open source software available [under the 2-clause BSD license](https://github.com/davidgiven/cowgol/blob/master/COPYING). Simplified summary: do what you like with it, just don't claim you wrote it.
