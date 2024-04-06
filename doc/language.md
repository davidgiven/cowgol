About the Cowgol language
=========================

Cowgol is both a compiler toolchain, and a programming language. This page
shortly describes the language.

Cowgol's an Ada-inspired block structured language. It's got very strong
typing (implicit casts of variables never happen) and supports multiple
return parameters and nested functions. It manages to run relatively
efficiently on small devices by forbidding recursion: this allows it to
statically map every variable to a single location in memory, overlapping
variables that it knows won't be used at the same time; so it doesn't need
stack frames, which old processors don't really support well.

## Basic syntax

```
var i: uint8 := 4;    # variable declaration with initialiser
var j: uint8;         # variable declaration without initialiser
var k := fnord;       # you can omit the type if the RHS is non-constant

var hex := 0x1234;    # hexadecimal
var dec := 0d1234;    # explicit decimal
var oct := 0o1234;    # octal
var bin := 0b1010;    # binary
var grouped := 12_32; # _ characters are ignored in numbers

j := i + 1;           # assignment and expressions
j := i + 1 * 2;       # standard priorities; this adds 3 to i
j := (i + 1) * 2;     # of course parentheses work

# Block ifs
if j == 4 then
  print("yes!\n");  # string constant, standard string escapes
elseif j == 0 then
  print("maybe?\n");
else
  print("no.\n");
end if

# subroutine with one input parameter
sub ThisIsASubroutine(i: uint8) is
  # subroutine with no input or output parameters
  sub ThisIsANestedSubroutine() is
    print("nested subroutines can access upvalues!");
    print_i8(i);
  end sub;

  # subroutine with multiple output parameters
  sub swap(in1: uint8, in2: uint8): (out1: uint8, out2: uint8) is
    out1 := in2;
    out2 := in1;
  end sub;

  # calling a subroutine with multiple output parameters
  (i, j) := swap(i, j);

  return;  # does not take any parameters
end sub;

# you get while loops
while i != 0 loop
  i := i - 1;
end loop;

# you get infinite loops
loop
  print("Aaaah!");
  break;  # also continue
end loop;

# ...and that's your lot. Sorry, no for loops yet.
```

## Conditionals

There is no boolean type. Conditional expressions may only be used in `if`
and `while` statements.

You get: `and` `or` `not` `==` `!=` `<` `<=` `>` `>=`

`and`, `or` and `not` are short-circuiting.

**Note:** remember that magnitude comparisons of signed values is usually a
*disaster on these small systems. Try to avoid it.

## Forward declarations

The compiler is strictly single pass, so if you want to use a subroutine before
it's been defined you need to split the declaration and the implementation. It
works like this.

```
sub CombinedDeclarationAndImplementation(i: uint8) is
  DoSomethingWith(i);
end sub;

@decl sub SplitDeclarationAndImplementation(i: uint8);

...arbitrary code here...

@impl sub SplitDeclarationAndImplementation is
  DoSomethingWith(i);
end sub;
```

Note that in the implementation, the parameters are the ones used in the
declaration. You may want a comment to remind you of them. The implementation
must be defined in the same subroutine as the declaration.

## External subroutines

If you're using separate compilation (which is currently undocumented), you can
mark a subroutine as being external, with a link name, and the linker will
resolve these.

```
sub DefiningAnExternal @extern("_thing") is
  print("I can be accessed externally!\n");
end sub;

@decl sub ImportingAnExternal(i: uint8) @extern("one_uint8_in");

ImportingAnExternal(4);
```

Externals may only be defined at the top level (otherwise the subroutine's
parent subroutine would have exited and all its variables would be garbage).
Yes, you can import an external in the same file that you define it. That might
be useful?

## Types

Cowgol is strongly typed, with the usual semantics (but with a few gotchas).

### Scalar types

There are six scalar types: `int8`, `uint8`, `int16`, `uint16`, `int32`,
`uint32`. They work exactly as you might expect. They're twos complement and
rollover and overflow are defined to work. You may also define a custom integer
type with something like `int(-8, 7)`, which returns the smallest type which
will fit the specified bounds; this is mostly useful with type aliases (see
below).

