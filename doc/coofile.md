The Coofile file format
=======================

Coofiles are Cowgol's 'object files'. They're a binary format containing
multiple streams of marked-up assembler text in fragments. cowlink scans these,
does the global analysis and dead code elimination, and then assembles the
fragments of source text into a plain text assembler file which can be passed
to the platform assembler (whatever this is).

## The overall format

The files contain chunked, indexless data containing multiple records one after
another, until a terminating record is reached. Each record consists of a
single character determining the chunk type followed by two bytes containing
the payload size for this record (not including the chunk header).

```
53  04  00  31  32  33  34  45  00  00
'Q' <four>  '0' '1' '2' '3' 'E' <zero>

At offset 0000, there is an Q record with four bytes of data, "0123"
At offset 0007, there is an E record with zero bytes of data
```

Subroutines in a coofile are referred to by ID, which should be consecutive (or
nearly so) small integers. These are local to the file and are not shared with
any other coofile. When linking happens, subroutines in multiple coofiles may
be associated together using a global namespace --- see the `X` record.

The subroutine with ID 0 is special, and indicates the coofile's main
subroutine. If the subroutine is linked, this subroutine always appears in the
output program. Main subroutines are called in linker order, one after the
other, and when the last one exits the program terminates. Other subroutines
only appear in the output if they are referenced (using the `R` record).

## Records

### E: end of file

No payload. Indicates the end of the file; no more records are read.

### N: declare subroutine

```
<subid:16><name:string>
```

Declares a subroutine with the supplied human-readable name (which is mostly
ignored by the linker but may be used in messaging and symbol naming). The
length of the string is taken from the record size.

### X: declare external subroutine

```
<subid:16><name:string>
```

Associates the given subroutine with an entry in the external subroutines
table. When linking coofiles, the linker will common up all references to the
same name. Only one subroutine implementation may be given. The length of the
string is taken from the record size.

### R: reference subroutine

```
<userid:16><usedid:16><tailcall:8>
```

Indicates that subroutine `userid` calls `usedid`. Used to tell the linker
about the call graph.

`tailcall` is a boolean which indicates if a call uses tail recursion.
If so, the current subroutine's workspace can be reused.

### W: declare workspace

```
<subid:16><wsid:8><size:16>
```

Indicates the subroutine `subid` has a workspace with ID `wsid` of size `size`
bytes. The workspace IDs are platform dependent, but are small numbes starting
at 0. (Most platforms will have a single workspace, 0.) Conflicting data is
treated as an error.

### F: source code fragment

```
<streamid:8><subid:16><text...>
```

Supplies a source code fragment associated with `subid`.

`streamid` is a 7-bit number which may have the top bit set. The bottom seven
bits is used to control which stream this fragment should be appended to; the
top bit is set if this is the last fragment in the stream. The linker will
buffer fragments until it sees one with the top bit set, at which point all the
data will be written to the output file and the stream reset. Streams are
therefore written in order in which the end-of-stream records appear.

## Source code

Source code may contain markup used to refer to other entities in the file.
These are processed as the streams are written to disk. They are binary
sequences starting with a non-printable character.

### 01: subroutine reference

```
<01><subid:16>
```

Replaced with a symbol representing the referenced subroutine.

### 02: workspace reference

```
<02><subid:16><wsid:8><offset:16>
```

Replaced with a reference to a location in one of a subroutine's workspaces.

### 03: this coofile

```
<03>
```

Replaced with a unique ID representing this coofile. (Useful for constructing
labels local to just this file.)

### 04: this subroutine

```
<04>
```

Replaced with a unique ID representing this subroutine. (Useful for constructing labels local to just this subroutine.)

### 05: worksapce size

```
<05><subid:16><wsid:8>
```

Replaced with a numeric size of one of the specified subroutine's workspaces.

