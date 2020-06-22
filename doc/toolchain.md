About the Cowgol toolchain
==========================

Cowgol is both a compiler toolchain, and a programming language. This page
shortly describes the toolchain.

## Introduction

Cowgol's a pretty vanilla compiler in the modern style, with the usual
compiler passes (plus some extra). There's a lexer, a parser,
then an AST is generated, which is then passed to a table-driven backend
for code generation, then the resulting files are analysed and linked to
produce assembly language text.

It's all heavily optimised for small systems. For example, the compiler
is strictly single-pass, because this minimises the amount of state the
compiler has to remember. AST generation happens one statement at a time
to keep memory use at a minimum. And so on.

## The passes

These are, in order:

  - **the lexer**: a hand-tooled push-driven lexer. There's nothing interesting
	here. It's about 650 lines of Cowgol.

  - **the parser**: this uses a customised version of
	[lemon](https://www.hwaci.com/sw/lemon/) which has been modified to produce
	Cowgol code. This is the core of the compiler frontend. Type checking and
	AST generation happens inline with parsing so there's no intermediate
	stage. The language grammar is defined in a [1300 loc `.y`
	file](https://github.com/davidgiven/cowgol/blob/master/src/cowfe/parser.y)
	(plus a handful of support files). There's no AST rewrite stage, either.

  - **the code generator**: cowfe writes bytecode which represents the AST and
	additional metadata to a temporary file, which is then passed to cowbe, the
	code generator. This is table-driven: a tool called `newgen` reads in a
	backend definition ([here's the 8080
	one](https://github.com/davidgiven/cowgol/blob/master/src/cowbe/arch8080.cow.ng))
	and emits Cowgol source. The newgen files define AST matching rules and
	register information. The code generator core then matches these rules to
	the AST produced by the parser to select instructions and do register
	allocation. There's more on this later. Annotated assembly is emitted to a
	file.

  - **the linker**: cowlink takes multiple `.coo` files produced by cowbe and
	cowwrap and performs global analysis and variable placement. This is the
	part which makes Cowgol possible: variables are placed statically in
	memory, such that variables which the compiler knows aren't used at the
	same time (based on analysing the call graph) occupy the same memory
	locations. This is incredibly effective. For example, the 6502 has an
	architectural limitation that pointers must occupy zero page; cowlink knows
	about this, and assigns pointer variables to zero page. Normally the 256
	byte zero page would very rapidly fill up, but cowbe itself only uses 146
	bytes. This is also the reason why Cowgol forbids recursion.

## Code generation

The AST produced by the parser is a simple two-op tree structure. For example:

```
x := y + z
```

...produces:

```
STORE1(ADD1(LOAD1(y), LOAD1(z)), x)
```

(approximately).

The files fed to `newgen` then define rules which are matched against this tree
from the bottom up. So if we have:

```
gen STORE1(reg, ADDRESS());
gen reg := LOAD1(ADDRESS);
gen reg := ADD1(reg, reg);
```

...then the code generator will match these rules.

```
(4) STORE1(reg1, ADDRESS(x));
(3) reg1 := ADD1(reg3, reg2);
(2) reg2 := LOAD1(ADDRESS(z));
(1) reg3 := LOAD1(ADDRESS(y));
```

These are in reverse, as the compiler works bottom-up, right to left. This fits
well with the destination-driven register allocator: the consumer is seen
first, which defines any constraints on the register; then, when the matching
producer is seen, a matching register is allocated. If a register cannot be
allocated, then a stack spill and reload is generated. So we end up with:

```
(4) STORE1(r1, ADDRESS(x));
(3) r1 := ADD1(r2, r1);
(2) r2 := LOAD1(ADDRESS(z));
(1) r1 := LOAD1(ADDRESS(y));
```

Once the statement has been converted to machine instructions, they are then
emitted in reverse order, producing actual machine code.

```
(1) ld r1, y
(2) ld r2, z
(3) add r1, r1, r2
(4) st r1, x
```

Consider a machine with far fewer registers, like the 8080. The rules then look
like this:

```
gen STORE1(z, ADDRESS());  # memory operations only work on the accumulator
gen a := LOAD1(ADDRESS()); # here too
gen a := ADD1(b, a);       # add requires one parameter to be the accumulator
```

This matches in the same way. However, the ADD1 rule requires one parameter to
be in `b`, but there is no rule generating b. This means that no register can
be matched. This causes a spill and reload between the LOAD1 and the ADD1. 

```
(4) STORE1(x, ADDRESS(x));
(3) a := ADD1(b, a) reloading b from (1);
(2) a := LOAD1(ADDRESS(z));
(1) a := LOAD1(ADDRESS(y)) spilling a for (3);
```

We fall back to spilling to the stack, but in this case we can actually spill
to a register. When the code generator encounters (1) it sees that (3) requires
a `b`, and that `b` is unused by the intermediate instructions, so it can
annotate (1) as spilling `a` into `b` and nothing needs doing at (3). So, we
generate the following code:

```
(1) lda y
    mov b, a                # spill to b
(2) lda z
(3) add b
(4) sta x
```

The end result is very cheap and surprisingly good code, where instruction
selection and register allocation happen at the same time in a single pass. In
particular, it almost trivially avoids the classic problem with top-to-bottom
register allocators where you always end up leaving values in the wrong
register.

## Limitations of the code generator

All is not rosy: there are limitations, mostly caused by the very simple
implementation here.

### No costing of rules is done

The code generator always selects the first rule it sees which matches the AST.
newgen itself sorts the rules by order of complexity, based on number of
matching nodes, so we end up matching complex rules first. What this means is
that there's no way to reason about which registers are available --- indeed,
because rule matching happens in reverse, the consumer is seen before the
producer, so the code generator doesn't know what registers are in use.

For example, consider these two rules:

```
gen a := ADD1(v8, a);
gen a := ADD1(a, v8);
```

These apply on the 6502, where one operand of an instruction must live in
memory, referred to as `v8`. Except, these two rules have the same cost and the
code generator cannot decide which one to use, even though one will be
drastically cheaper than the other, depending on the expression. Consider:

```
ADD1(CONSTANT(1), LOAD1(x))
```

If the first rule matches, you will get:

```
lda #1
sta <temporary>
lda x
clc
adc <temporary>
```

This happens because `CONSTANT(1)` is spilt to `v8`. The second rule would have
been much cheaper here, producing this:

```
lda #1
clc
adc x
```

(In fact, in this specific situation the compiler frontend will rotate
`ADD1(CONSTANT(), ...)` to `ADD1(..., CONSTANT())` to make it easier to write
matching rules. But it still happens.)


### Compute once, use once

Every value is produced exactly once and then consumed exactly once. Values
can't be reused (although, see the register cache described below). This means
that this:

```
struct.ptr.member := struct.ptr.member + 1;
```

...ends up having to computer the address of `struct.ptr.member` twice. Common
subexpression elimination in the front end would help here, but that's very
expensive and would require keeping state between statements.

### Each statement is an island

Code generation happens statement-by-statement, with no context. This means
that referencing the same variable in multiple consecutive statements will
reload that variable, even though it's already in a register.

However:

## The register cache

After code generation happens, backends may implement a simple register cache.
This tracks the values in registers and suppresses reloads if the backend knows
it's already in memory. This is limited to constants, addresses, and the values
of simple variables, but is extremely effective.

For example, consider on the Z80:

```
ptr.a := 1;
ptr.b := 2;
ptr.c := 3;
```

The code generator will naively try to produce:

```
ld ix, (ptr)
ld (ix+5), 1
ld ix, (ptr)
ld (ix+6), 1
ld ix, (ptr)
ld (ix+7), 1
```

The Z80 backend, though, every time it generates a `ld ix, (...)` instruction,
marks the `ix` register as containing the contents of `ptr`. After it's been
loaded once, it can omit the reload until `ix` changes. What actually gets
omitted to the `.coo` file is:

```
ld ix, (ptr)
ld (ix+5), 1
ld (ix+6), 1
ld (ix+7), 1
```

This is very cheap to implement (130 lines of code) and extremely effective.
It's also the reason why Cowgol forbids taking the address of scalar variables:
otherwise we would have to discard any cached values every time to dereferenced
a pointer, just in case `ix` was pointing at `ptr` itself.

