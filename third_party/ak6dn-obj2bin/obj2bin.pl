#!/usr/bin/perl -w
#!/usr/local/bin/perl -w

# Copyright (c) 2005-2016 Don North
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
# 
# o Redistributions of source code must retain the above copyright
#   notice, this list of conditions and the following disclaimer.
# 
# o Redistributions in binary form must reproduce the above copyright
#   notice, this list of conditions and the following disclaimer in the
#   documentation and/or other materials provided with the distribution.
# 
# o Neither the name of the copyright holder nor the names of its
#   contributors may be used to endorse or promote products derived from
#   this software without specific prior written permission.
# 
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
# "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
# LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
# A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
# HOLDERS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
# SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED
# TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
# PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
# LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
# NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
# SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

require 5.008;

=head1 NAME

obj2bin.pl - Convert a Macro-11 program image to PROM/load format

=head1 SYNOPSIS

obj2bin.pl
S<[--help]>
S<[--debug]>
S<[--verbose]>
S<[--boot]>
S<[--console]>
S<[--binary]>
S<[--ascii]>
S<[--rt11]>
S<[--rsx11]>
S<[--bytes=N]>
S<[--nocrc]>
S<[--logfile=LOGFILE]>
S<--outfile=BINFILE>
S<OBJFILE>

=head1 DESCRIPTION

Converts a Macro-11 object files to various output formats,
including M9312 boot and console PROM, straight binary records,
ASCII format for M9312 console load commands, and loadable absolute
binary program images (.BIN) files.

Multiple .psect/.asect ops are supported, as well as all local
(non-global) relocation directory entries.

Supports either RT-11 or RSX-11 format object files.

=head1 OPTIONS

The following options are available:

=over

=item B<--help>

Output this manpage and exit the program.

=item B<--debug>

Enable debug mode; print input file records as parsed.

=item B<--verbose>

Verbose status; output status messages during processing.

=item B<--boot>

Generate a hex PROM file image suitable for programming into
an M9312 boot prom (512x4 geometry, only low half used).

=item B<--console>

Generate a hex PROM file image suitable for programming into
an M9312 console/diagnostic prom (1024x4 geometry).

=item B<--ascii>

Generate a a sequence of 'L addr' / 'D data' commands for downloading
a program via a terminal emulator thru the M9312 user command interface.
Suitable only for really small test programs.

=item B<--binary>

Generate binary format load records of the program image (paper
tape format) for loading into SIMH or compatible simulators.
These files can also be copied onto XXDP filesystems to generate
runnable program images (used to write custom diaqnostics).

Binary format is the default if no other option is specified.
If more than one option is specified the last one takes effect.

=item B<--rt11>

Read input object files in RT-11 format.

=item B<--rsx11>

Read input object files in RSX-11 format.

RSX-11 object file format is the default if no other option is specified.
If more than one option is specified the last one takes effect.

=item B<--bytes=N>

For hex format output files, output N bytes per line (default 16).

=item B<--nocrc>

For hex format output files, don't automatically stuff the computed
CRC-16 as the last word in the ROM.

=item B<--logfile=FILENAME>

Generate debug output into this file.

=item B<--outfile=FILENAME>

Output binary file in format selected by user option.

=item B<OBJFILE...>

Input object file(s) in .obj format.

=back

=head1 ERRORS

The following diagnostic error messages can be produced on STDERR.
The meaning should be fairly self explanatory.

C<Aborted due to command line errors> -- bad option or missing file(s)

C<Can't open input file '$file'> -- bad filename or unreadable file

C<Error: Improper object file format (1)> -- valid RT-11 record must start with 0x01

C<Error: Improper object file format (2)> -- second RT-11 byte must be 0x00

C<Error: Improper object file format (3)> -- third byte is low byte of record length

C<Error: Improper object file format (4)> -- fourth byte is high byte of record length

C<Error: Improper object file format (5)> -- bytes five thru end-1 are data bytes

C<Error: Improper object file format (6)> -- last RT-11 byte is checksum

C<Error: Bad checksum exp=0x%02X rcv=0x%02X> -- compare rcv'ed checksum vs exp'ed checksum

=head1 EXAMPLES

Some examples of common usage:

  obj2bin.pl --help

  obj2bin.pl --verbose --boot --out 23-751A9.hex 23-751A9.obj

  obj2bin.pl --verbose --binary --rt11 --out memtest.bin memtest.obj

  obj2bin.pl --verbose --binary --rsx11 --out prftst.bin prftst.obj mac/printf.obj

=head1 AUTHOR

Don North - donorth <ak6dn _at_ mindspring _dot_ com>

=head1 HISTORY

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

=cut

# options
use strict;
	
# external standard modules
use Getopt::Long;
use Pod::Text;
use FindBin;
use FileHandle;

# external local modules search path
BEGIN { unshift(@INC, $FindBin::Bin);
        unshift(@INC, $ENV{PERL5LIB}) if defined($ENV{PERL5LIB}); # cygwin bugfix
        unshift(@INC, '.'); }

# external local modules

# generic defaults
my $VERSION = 'v2.1'; # version of code
my $HELP = 0; # set to 1 for man page output
my $DEBUG = 0; # set to 1 for debug messages
my $VERBOSE = 0; # set to 1 for verbose messages

# specific defaults
my $crctype = 'CRC-16'; # type of crc calc to do
my $memsize; # number of instruction bytes allowed
my $memfill; # memory fill pattern
my %excaddr; # words to be skipped in rom crc calc
my $rombase; # base address of rom image
my $romsize; # number of rom addresses
my $romfill; # rom fill pattern
my $romtype = 'BINA'; # default rom type is BINARY
my $objtype = 'RSX11'; # default object file format is RSX11
my $bytesper = -1; # bytes per block in output file
my $nocrc = 0; # output CRC16 as last word unless set
my $outfile = undef; # output filename
my $logfile = undef; # log filename

# process command line arguments
my $NOERROR = GetOptions( "help"        => \$HELP,
			  "debug"       => \$DEBUG,
			  "verbose"     => \$VERBOSE,
			  "boot"        => sub { $romtype = 'BOOT'; },
			  "console"     => sub { $romtype = 'DIAG'; },
			  "binary"      => sub { $romtype = 'BINA'; },
			  "ascii"       => sub { $romtype = 'ASC9'; },
			  "rt11"        => sub { $objtype = 'RT11'; },
			  "rsx11"       => sub { $objtype = 'RSX11'; },
			  "bytes=i"     => \$bytesper,
			  "nocrc"       => \$nocrc,
			  "outfile=s"   => \$outfile,
			  "logfile=s"   => \$logfile,
			  );