You get these operators: `+` `-` `*` `/` `%` `&` `|` `^`

They all take the same type on the LHS and the RHS. No implicit casting is
done. If you want to use mixed types, you must explicitly convert.

```
var i: uint8 := 1;
var j: uint16 := 2;
j := j + i;             # wrong!
j := j + (i as uint16); # right!
j := j + 1;             # as a special exception, numeric constants work anywhere
```

In addition, there are the `<<` and `>>` operators. These are special; the
RHS must always be a `uint8`. (And you'll get an error if it's not.)

Unlike C, arithmetic always happens at the specified size. Always try to use
the smallest type possible to solve the problem, for efficiency.

### Arrays

Cowgol supports single-dimensional arrays.

```
var array: uint8[42];
array[4] := 9;
```

The index of an array is either a `uint8` or a `uint16` based on the size of
the array. Using the wrong type will cause a compilation error. (But remember
that numeric constants are always acceptable.)

```
var array: uint8[42];
var i: uint16 := 9;
print_i8(array[i]);          # wrong!
print_i8(array[i as uint8]); # right!
```

It is possible to automatically determine the type of an array index using
special syntax.

```
var array: uint8[42];
var i: @indexof array := 9;  # automatically picks a uint8 or a uint16
print_i8(array[i]);       # always works
```

That way you can resize your array later without having to rewrite lots of
code.

Arrays also support the `@sizeof` modifier to return the number of elements
in the array.

```
var array: uint8[42];
var i: @indexof array := 0;
while i != @sizeof array loop
  array[i] := 9;
  i := i + 1;
end loop;
```

### Record types

Cowgol supports structured records.

```
record ComplexNumber is
  i: int32;
  r: int32;
end record;

var c: ComplexNumber;
c.i := 4;
c.r := 9;
```

Records may inherit from other records.

```
record EvenMoreComplexNumber: ComplexNumber is
  q: int32;
end record;

var c: EvenMoreComplexNumber;
c.i := 4;
c.r := 9;
c.q := -7;
```

An inherited record gets all the parameters of its base class, in the same
place; so it's legal to cast a pointer to one to a pointer to another and
have those fields still be accessible. Implicit downcasts are not done
(although this is planned).

You may use `@at()` to specify the actual offset of a member. This is useful
for interoperation with hardware, and also to create unions.

```
record HardwareRegister is
  datareg @at(0): uint8;
  statusreg @at(1): uint8;
end record;

record UnionRecord is
  option1 @at(0): OptionOne;
  option2 @at(0): OptionTwo;
  option3 @at(0): OptionThree;
  non_union_member: uint8;  # goes after the three option members
end record
```

### Static initialisers

You may define array and record variables statically. These work the way you
would expect and allow arrays inside records, arrays of records, and strings:

```
var array1: uint8[3] := {1, 2, 3};    # the number of elements must match the size
var array2: uint8[] := {4, 3, 2, 1};  # or the compiler can figure it out

record Record is
	a: uint8;
	b: uint8;
	c: uint8;
	d: uint8[3];
	a_string: [uint8];
end record;

var a_record: Record := { 1, 2, 3, { 4, 5, 6 }, "foo" };
```

Variables declared in this way should be considered static --- they're
initialised once on program startup and then never again. So, if you define one
inside a subroutine then any changes will persist across multiple calls to the
subroutine. I'm debating making them immutable, once the compiler gets support
for immutable variables.

There's limited support for array initialisers. These only work for
one-dimensional arrays of scalars (so far). They work by embedding the data in
the executable, so they generate no code; but the data is intrinsically static
(if you use one inside a subroutine, be careful).

```
var array: uint8[42] = {1, 2, 3, 4};  # remaining items initialised to zero
var hugearray: uint32[1024] = {};     # your executable just went up in size by 4kB
```

### Pointer types

Cowgol has pointers.

