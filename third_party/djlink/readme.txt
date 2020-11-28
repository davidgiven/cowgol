
				DJLINK

		       a 16-bit OMF/OBJ linker

Written by DJ Delorie <dj@delorie.com>, distributed under the terms of
the GNU General Public License.  See the files COPYING.DJ and COPYING
for details.  DJLINK is part of DJGPP's 16-bit toolset; for more
information visit http://www.delorie.com/djgpp/16bit/

Contents:

*  What is DJLINK?
*  Where can I get DJLINK?
*  Building DJLINK
*  Invoking DJLINK
*  What does DJLINK support?
*  What does DJLINK not support?

There are currently no newsgroups or mailing lists for DJLINK.  For
now, just send me <dj@delorie.com> e-mail.

DJ Delorie
dj@delorie.com
http://www.delorie.com/

-----------------------------------------------------------------------------

*  What is DJLINK?

DJLINK is a free(*) program that links 16-bit OMF format object
modules into DOS-compatible COM or EXE programs.  It is a very simple
program that is designed to be a supplement to DJGPP, which only
supports 32-bit programs.  DJLINK is compatible with NASM, MASM, TASM,
and most 16-bit C compilers.  DJLINK is not commercial software.  You
do not need to pay a license fee for the use of DJLINK.  You may make
as many copies of DJLINK as you like.  You may redistribute DJLINK
under the terms of the GNU General Public License (which basically
means give them the sources also, but see the files COPYING.DJ and
COPYING for details).

(*) This means free like "freedom" not free like "no cost".

------------------------------------------------------------------------------

*  Where can I get DJLINK?

http://www.delorie.com/djgpp/16bit/djlink/

If you unzip the DJLINK zip file under Unix, use "unzip -a" to convert
text files to Unix text format.

------------------------------------------------------------------------------

*  Building DJLINK

You'll need DJGPP; see http://www.delorie.com/djgpp/

Specifically, you'll need the C++ compiler (but not the C++ library),
so get the djdev, gcc, gpp, bnu, and mak zips and follow the
installation instructions in djgpp' README.1ST file.

To build djlink.exe, type "make"

DJLINK can be built as a cross-linker on any 32-bit (or bigger) Unix
system on which gcc is supported.

------------------------------------------------------------------------------

*  Invoking DJLINK

Usage: djlink [-o file.exe] [-m file.map] file1.obj file2.obj ... lib1.lib ...

If you don't specify -o, it uses the base name of the first object if
finds (i.e. foo.obj -> foo.exe).  If you specify a .COM file as the
output file, it automatically creates a COM file!

If you don't specify -m, no map file is generated.  If it does
generate a map file, it's always a detailed map file.

Otherwise, just list all the object files on the command line.  If you
used DJGPP to build DJLINK, you can list all the objects (one per
line) in a file, and use @file to refer to them:

	djlink -o foo.exe -m foo.map @objlist.txt

------------------------------------------------------------------------------

*  What does DJLINK support?

DJLINK supports 16-bit objects and libraries.  It does not support
objects with 32-bit fragments.  DJLINK supports the following OMF
record types:

	THEADR MODEND EXTDEF PUBDEF LNAMES SEGDEF
	GRPDEF FIXUPP LEDATA LIDATA LEXTDEF

DJLINK supports relocated segments, absolute segments, and absolute
symbols.

------------------------------------------------------------------------------

*  What does DJLINK not support?

DJLINK does not yet support these record types:

	COMDEF BAKPAT LPUBDEF LCOMDEF CEXTDEF
	COMDAT ALIAS NBKPAT LLNAMES

DJLINK does not support common blocks, such as NASM's ".comm" or
".lcomm" directives.

DJLINK does not support more than 127 names (symbols, segments, etc)
per object.

DJLINK does not support comment extensions, like weak symbols or link
directives.  The lack of support for COM* record types means DJLINK
doesn't support common blocks (fortran COMMON, MSC virtual functions).

DJLINK only supports fixup types 0..3.  It does not support 32-bit
fixups.