# init
$VERBOSE = 1 if $DEBUG; # debug implies verbose messages

# output the documentation
if ($HELP) {
    # output a man page if we can
    if (ref(Pod::Text->can('new')) eq 'CODE') {
	# try the new way if appears to exist
	my $parser = Pod::Text->new(sentence=>0, width=>78);
	printf STDOUT "\n"; $parser->parse_from_file($0);
    } else {
	# else must use the old way
	printf STDOUT "\n"; Pod::Text::pod2text(-78, $0);
    };
    exit(1);
}

# check for correct arguments present, print usage if errors
unless ($NOERROR
	&& scalar(@ARGV) >= 1
	&& defined($outfile)
	&& $romtype ne 'NONE'
    ) {
    printf STDERR "obj2bin.pl %s by Don North (perl %g)\n", $VERSION, $];
    print STDERR "Usage: $0 [options...] arguments\n";
    print STDERR <<"EOF";
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
EOF
    # exit if errors...
    die "Aborted due to command line errors.\n";
}

# setup log file as a file, defaults to STDERR if not supplied
my $LOG = defined($logfile) ? FileHandle->new("> ".$logfile) : FileHandle->new_from_fd(fileno(STDERR),"w");

#----------------------------------------------------------------------------------------------------

# subroutine prototypes

sub trim ($);
sub chksum (@);
sub rad2asc (@);
sub crc (%);
sub sym2psect ($$);
sub read_rec ($);
sub get_global ($);
sub parse_rec ($$$);

#----------------------------------------------------------------------------------------------------

# fill in the parameters of the device

if ($romtype eq 'BOOT') {

    # M9312 512x4 boot prom
    %excaddr = ( 024=>1, 025=>1 ); # bytes to be skipped in rom crc calc
    $memsize = 128; # number of instruction bytes allowed
    $memfill = 0x00; # memory fill pattern
    $romsize = 512; # number of rom addresses (must be a power of two)
    $romfill = 0x00; # rom fill pattern
    $rombase = 0173000; # base address of rom

} elsif ($romtype eq 'DIAG') {

    # M9312 1024x4 diagnostic/console prom
    %excaddr = ( ); # bytes to be skipped in rom crc calc
    $memsize = 512; # number of instruction bytes allowed
    $memfill = 0x00; # memory fill pattern
    $romsize = 1024; # number of rom addresses (must be a power of two)
    $romfill = 0x00; # rom fill pattern
    $rombase = 0165000; # base address of rom

} elsif ($romtype eq 'BINA' || $romtype eq 'ASC9') {

    # program load image ... 56KB address space maximum
    %excaddr = ( ); # bytes to be skipped in rom crc calc
    $memsize = 7*8192; # number of instruction bytes allowed
    $memfill = 0x00; # memory fill pattern
    $romsize = 8*8192; # number of rom addresses (must be a power of two)
    $romfill = 0x00; # image fill pattern
    $rombase = 0; # base address of binary image

} else {

    # unknown ROM type code
    die "ROM type '$romtype' is not supported!\n";

}

if ($VERBOSE) {
    printf $LOG "ROM type is '%s'\n", $romtype;
    printf $LOG "ROM space is %d. bytes\n", $memsize;
    printf $LOG "ROM length is %d. addresses\n", $romsize;
    printf $LOG "ROM base address is 0%06o\n", $rombase;
}

#----------------------------------------------------------------------------------------------------

# read/process the input object file records

# real pdp11 memory data words in boot prom
my @mem = ((0) x $memsize);

# min/max address limits in object file
my ($adrmin,$adrmax) = ('','');

# state variables in processing object records
my $rommsk = ($romsize-1)>>1; # address bit mask
my $adrmsk = 0xFFFF; # 16b addr mask
my $datmsk = 0xFFFF; # 16b data mask
my $memmsk = 0xFF; # 8b memory data mask
    
# databases
my %gblsym = ();
my %psect = ();
my @psect = ();
my %program = ();
my $psectname = sprintf("%02d:%s",1,'. ABS.');
my $psectaddr = 0;
my $psectnumb = -1;
my $textaddr = 0;

# program defaults
$program{START}{ADDRESS} = 1;
$program{START}{VALUE} = 1;
$program{START}{PSECT} = $psectname;

# two passes, first is headers, second is data records
foreach my $pass (1..2) {
    foreach my $numb (0..$#ARGV) {
	my $objfile = $ARGV[$numb];
	my $OBJ = FileHandle->new("< ".$objfile);
	die "Error: can't open input object file '$objfile'\n" unless defined $OBJ;
	printf $LOG "\n\nPROCESS PASS %d FILE %d '%s'\n\n", $pass, $numb+1, $objfile if $DEBUG;
	while (my @rec = &read_rec($OBJ)) { &parse_rec($numb+1, $pass, \@rec); }
	$OBJ->close;
    }
}

#----------------------------------------------------------------------------------------------------

# compute CRC if required, copy memory image to output buffer

my @buf = ($romfill) x $romsize; # physical PROM data bytes, filled background pattern

