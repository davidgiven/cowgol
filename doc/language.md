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
var i: uint8 := 4; # variable declaration with initialiser
var j: uint8;      # variable declaration without initialiser

j := i + 1;        # assignment and expressions
j := i + 1 * 2;    # standard priorities; this adds 3 to i
j := (i + 1) * 2;  # of course parentheses work

# Block ifs
if j == 4 then
  print("yes!\n");  # string constant, standard string escapes
elseif j == 0 then
  print("maybe?\n");
else
  print("no.\n");
end if

sub ThisIsASubroutine(i: uint8) # one in
  sub ThisIsANestedSubroutine()
    print("nested subroutines can access upvalues!");
    print_i8(i);
  end sub;

  # multiple output parameters
  sub swap(in1: uint8, in2: uint8): (out1: uint8, out2: uint8)
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

label:
# But you do get goto!
goto label;
```

## Conditionals

There is no boolean type. Conditional expressions may only be used in `if`
and `while` statements.

You get: `and` `or` `not` `==` `!=` `<` `<=` `>` `>=`

`and`, `or` and `not` are short-circuiting.

**Note:** remember that magnitude comparisons of signed values is usually a
*disaster on these small systems. Try to avoid it.

## Types

Cowgol is strongly typed, with the usual semantics (but with a few gotchas).

### Scalar types

There are six scalar types: `int8`, `uint8`, `int16`, `uint16`, `int32`,
`uint32`. They work exactly as you might expect. They're twos complement and
rollover and overflow are defined to work.

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
var i: array@index := 9;  # automatically picks a uint8 or a uint16
print_i8(array[i]);       # always works
```

That way you can resize your array later without having to rewrite lots of
code.

Arrays also support the `@size` modifier to return the number of elements in the array.

```
var array: uint8[42];
var i: array@index := 0;
while i != array@size loop
  array[i] := 9;
  i := i + 1;
end loop;
```

### Record types

Cowgol supports structured records.

```
record ComplexNumber
  i: int32;
  r: int32;
end record;

var c: ComplexNumber;
c.i := 4;
c.r := 9;
```

Records may inherit from other records.

```
record EvenMoreComplexNumber: ComplexNumber
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

### Pointer types

Cowgol has pointers.

```
var i: uint8 := 1;  # scalar type
var p: [uint8];     # pointer type
p := &i;            # take pointer to variable
p[0] := p[0] + 1;   # dereference pointer
```

**Big warning.** I'm planning on changing the pointer dereference syntax to
*make them non-indexable. Please don't use indices other than 0. (They'll be
*replaced with pointers to arrays.)

You may have pointers to pointers. But remember that pointers are typically
pretty expensive on small machines.

```
var i: uint8 := 1;
var p: [uint8] := &i;
var pp: [[uint8]] := &p;
var ppp: [[[uint8]]] := &pp;
# and the madness continues
```

### Special type tricks

You can use the `@bytes` modifier to return the size of any type or variable.

```
var block: SomeType;
zero_memory(&block as [int8], SomeType@bytes);
zero_memory(&block as [int8], block@bytes);    # this works too
```

## Special tricks

There's other magic stuff you can do; these are used for interfacing with the
host platform.

```
@bytes 0x01, 0x02, 0x03;  # emit these bytes directly into the output code

var i: int32;
@bytes &i;                # emit a two-byte address of i

var j: int8 @segment(0x81); # assign j to a specific segment
# Beware! Segment numbers are architecture-specific. If you're on a 6502, 0x81 is zero page.

@bytes >&i, <&i;          # emit the low byte, and then the high byte, of the address of i
```

## Things you need to bear in mind

- No floating point. Sorry. Just no.

- Variables are not initialised to anything, so if you don't zero arrays and
structures yourself before use, they'll be full of garbage.

- Just because all variables are statically assigned doesn't mean they're static (in the C sense).
If two different subroutines never run at the same time, the compiler will
allocate their variables to the same location. This means that you still
can't return pointers to local variables and expect it to work.

- Subroutines can be defined in any order --- you can refer to them before
they're defined. Types must be defined before they're used.

- The standard library is crummy, and I'm not going to describe it here. See
[`src/arch/bbc/lib`](https://github.com/davidgiven/cowgol/tree/master/src/arch/bbc/lib).
At some point it's getting an overhaul.
