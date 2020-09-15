<B>obj2bin.pl</B> is a PDP-11 object file translator / linker, transforming an .obj file as output from macro11 into an absolute binary load image file (.bin) or other useful formats (.hex).

If run with no options, it prints a usage screen:

```
obj2bin.pl v2.1 by Don North (perl 5.03)
Usage: ./obj2bin.pl [options...] arguments
       --help                  output manpage and exit
       --debug                 enable debug mode
       --verbose               verbose status reporting
       --boot                  M9312 boot prom .hex
       --console               M9312 console/diagnostic prom .hex
       --binary                binary program load image .bin [default]
       --ascii                 ascii m9312 program load image .txt
       --rt11                  read .obj files in RT11 format
       --rsx11                 read .obj files in RSX11 format [default]
       --bytes=N               bytes per block on output hex format
       --nocrc                 inhibit output of CRC-16 in hex format
       --logfile=LOGFILE       logging message file
       --outfile=OUTFILE       output .hex/.txt/.bin file
       OBJFILE...              macro11 object .obj file(s)
Aborted due to command line errors.
```

If run with the --help option it prints a longer manual page:

```
NAME
    obj2bin.pl - Convert a Macro-11 program image to PROM/load format

SYNOPSIS
    obj2bin.pl [--help] [--debug] [--verbose] [--boot] [--console] [--binary]
    [--ascii] [--rt11] [--rsx11] [--bytes=N] [--nocrc] [--logfile=LOGFILE]
    --outfile=BINFILE OBJFILE

DESCRIPTION
    Converts a Macro-11 object files to various output formats, including
    M9312 boot and console PROM, straight binary records, ASCII format for
    M9312 console load commands, and loadable absolute binary program images
    (.BIN) files.

    Multiple .psect/.asect ops are supported, as well as all local
    (non-global) relocation directory entries.

    Supports either RT-11 or RSX-11 format object files.

OPTIONS
    The following options are available:

    --help
        Output this manpage and exit the program.

    --debug
        Enable debug mode; print input file records as parsed.

    --verbose
        Verbose status; output status messages during processing.

    --boot
        Generate a hex PROM file image suitable for programming into an M9312
        boot prom (512x4 geometry, only low half used).

    --console
        Generate a hex PROM file image suitable for programming into an M9312
        console/diagnostic prom (1024x4 geometry).

    --ascii
        Generate a a sequence of 'L addr' / 'D data' commands for downloading
        a program via a terminal emulator thru the M9312 user command
        interface. Suitable only for really small test programs.

    --binary
        Generate binary format load records of the program image (paper tape
        format) for loading into SIMH or compatible simulators. These files
        can also be copied onto XXDP filesystems to generate runnable program
        images (used to write custom diaqnostics).

        Binary format is the default if no other option is specified. If more
        than one option is specified the last one takes effect.

    --rt11
        Read input object files in RT-11 format.

    --rsx11
        Read input object files in RSX-11 format.

        RSX-11 object file format is the default if no other option is
        specified. If more than one option is specified the last one takes
        effect.

    --bytes=N
        For hex format output files, output N bytes per line (default 16).

    --nocrc
        For hex format output files, don't automatically stuff the computed
        CRC-16 as the last word in the ROM.

    --logfile=FILENAME
        Generate debug output into this file.

    --outfile=FILENAME
        Output binary file in format selected by user option.

    OBJFILE...
        Input object file(s) in .obj format.

ERRORS
    The following diagnostic error messages can be produced on STDERR. The
    meaning should be fairly self explanatory.

    "Aborted due to command line errors" -- bad option or missing file(s)

    "Can't open input file '$file'" -- bad filename or unreadable file

    "Error: Improper object file format (1)" -- valid RT-11 record must start
    with 0x01

    "Error: Improper object file format (2)" -- second RT-11 byte must be 0x00

    "Error: Improper object file format (3)" -- third byte is low byte of
    record length

    "Error: Improper object file format (4)" -- fourth byte is high byte of
    record length

    "Error: Improper object file format (5)" -- bytes five thru end-1 are data
    bytes

    "Error: Improper object file format (6)" -- last RT-11 byte is checksum

    "Error: Bad checksum exp=0x%02X rcv=0x%02X" -- compare rcv'ed checksum vs
    exp'ed checksum

EXAMPLES
    Some examples of common usage:

      obj2bin.pl --help

      obj2bin.pl --verbose --boot --out 23-751A9.hex 23-751A9.obj

      obj2bin.pl --verbose --binary --rt11 --out memtest.bin memtest.obj

      obj2bin.pl --verbose --binary --rsx11 --out prftst.bin prftst.obj mac/printf.obj

AUTHOR
    Don North - donorth <ak6dn _at_ mindspring _dot_ com>

HISTORY
    Modification history:

      2005-05-05 v1.0  donorth - Initial version.
      2016-01-15 v1.1  donorth - Added RLD(IR) processing, moved sub's to end.
      2016-01-18 v1.2  donorth - Added GSD processing, improved debug output.
      2016-01-20 v1.3  donorth - Initial support for linking multiple PSECTs.
      2016-01-22 v1.4  donorth - Added objfile/outfile/logfile switches vs stdio.
      2016-01-28 v1.5  donorth - Added RLD processing, especially complex.
      2017-04-01 v1.9  donorth - Renamed from obj2hex.pl to obj2bin.pl
      2017-05-04 v1.95 donorth - Updated capability to read multiple input .obj files.
      2020-03-06 v2.0  donorth - Updated help documentation and README.md file.
      2020-03-10 v2.1  donorth - Broke down and added RSX-11 input format option.

```