# only compute CRC on M9312 ROMs
if ($romtype eq 'BOOT' || $romtype eq 'DIAG') {

    # compute CRC-16 of the prom contents (except exception words) and store at last location
    my $crctab = &crc(-name=>$crctype, -new=>1);
    my $crc = &crc(-name=>$crctype, -init=>1);
    for (my $adr = 0; $adr < $memsize-2; $adr += 1) {
	next if exists($excaddr{$adr}); # skip these addresses
	$mem[$rombase+$adr] = $memfill unless defined($mem[$rombase+$adr]);
	$crc = &crc(-name=>$crctype, -table=>$crctab, -crc=>$crc, -byte=>$mem[$rombase+$adr]);
    }
    $crc = &crc(-name=>$crctype, -crc=>$crc, -last=>1);
    unless ($nocrc) {
	# output computed CRC-16 as last word in the ROM file
	$mem[$rombase+$memsize-2] = ($crc>>0)&0xFF;
	$mem[$rombase+$memsize-1] = ($crc>>8)&0xFF;
    }
    printf $LOG "ROM %s is %06o (0x%04X)\n", $crctype, ($crc) x 2 if $VERBOSE;

    # process data words to actual PROM byte data
    # put 4bit nibble in low 4b of each 8b data byte, zero the upper 4b
    # only copy the above instruction portion over
    for (my $idx = 0; $idx < $memsize<<1; $idx += 4) {
	my $dat = ($mem[$rombase+($idx>>1)+1]<<8) | ($mem[$rombase+($idx>>1)+0]<<0);
	$buf[$idx+0] = ($dat&0xE)|(($dat>>8)&0x1);       # bits   3   2   1   8
	$buf[$idx+1] = ($dat>>4)&0xF;                    # bits   7   6   5   4
	$buf[$idx+2] = ((($dat>>8)&0xE)|($dat&0x1))^0xC; # bits ~11 ~10   9   0
	$buf[$idx+3] = (($dat>>12)&0xF)^0x1;             # bits  15  14  13 ~12
    }

} elsif ($romtype eq 'BINA' || $romtype eq 'ASC9') {

    # only copy the above instruction portion over
    for (my $adr = 0; $adr < $memsize; $adr += 1) {
	$mem[$rombase+$adr] = $memfill unless defined($mem[$rombase+$adr]);
	$buf[$adr] = $mem[$rombase+$adr];
    }

}

if ($VERBOSE) {

    # print checksum of entire device
    my $chksum = 0; map($chksum += $_, @buf);
    printf $LOG "ROM checksum is %06o (0x%04X)\n", $chksum, $chksum;

}

#----------------------------------------------------------------------------------------------------

# output the linked/processed binary file image in the desired format

my $OUT = FileHandle->new("> ".$outfile);
die "Error: can't open output file '$outfile'\n" unless defined $OUT;

if ($romtype eq 'BOOT' || $romtype eq 'DIAG') {
    
    # output the entire PROM buffer as an intel hex file

    $bytesper = 16 if $bytesper <= 0;

    for (my $idx = 0; $idx < $romsize; $idx += $bytesper) {
	my $cnt = $idx+$bytesper <= $romsize ? $bytesper : $romsize-$idx; # N bytes or whatever is left
	my @dat = @buf[$idx..($idx+$cnt-1)]; # get the data
	my $dat = join('', map(sprintf("%02X",$_),@dat)); # map to ascii text
	printf $OUT ":%02X%04X%02X%s%02X\n", $cnt, $idx, 0x00, $dat, &chksum($cnt, $idx>>0, $idx>>8, 0x00, @dat);
    }

    printf $OUT ":%02X%04X%02X%s%02X\n", 0x00, 0x0000, 0x01, '', &chksum(0x0, 0x0000>>0, 0x0000>>8, 0x01);

} elsif ($romtype eq 'BINA') {

    # Loader format consists of blocks, optionally preceded, separated, and
    # followed by zeroes.  Each block consists of:
    #
    #   001		---
    #   000		 |
    #   lo(length)	 |
    #   hi(length)	 |
    #   lo(address)	 > 'length' bytes
    #   hi(address)	 |
    #   databyte1	 |
    #   :		 |
    #   databyteN	---
    #   checksum
    #
    # If the byte length is exactly six, the block is the last on the tape, and
    # there is no checksum.  If the origin is not 000001, then the origin is
    # the PC at which to start the program.

    $bytesper = 128 if $bytesper <= 0;

    my $start = $program{START}{ADDRESS};

    sub m ($) { $_[0] & 0xFF; }

    # output the entire PROM buffer as a binary loader file
    for (my $idx = $adrmin; $idx < $adrmax+1; $idx += $bytesper) {
	my $cnt = $idx+$bytesper <= $adrmax+1 ? $bytesper : $adrmax+1-$idx; # N bytes or whatever is left
	my @dat = @buf[$idx..($idx+$cnt-1)]; # get the data
	my $len = $cnt+6;
	my @rec = (0x01, 0x00, &m($len>>0), &m($len>>8), &m($idx>>0), &m($idx>>8), @dat);
	print $OUT pack("C*", @rec, &chksum(@rec));
    }
    my @end = (0x01, 0x00, 0x06, 0x00, &m($start>>0), &m($start>>8));
    print $OUT pack("C*", @end, &chksum(@end));

} elsif ($romtype eq 'ASC9') {

    # ascii interface to M9312 console emulator

    sub n ($) { $_[0] & 0xFF; }

    # start program load here
    printf $OUT "L %o\r\n", $adrmin;

    # output the PROM buffer as an ascii load file
    for (my $idx = $adrmin; $idx < $adrmax+1; $idx += 2) {
	printf $OUT "D %06o\r\n", (&n($buf[$idx+1])<<8) | &n($buf[$idx+0]);
    }

    # start program exec here
    printf $OUT "L %o\r\nS\r\n", $adrmin;

}

# all done
$OUT->close;

#----------------------------------------------------------------------------------------------------

# really done
$LOG->close;
exit;

#----------------------------------------------------------------------------------------------------
#----------------------------------------------------------------------------------------------------

# trim leading/trailing spaces on a string

sub trim ($) {

    my ($str) = @_;

    $str =~ s/\s+$//;
    $str =~ s/^\s+//;
    
    return $str;
}

#----------------------------------------------------------------------------------------------------

# compute checksum (twos complement of the sum of bytes)

sub chksum (@) {

    my $sum = 0;

    map($sum += $_, @_);

    return (-$sum) & 0xFF;
}

#----------------------------------------------------------------------------------------------------

# RAD50 to ASCII decode