```
record Structure is
	i: uint8;
end record;

var v: value := { 1 }; # member of record
var i: uint8 := 1;     # scalar type
var p: [uint8];        # pointer type
p := &v.i;             # allowed: taking the address of a member
p := &i;               # disallowed: taking the address of a scalar variable
[p] := [p] + 1;        # dereference pointer
p := nil;              # nil is convertible to any pointer

```

To avoid aliasing issues, you may not take the address of a scalar variable:
that is, a simple variable containing an integer or pointer. You _can_ take the
address of a record, or a scalar member of a record. (This restriction allows
the backend to generate much more efficient code.) If you know what you're
doing you can bypass this restriction with `p := @alias &i`. This doesn't make
it safe, it just stops the compiler generating an error.

Pointers are not indexable! But you _can_ do pointer arithmetic on them.
**Pointer arithmetic always works in bytes.**

```
var p: [uint32] := &v.alignedint; # p is correctly aligned
var badp := p + 1;                # now p is misaligned
var goodp := @next p;             # @next advances a pointer to the next item
goodp := @prev goodp;             # ...and back to the original item
```

You may have pointers to pointers, but remember that you can't take the address
of a scalar variable, so they're of limited use.

```
record Structure is
	i: uint8;
	p: [uint8];
	pp: [[uint8]];
end record;

var v: Structure;
v.p := &v.i;
v.pp := &v.p;
[[v.pp]] := 7;
```

### Special type tricks

You can define type aliases.

```
typedef ObjId is int(0, 127);      # a custom integer type (actually uint8)
typedef MyArray is ObjId[42];
```

These just define a new name for the type. Type aliases to the same type are
compatible.

You can use `@bytesof` to return the size of any type or variable.

```
var array: MyArray;
MemZero(&block as [uint8], @bytesof MyArray);
MemZero(&block as [uint8], @bytesof array);         # this works too

var elementsize: intptr := @bytesof(@sizeof array); # use parentheses for type expressions
```

### Interfaces and implementations

There's an analogue of function pointers. It's stricter than in C; you may only
take the address of subroutines which have been explicitly declared to be a
member of a particular interface.

```
interface Comparator(o1: [Object], o2: [Object]): (result: int8);

sub PointerComparator implements Comparator is
    result := 0;
	if o1 >= o2 then
        result := 1;
 	end if;
end sub;

sub StringComparator implements Comparator is
    result := StrCmp(o1 as [uint8], o2 as [uint8]);
end sub;

var someComparator: Comparator := PointerComparator;
if isString() != 0 then
    someComparator := StringComparator;
end if;
var r := someComparator(&object1, &object2);
```

Implementation references (e.g. `PointerComparator` or `StringComparator`
above) are opaque pointer-sized objects, but not actually pointers. As with
`@impl`, they use the parameter list of the interface. They behave exactly like
normal subroutines and are constant values which can be used in initialiser lists.

The language syntax makes it possible but slightly hard to return a subroutine
reference to an outer scope. Don't do this, because as the outer scope exits
its variables will be reused and the subroutine reference's upvalues will
become garbage. On the other hand, you _can_ use them to call into a scope:

```
interface FileObserver(filename: [uint8]);
@decl sub ScanDirectory(path: [uint8], callback: FileObserver);

...

sub ShowDirectoryContents() is
    sub Callback implements FileObserver is
	    print(filename);
		print_nl();
	end sub;

	ScanDirectory(".", Callback);
end sub
```

## Include files

Yes.

```
include "cowgol.coh";     # first line of any program!
```

## Inline assembly

Yes.

```
@asm "lda #1";            # emitted literally

var i: uint8;
@asm "lda", i;            # you may have references to simple variables

@asm "lda", p.i;          # not allowed!
```

## Things you need to bear in mind

- No floating point. Sorry. Just no.

- Variables are not initialised to anything, so if you don't zero arrays and
  structures yourself before use, they'll be full of garbage.

- Just because all variables are statically assigned doesn't mean they're
  static (in the C sense).  If two different subroutines never run at the same
  time, the compiler will allocate their variables to the same location. This
  means that you still can't return pointers to local variables and expect it
  to work.