sub rad2asc (@) {

    my @str = split(//, ' ABCDEFGHIJKLMNOPQRSTUVWXYZ$.%0123456789'); # RAD50 character subset

    my $ascii = "";
    foreach my $rad50 (@_) {
	$ascii .= $str[int($rad50/1600)%40] . $str[int($rad50/40)%40] . $str[$rad50%40];
    }

    return $ascii;
}

#----------------------------------------------------------------------------------------------------

# symbol to psect name converter

sub sym2psect ($$) {

    return sprintf("%02d:%-6s", @_);
}

#----------------------------------------------------------------------------------------------------

# crc computation routine

sub crc (%) {

    # pass all args by name
    my %args = @_;

    # all the crcs we know how to compute
    my %crcdat = ( 'CRC-16' => [ 0xA001,     2, 0x0000,     0x0000     ],
		   'CRC-32' => [ 0xEDB88320, 4, 0xFFFFFFFF, 0xFFFFFFFF ] );

    # run next byte thru crc computation, return updated crc
    return $args{-table}[($args{-crc}^$args{-byte}) & 0xFF]^($args{-crc}>>8) if exists($args{-byte});

    # return initial crc value
    return $crcdat{$args{-name}}->[2] if exists($args{-init});

    # return final crc value xored with xorout
    return $args{-crc} ^ $crcdat{$args{-name}}->[3] if exists($args{-last});

    # compute the crc lookup table, return a pointer to it
    if (exists($args{-new})) {
	my $crctab = [];
	my $poly = $crcdat{$args{-name}}->[0];
	foreach my $byte (0..255) {
	    my $data = $byte;
	    foreach (1..8) { $data = ($data>>1) ^ ($data&1 ? $poly : 0); }
	    $$crctab[$byte] = $data;
	}
	return $crctab;
    }
}

#----------------------------------------------------------------------------------------------------

# read a record from the object file

sub read_rec ($) {

    my ($fh) = @_;

    my ($buf, $cnt, $len, $err) = (0,0,0,0);
    my @pre = ();
    my @dat = ();
    my @suf = ();

    if ($objtype eq 'RT11') {

	# RT-11 object file format consists of blocks, optionally preceded, separated, and
	# followed by zeroes.  Each block consists of:
	#
	#   001		---
	#   000		 |
	#   lo(length)	 |
	#   hi(length)	 > 'length' bytes
	#   databyte1	 |
	#   :		 |
	#   databyteN	---
	#   checksum
	#

	# skip over strings of 0x00; exit OK if hit EOF
	do { return () unless $cnt = read($fh, $buf, 1); } while (ord($buf) == 0);

	# valid record starts with (1)
	$err = 1 unless $cnt == 1 && ord($buf) == 1;
	push(@pre, ord($buf));

	# second byte must be (0)
	$cnt = read($fh, $buf, 1);
	$err = 2 unless $cnt == 1 && ord($buf) == 0;
	push(@pre, ord($buf));

	# third byte is low byte of record length
	$cnt = read($fh, $buf, 1);
	$err = 3 unless $cnt == 1;
	$len = ord($buf);
	push(@pre, ord($buf));

	# fourth byte is high byte of record length
	$cnt = read($fh, $buf, 1);
	$err = 4 unless $cnt == 1;
	$len += ord($buf)<<8;
	push(@pre, ord($buf));

	# bytes five thru end-1 are data bytes
	$cnt = read($fh, $buf, $len-4);
	$err = 5 unless $cnt == $len-4 && $len >= 4;
	@dat = unpack("C*", $buf);

	# last byte is checksum
	$cnt = read($fh, $buf, 1);
	$err = 6 unless $cnt == 1;
	my $rcv = ord($buf);
	push(@suf, ord($buf));

	# compare rcv'ed checksum vs exp'ed checksum
	my $exp = &chksum(0x01, $len>>0, $len>>8, @dat);
	warn sprintf("Warning: Bad checksum exp=0x%02X rcv=0x%02X", $exp, $rcv) unless $exp == $rcv;

    } elsif ($objtype eq 'RSX11') {

	# RSX-11 object file format consists of blocks of data in the following format.
	# Each block consists of:
	#
	#   lo(length)
	#   hi(length)
	#   databyte1	---
	#     :          |
	#     :          > 'length' bytes
	#     :          |
	#   databyteN	---
	#   zeroFill    present if length is ODD; else not present
	#

	# first byte is low byte of record length
	$cnt = read($fh, $buf, 1);
	# but exit OK if hit EOF
	return () if $cnt == 0;
	$err = 10 unless $cnt == 1;
	$len = ord($buf);
	push(@pre, ord($buf));

	# second byte is high byte of record length
	$cnt = read($fh, $buf, 1);
	$err = 11 unless $cnt == 1;
	$len += ord($buf)<<8;
	push(@pre, ord($buf));

	# bytes three thru end are data bytes
	$cnt = read($fh, $buf, $len);
	$err = 12 unless $cnt == $len && $len >= 0;
	@dat = unpack("C*", $buf);

	# optional pad byte if length is odd
	$cnt = ($len & 1) ? read($fh, $buf, 1) : 2;
	$err = 13 unless $cnt == 1 && ord($buf) == 0 || $cnt == 2;

    }

    # output the record if debugging
    if ($DEBUG >= 2) {
	my $fmt = "%03o";
	my $n = 16;
	my $pre = sprintf("RECORD: [%s] ",join(" ",map(sprintf($fmt,$_),@pre)));
	printf $LOG "\n\n%s", $pre;
	my $k = length($pre);
	my @tmp = @dat;
	while (@tmp > $n) {
	    printf $LOG "%s\n%*s", join(" ",map(sprintf($fmt,$_),splice(@tmp,0,$n))), $k, '';
	}
	printf $LOG "%s", join(" ",map(sprintf($fmt,$_),@tmp)) if @tmp;
	printf $LOG " [%s]\n\n", join(" ",map(sprintf($fmt,$_),@suf));
    }

    # check we have a well formatted record
    warn sprintf("Warning: invalid %s object file record format (%d)", $objtype, $err) if $err;

    # all is well, return the record
    return @dat;
}

#----------------------------------------------------------------------------------------------------

# get a global symbol target value

sub get_global ($) {

    my ($sym) = @_;

    # return target value if exists
    return $gblsym{$sym}{DEF}{ADDRESS} if exists $gblsym{$sym}{DEF}{ADDRESS};

    # issue a warning for multiple definition with a different address
    warn sprintf("Warning: global symbol undefined: symbol=%s, assuming value of 000000\n", $sym);

    # and return nil
    return 0;
}

#----------------------------------------------------------------------------------------------------

# parse an input object file record, update data structures

sub parse_rec ($$$) {

    my ($file,$pass,$rec) = (@_);

    # type is first byte of record
    my $key = $rec->[0];

    if ($key == 001 && $pass == 1) { # GSD

	# iterate over GSD subrecords
	for (my $i = 2; $i < scalar(@$rec); ) {
	    # GSD records are fixed 8B length all in the same format
	    my $sym = &rad2asc(($rec->[$i+1]<<8)|($rec->[$i+0]<<0),($rec->[$i+3]<<8)|($rec->[$i+2]<<0));
	    my $flg = $rec->[$i+4];
	    my $ent = $rec->[$i+5];
	    my $val = ($rec->[$i+7]<<8)|($rec->[$i+6]<<0);
	    my @ent = ('MODULE','CSECT','INTSYM','XFRADR','GBLSYM','PSECT','IDENT','VSECT');
	    my $def = undef;
	    if ($ent == 3) {
		# XFRADR
		$program{START}{PSECT} = &sym2psect($file,$sym);
		$program{START}{VALUE} = $val;
		if ($DEBUG) {
		    printf $LOG "..GSD: type='%-6s'(%03o) name='%s' value=%06o\n",
		                $ent[$ent], $ent, $program{START}{PSECT}, $program{START}{VALUE};
		}
	    } elsif ($ent == 4) {
		# GBLSYM flags
		my $adr = $val + $psect{$psectname}{START};
		$def = $flg&(1<<3) ? "DEF" : "REF";
		if ($def eq "DEF" && exists $gblsym{$sym}{$def} && $adr != $gblsym{$sym}{$def}{ADDRESS}) {
		    # issue a warning for multiple definition with a different address
		    warn sprintf("Warning: global symbol redefinition: symbol=%s (address/psect) old=%06o/%s new=%06o/%s -- IGNORING\n",
				 &trim($sym), $gblsym{$sym}{$def}{ADDRESS}, &trim($gblsym{$sym}{$def}{PSECT}), $adr, &trim($psectname));
		} else {
		    # define first time only ... ignore any redefinition attempt
		    $gblsym{$sym}{$def}{FLG}{$flg&(1<<0) ? "WEA" : "STR"}++;
		    $gblsym{$sym}{$def}{FLG}{$flg&(1<<3) ? "DEF" : "REF"}++;
		    $gblsym{$sym}{$def}{FLG}{$flg&(1<<5) ? "REL" : "ABS"}++;
		    $gblsym{$sym}{$def}{PSECT} = $psectname;
		    $gblsym{$sym}{$def}{VALUE} = $val;
		    $gblsym{$sym}{$def}{ADDRESS} = $adr;
		}
		if ($DEBUG) {
		    printf $LOG "..GSD: type='%-6s'(%03o) name='%s' value=%06o", $ent[$ent], $ent, $sym, $val;
		    printf $LOG " psect='%s' value=%06o", $gblsym{$sym}{$def}{PSECT}, $gblsym{$sym}{$def}{VALUE};
		    printf $LOG " flags=%s\n", join(",", sort(keys(%{$gblsym{$sym}{$def}{FLG}})));
		}
	    } elsif ($ent == 5) {
		# PSECT flags
		my $nam = &sym2psect($file,$sym);
		$psect[++$psectnumb] = $nam;
		$psect{$nam}{FILE} = $file;
		$psect{$nam}{NUMBER} = $psectnumb;
		$psect{$nam}{FLG}{$flg&(1<<0) ? "GBL" : $flg&(1<<6) ? "GBL" : "LCL"}++;
		$psect{$nam}{FLG}{$flg&(1<<2) ? "OVR" : "CON"}++;
		$psect{$nam}{FLG}{$flg&(1<<4) ? "R/O" : "R/W"}++;
		$psect{$nam}{FLG}{$flg&(1<<5) ? "REL" : "ABS"}++;
		$psect{$nam}{FLG}{$flg&(1<<7) ? "D"   : "I/D"}++;
		$psectname = $nam;
		if ($psect{$nam}{FLG}{ABS}) {
		    # absolute
		    if ($psect{$nam}{FLG}{CON}) {
			# concatenated
			warn sprintf("Warning: psect ABS,CON is not supported, psect='%s'\n", $psectname);
		    } elsif ($psect{$nam}{FLG}{OVR}) {
			# overlaid
			$psect{$nam}{LENGTH} = $val;
			$psect{$nam}{START} = 0;
		    }
		} elsif ($psect{$nam}{FLG}{REL}) {
		    # relative
		    if ($psect{$nam}{FLG}{CON}) {
			# concatenated
			$psect{$nam}{LENGTH} = $val;
			$psect{$nam}{START} = $psectaddr & 1 ? ++$psectaddr : $psectaddr;
			$psectaddr += $val;
		    } elsif ($psect{$nam}{FLG}{OVR}) {
			# overlaid
			warn sprintf("Warning: psect REL,OVR is not supported, psect='%s'\n", $psectname);
		    }
		}
		if ($DEBUG) {
		    printf $LOG "..GSD: type='%-6s'(%03o) name='%s' value=%06o", $ent[$ent], $ent, $nam, $val;
		    printf $LOG " length=%06o start=%06o", $psect{$nam}{LENGTH}, $psect{$nam}{START};
		    printf $LOG " flags=%s\n", join(",", sort(keys(%{$psect{$nam}{FLG}})));
		}
	    }
	    $i += 8;
	}

    } elsif ($key == 002 && $pass == 1) { # ENDGSD

	# just say we saw it
	printf $LOG "..ENDGSD\n\n" if $DEBUG;

	$program{END}{ADDRESS} = 0;
	foreach my $nam (sort({$psect{$a}{START} == $psect{$b}{START} ? $psect{$a}{NUMBER} <=> $psect{$b}{NUMBER} : $psect{$a}{START} <=> $psect{$b}{START}} keys(%psect))) {
	    my $start = $psect{$nam}{START};
	    my $length = $psect{$nam}{LENGTH};
	    my $end = $length ? $start + $length - 1 : $start;
	    $program{END}{ADDRESS} = $end if $end > $program{END}{ADDRESS};
	    printf $LOG "....PSECT[%02d](%s) START=%06o END=%06o LENGTH=%06o\n",
	                $psect{$nam}{NUMBER}, $nam, $start, $end, $length if $length && $DEBUG;
	}

	printf $LOG "\n" if $DEBUG;
	foreach my $nam (sort(keys(%gblsym))) {
	    if (exists $gblsym{$nam}{DEF}) {
		printf $LOG "....GBLSYM(%s) PSECT='%s' VALUE=%06o : ADDRESS=%06o\n",
		            $nam, $gblsym{$nam}{DEF}{PSECT}, $gblsym{$nam}{DEF}{VALUE}, $gblsym{$nam}{DEF}{ADDRESS} if $DEBUG;
	    }
	}

	if ($program{START}{ADDRESS} == 1) {
	    $program{START}{ADDRESS} = $program{START}{VALUE} + $psect{$program{START}{PSECT}}{START};
	}
	printf $LOG "\n....PROG(ADDRESS) START=%06o END=%06o\n",
	            $program{START}{ADDRESS}, $program{END}{ADDRESS} if $DEBUG;

    } elsif ($key == 003 && $pass == 2) { # TXT

	# process text record
	my $off = ($rec->[3]<<8)|($rec->[2]<<0);
	my $len = scalar(@$rec)-4;
	my $base = $psect{$psectname}{START};
	my $adr = ($base + $off) & $adrmsk;
	foreach my $i (1..$len) { $mem[$adr+$i-1] = $rec->[4+$i-1]; }
	if ($DEBUG) {
	    printf $LOG "..TXT OFFSET=%06o LENGTH=%o BASE=%06o PSECTNAME='%s'\n", $off, $len, $base, $psectname;
	    for (my $i = 0; $i < $len; $i += 2) {
		printf $LOG "      %06o: ", ($adr+$i)&~1 if $i%8 == 0;
		printf $LOG " %03o...", $mem[$adr+$i++] if ($adr+$i)&1;
		printf $LOG " %06o", ($mem[$adr+$i+1]<<8)|($mem[$adr+$i+0]<<0) if $i < $len-1;
		printf $LOG " ...%03o", $mem[$adr+$i] if $i == $len-1;
		printf $LOG "\n" if $i%8 >= 6 && $i < $len-2;
	    }
	    printf $LOG "\n";
	}
	$adrmin = $adr        if $adrmin eq '' || $adr        < $adrmin;
	$adrmax = $adr+$len-1 if $adrmax eq '' || $adr+$len-1 > $adrmax;
	$textaddr = $adr;

    } elsif ($key == 004 && $pass == 2) { # RLD

	# iterate over RLD subrecords
	for (my $i = 2; $i < scalar(@$rec); ) {
	    # first byte is entry type and flags
	    my $ent = $rec->[$i+0] & 0x7F; # entry type
	    my $flg = $rec->[$i+0] & 0x80; # modification flag (0=word, 1=byte)
	    # process an entry
	    if ($ent == 001) {
		# internal relocation ... OK
		my $dis = $rec->[$i+1];
		my $con = ($rec->[$i+3]<<8)|($rec->[$i+2]<<0);
		# process
		my $adr = $adrmsk & ($textaddr + $dis - 4);
		my $val = $datmsk & ($psect{$psectname}{START} + $con);
		# store
		$mem[($adr+0)&$adrmsk] = $memmsk & ($val>>0);
		$mem[($adr+1)&$adrmsk] = $memmsk & ($val>>8);
		# print
		printf $LOG "..RLD(IR):   adr=%06o val=%06o ; dis=%06o con=%06o\n",
		            $adr, $val, $dis, $con if $DEBUG;
		$i += 4;
	    } elsif ($ent == 003) {
		# internal displaced relocation ... OK
		my $dis = $rec->[$i+1];
		my $con = ($rec->[$i+3]<<8)|($rec->[$i+2]<<0);
		# process
		my $adr = $adrmsk & ($textaddr + $dis - 4);
		my $val = $datmsk & ($con - ($adr+2));
		# store
		$mem[($adr+0)&$adrmsk] = $memmsk & ($val>>0);
		$mem[($adr+1)&$adrmsk] = $memmsk & ($val>>8);
		# print
		printf $LOG "..RLD(IDR):  adr=%06o val=%06o ; dis=%06o con=%06o\n",
		            $adr, $val, $dis, $con if $DEBUG;
		$i += 4;
	    } elsif ($ent == 012) {
		# psect relocation ... OK
		my $dis = $rec->[$i+1];
		my $nam = &sym2psect($file,&rad2asc(($rec->[$i+3]<<8)|($rec->[$i+2]<<0),($rec->[$i+5]<<8)|($rec->[$i+4]<<0)));
		# process
		my $adr = $adrmsk & ($textaddr + $dis - 4);
		my $val = $datmsk & ($psect{$nam}{START});
		# store
		$mem[($adr+0)&$adrmsk] = $memmsk & ($val>>0);
		$mem[($adr+1)&$adrmsk] = $memmsk & ($val>>8);
		# print
		printf $LOG "..RLD(PR):   adr=%06o val=%06o ; dis=%06o nam='%s'\n",
		            $adr, $val, $dis, $nam if $DEBUG;
		$i += 6;
	    } elsif ($ent == 014) {
		# psect displaced relocation ... OK
		my $dis = $rec->[$i+1];
		my $nam = &sym2psect($file,&rad2asc(($rec->[$i+3]<<8)|($rec->[$i+2]<<0),($rec->[$i+5]<<8)|($rec->[$i+4]<<0)));
		# process
		my $adr = $adrmsk & ($textaddr + $dis - 4);
		my $val = $datmsk & ($psect{$nam}{START} - ($adr+2));
		# store
		$mem[($adr+0)&$adrmsk] = $memmsk & ($val>>0);
		$mem[($adr+1)&$adrmsk] = $memmsk & ($val>>8);
		# print
		printf $LOG "..RLD(PDR):  adr=%06o val=%06o ; dis=%06o nam='%s'\n",
		            $adr, $val, $dis, $nam if $DEBUG;
		$i += 6;
	    } elsif ($ent == 015) {
		# psect additive relocation ... OK
		my $dis = $rec->[$i+1];
		my $nam = &sym2psect($file,&rad2asc(($rec->[$i+3]<<8)|($rec->[$i+2]<<0),($rec->[$i+5]<<8)|($rec->[$i+4]<<0)));
		my $con = ($rec->[$i+7]<<8)|($rec->[$i+6]<<0);
		# process
		my $adr = $adrmsk & ($textaddr + $dis - 4);
		my $val = $datmsk & ($psect{$nam}{START} + $con);
		# store
		$mem[($adr+0)&$adrmsk] = $memmsk & ($val>>0);
		$mem[($adr+1)&$adrmsk] = $memmsk & ($val>>8);
		# print
		printf $LOG "..RLD(PAR):  adr=%06o val=%06o ; dis=%06o con=%06o nam='%s'\n",
		            $adr, $val, $dis, $con, $nam if $DEBUG;
		$i += 8;
	    } elsif ($ent == 016) {
		# psect additive displaced relocation ... OK
		my $dis = $rec->[$i+1];
		my $nam = &sym2psect($file,&rad2asc(($rec->[$i+3]<<8)|($rec->[$i+2]<<0),($rec->[$i+5]<<8)|($rec->[$i+4]<<0)));
		my $con = ($rec->[$i+7]<<8)|($rec->[$i+6]<<0);
		# process
		my $adr = $adrmsk & ($textaddr + $dis - 4);
		my $val = $datmsk & ($psect{$nam}{START} + $con - ($adr+2));
		# store
		$mem[($adr+0)&$adrmsk] = $memmsk & ($val>>0);
		$mem[($adr+1)&$adrmsk] = $memmsk & ($val>>8);
		# print
		printf $LOG "..RLD(PADR): adr=%06o val=%06o ; dis=%06o con=%06o nam='%s'\n",
		            $adr, $val, $dis, $con, $nam if $DEBUG;
		$i += 8;
	    } elsif ($ent == 002) {
		# global relocation ... OK
		my $dis = $rec->[$i+1];
		my $sym = &rad2asc(($rec->[$i+3]<<8)|($rec->[$i+2]<<0),($rec->[$i+5]<<8)|($rec->[$i+4]<<0));
		# process
		my $adr = $adrmsk & ($textaddr + $dis - 4);
		my $val = $datmsk & (&get_global($sym));
		# store
		$mem[($adr+0)&$adrmsk] = $memmsk & ($val>>0);
		$mem[($adr+1)&$adrmsk] = $memmsk & ($val>>8);
		# print
		printf $LOG "..RLD(GR):   adr=%06o val=%06o ; dis=%06o            sym='%s'\n",
		            $adr, $val, $dis, $sym if $DEBUG;
		$i += 6;
	    } elsif ($ent == 004) {
		# global displaced relocation ... OK
		my $dis = $rec->[$i+1];
		my $sym = &rad2asc(($rec->[$i+3]<<8)|($rec->[$i+2]<<0),($rec->[$i+5]<<8)|($rec->[$i+4]<<0));
		# process
		my $adr = $adrmsk & ($textaddr + $dis - 4);
		my $val = $datmsk & (&get_global($sym) - ($adr+2));
		# store
		$mem[($adr+0)&$adrmsk] = $memmsk & ($val>>0);
		$mem[($adr+1)&$adrmsk] = $memmsk & ($val>>8);
		# print
		printf $LOG "..RLD(GDR):  adr=%06o val=%06o ; dis=%06o            sym='%s'\n",
		            $adr, $val, $dis, $sym if $DEBUG;
		$i += 6;
	    } elsif ($ent == 005) {
		# global additive relocation ... OK
		my $dis = $rec->[$i+1];
		my $sym = &rad2asc(($rec->[$i+3]<<8)|($rec->[$i+2]<<0),($rec->[$i+5]<<8)|($rec->[$i+4]<<0));
		my $con = ($rec->[$i+7]<<8)|($rec->[$i+6]<<0);
		# process
		my $adr = $adrmsk & ($textaddr + $dis - 4);
		my $val = $datmsk & (&get_global($sym) + $con);
		# store
		$mem[($adr+0)&$adrmsk] = $memmsk & ($val>>0);
		$mem[($adr+1)&$adrmsk] = $memmsk & ($val>>8);
		# print
		printf $LOG "..RLD(GAR):  adr=%06o val=%06o ; dis=%06o con=%06o sym='%s'\n",
		            $adr, $val, $dis, $con, $sym if $DEBUG;
		$i += 8;
	    } elsif ($ent == 006) {
		# global additive displaced relocation ... OK
		my $dis = $rec->[$i+1];
		my $sym = &rad2asc(($rec->[$i+3]<<8)|($rec->[$i+2]<<0),($rec->[$i+5]<<8)|($rec->[$i+4]<<0));
		my $con = ($rec->[$i+7]<<8)|($rec->[$i+6]<<0);
		# process
		my $adr = $adrmsk & ($textaddr + $dis - 4);
		my $val = $datmsk & (&get_global($sym) + $con - ($adr+2));
		# store
		$mem[($adr+0)&$adrmsk] = $memmsk & ($val>>0);
		$mem[($adr+1)&$adrmsk] = $memmsk & ($val>>8);
		# print
		printf $LOG "..RLD(GADR): adr=%06o val=%06o ; dis=%06o con=%06o sym='%s'\n",
		            $adr, $val, $dis, $con, $sym if $DEBUG;
		$i += 8;
	    } elsif ($ent == 007) {
		# location counter definition ... OK
		my $dis = $rec->[$i+1];
		my $nam = &sym2psect($file,&rad2asc(($rec->[$i+3]<<8)|($rec->[$i+2]<<0),($rec->[$i+5]<<8)|($rec->[$i+4]<<0)));
		my $con = ($rec->[$i+7]<<8)|($rec->[$i+6]<<0);
		# process
		$psectname = $nam;
		$textaddr = $datmsk & ($con);
		# print
		printf $LOG "..RLD(LCD):  adr=%06o            ; dis=%06o con=%06o nam='%s'\n",
		            $textaddr, $dis, $con, $nam if $DEBUG;
		$i += 8;
	    } elsif ($ent == 010) {
		# location counter modification ... OK
		my $dis = $rec->[$i+1];
		my $con = ($rec->[$i+3]<<8)|($rec->[$i+2]<<0);
		# process
		$textaddr = $datmsk & ($con);
		# print
		printf $LOG "..RLD(LCM):  adr=%06o            ; dis=%06o con=%06o\n",
		            $textaddr, $dis, $con if $DEBUG;
		$i += 4;
	    } elsif ($ent == 011) {
		# program limits ... OK, mostly
		my $dis = $rec->[$i+1];
		# process
		my $adr = $adrmsk & ($textaddr + $dis - 4);
		my $val = $datmsk & ( 01000 ); # make this up, no easy way to compute it
		# store
		$mem[($adr+0)&$adrmsk] = $memmsk & ($val>>0);
		$mem[($adr+1)&$adrmsk] = $memmsk & ($val>>8);
		# print
		printf $LOG "..RLD(LIM1): adr=%06o val=%06o ; dis=%06o\n",
		            $adr, $val, $dis if $DEBUG;
		# process
		$dis += 2;
		$adr += 2;
		$val = $datmsk & ($program{END}{ADDRESS});
		# store
		$mem[($adr+0)&$adrmsk] = $memmsk & ($val>>0);
		$mem[($adr+1)&$adrmsk] = $memmsk & ($val>>8);
		# print
		printf $LOG "..RLD(LIM2): adr=%06o val=%06o ; dis=%06o\n",
		            $adr, $val, $dis if $DEBUG;
		$i += 2;
	    } elsif ($ent == 017) {
		# complex relocation ... OK
		my $dis = $rec->[$i+1];
		my $nam = &sym2psect($file,'. ABS.');
		my $con = 0;
		# process
		my $adr = 0;
		my $loc = 0;
		my $val = 0;
		my $opc = "";
		my @stk = ();
		my $dun = 0;
		for ($i += 2; !$dun; $i += 1) {
		    if ($rec->[$i] == 000) {
			# NOP do nothing
			$opc = "NOP";
		    } elsif ($rec->[$i] == 001) {
			# ADD : pop + pop => push
			my @arg = splice(@stk,-2,2);
			push(@stk, $arg[0] + $arg[1]);
			$opc = "ADD";
		    } elsif ($rec->[$i] == 002) {
			# SUB : pop - pop => push
			my @arg = splice(@stk,-2,2);
			push(@stk, $arg[0] - $arg[1]);
			$opc = "SUB";
		    } elsif ($rec->[$i] == 003) {
			# MUL : pop * pop => push
			my @arg = splice(@stk,-2,2);
			push(@stk, $arg[0] * $arg[1]);
			$opc = "MUL";
		    } elsif ($rec->[$i] == 004) {
			# DIV : pop / pop => push
			my @arg = splice(@stk,-2,2);
			push(@stk, $arg[1] == 0 ? 0 : int($arg[0] / $arg[1]));
			$opc = "DIV";
		    } elsif ($rec->[$i] == 005) {
			# AND : pop & pop => push
			my @arg = splice(@stk,-2,2);
			push(@stk, $arg[0] & $arg[1]);
			$opc = "AND";
		    } elsif ($rec->[$i] == 006) {
			# IOR : pop | pop => push
			my @arg = splice(@stk,-2,2);
			push(@stk, $arg[0] | $arg[1]);
			$opc = "IOR";
		    } elsif ($rec->[$i] == 007) {
			# XOR : pop ^ pop => push
			my @arg = splice(@stk,-2,2);
			push(@stk, $arg[0] ^ $arg[1]);
			$opc = "XOR";
		    } elsif ($rec->[$i] == 010) {
			# NEG : pop - => push
			my @arg = splice(@stk,-1,1);
			push(@stk, -$arg[0]);
			$opc = "NEG";
		    } elsif ($rec->[$i] == 011) {
			# COM : pop ~ => push
			my @arg = splice(@stk,-1,1);
			push(@stk, ~$arg[0]);
			$opc = "COM";
		    } elsif ($rec->[$i] == 012) {
			# STO : pop => store @ address
			my @arg = splice(@stk,-1,1);
			$adr = $adrmsk & ($textaddr + $dis - 4);
			$val = $datmsk & ($arg[0]);
			$opc = "STO";
			$dun = 1;
		    } elsif ($rec->[$i] == 013) {
			# STO : pop => store @ address + disp
			my @arg = splice(@stk,-1,1);
			$adr = $adrmsk & ($textaddr + $dis - 4);
			$val = $datmsk & ($arg[0] - ($adr+2));
			$opc = "STO+DIS";
			$dun = 1;
		    } elsif ($rec->[$i] == 016) {
			# FET : global => push
			$nam = &rad2asc(($rec->[$i+2]<<8)|($rec->[$i+1]<<0),($rec->[$i+4]<<8)|($rec->[$i+3]<<0));
			$con = &get_global($nam);
			push(@stk, $con);
			$opc = sprintf("GLB[%s]=(%o)", &trim($nam), $con);
			$i += 4;
		    } elsif ($rec->[$i] == 017) {
			# FET : local => push
			$nam = $psect[$rec->[$i+1]];
			$con = ($rec->[$i+3]<<8) | ($rec->[$i+2]<<0);
			$loc = $psect{$nam}{START} + $con;
			push(@stk, $loc);
			$opc = sprintf("FET[%s+%o]=(%o)", &trim($nam), $con, $loc);
			$i += 3;
		    } elsif ($rec->[$i] == 020) {
			# CONstant : value => push
			$con = ($rec->[$i+2]<<8) | ($rec->[$i+1]<<0);
			push(@stk, $con);
			$opc = "CON";
			$i += 2;
		    }
		    $stk[-1] = $datmsk & $stk[-1] if @stk;
		    printf $LOG "....OPC=%-20s STK=(%s)\n", $opc, join(",",map(sprintf("%o",$_),@stk)) if $DEBUG;
		}
		# print
		printf $LOG "..RLD(CPXR): adr=%06o val=%06o ; dis=%06o\n", $adr, $val, $dis if $DEBUG;
		# store
		$mem[($adr+0)&$adrmsk] = $memmsk & ($val>>0);
		$mem[($adr+1)&$adrmsk] = $memmsk & ($val>>8);
	    } else {
		warn sprintf("Warning: Unknown RLD entry 0%o (%d)", $ent, $ent);
	    }
	}

    } elsif ($key == 005) { # ISD

	# ignore
	printf $LOG "..ISD: ignored\n" if $DEBUG;

    } elsif ($key == 006) { # ENDMOD

	# just say we saw it
	printf $LOG "..ENDMOD\n\n\n" if $DEBUG;

    } elsif ($key == 007) { # LIBHDR

	# ignore
	printf $LOG "..LIBHDR: ignored\n" if $DEBUG;

    } elsif ($key == 010) { # LIBEND

	# ignore
	printf $LOG "..LIBEND: ignored\n" if $DEBUG;

    } elsif ($key == 000 || $key >= 011) { # unknown

	# invalid record type in the object file
	warn sprintf("Warning: unknown record type 0%o (%d)", $key, $key);

    }

    return;
}

#----------------------------------------------------------------------------------------------------

# the end
