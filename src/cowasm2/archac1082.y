%token EOS NUMBER STRING ID.
%token PERCENT OPENPAREN CLOSEPAREN OPENSQ CLOSESQ.
%token COLON PLUS SLASH STAR MINUS.
%token PIPE CARET COMMA AMPERSAND LSHIFT RSHIFT.
%token OPENBR CLOSEBR TILDE LEOP LTOP GEOP GTOP.
%token EQOP NEOP HASH AT.

%token CPUTYPE.
%token REG_A REG_C REG_DPTR REG_8 REG_16.
%token INSN_ANL.
%token INSN_ORL.
%token INSN_ALU.
%token INSN_ABSA.
%token INSN_ABSL.
%token INSN_EXT_A.

%left COMMA.
%left AMPERSAND.
%left PIPE.
%left CARET.
%nonassoc LTOP LEOP GTOP GEOP EQOP NEOP.
%left LSHIFT RSHIFT.
%left PLUS MINUS.
%left STAR SLASH PERCENT.
%right NOT TILDE.

%token_type {Token}

%syntax_error
{
        StartError();
        print("unexpected ");
        print(yyTokenName[yymajor]);
        EndError();
}

%stack_size 100
%stack_overflow
{
        StartError();
        print("parser stack overflow");
        EndError();
}

%token_destructor
{
        if (yymajor == STRING) or (yymajor == ID) then
                print("free unused string\n");
                Free($$.string as [uint8]);
        end if;
}

program ::= statements.

statements ::= /* empty */.
statements ::= statements statement.

statement ::= label instruction EOS.

label ::= /* empty */.
label ::= ID(I) COLON.
	{ var s := FindSymbol(I.string); s.number := [currentProgramCounter]; s.addressSpace := AS_XDATA; }

/* --- Expressions ------------------------------------------------------- */

%type expression {Number}

%include
{
	sub CheckNumber(space: uint8) is
		if space != AS_NUMBER then
			SimpleError("must use a simple number here");
		end if;
	end sub;

	sub SimpleComputation(e: [Number], e1: [Number], e2: [Number], v: Arith) is
		CheckNumber(e1.addressSpace);
		CheckNumber(e2.addressSpace);
		e.number := v;
		e.addressSpace := AS_NUMBER;
	end sub;
}

expression(E) ::= NUMBER(T).
	{ E.number := T.number; E.addressSpace := AS_NUMBER; }

expression(E) ::= ID(I).
	{ var s := FindSymbol(I.string); E.number := s.number; E.addressSpace := s.addressSpace; }

expression(E) ::= OPENPAREN expression(E1) CLOSEPAREN.
	{ E.number := E1.number; E.addressSpace := E1.addressSpace; }

expression(E) ::= MINUS expression(E1).
	{ CheckNumber(E1.addressSpace); E.number := -E1.number; E.addressSpace := AS_NUMBER; }

expression(E) ::= TILDE expression(E1).
	{ CheckNumber(E1.addressSpace); E.number := ~E1.number; E.addressSpace := AS_NUMBER; }

expression(E) ::= expression(E1) AMPERSAND expression(E2).
	{ SimpleComputation(&E, &E1, &E2, E1.number & E2.number); }

expression(E) ::= expression(E1) CARET expression(E2).
	{ SimpleComputation(&E, &E1, &E2, E1.number ^ E2.number); }

expression(E) ::= expression(E1) PIPE expression(E2).
	{ SimpleComputation(&E, &E1, &E2, E1.number | E2.number); }

expression(E) ::= expression(E1) STAR expression(E2).
	{ SimpleComputation(&E, &E1, &E2, E1.number * E2.number); }

expression(E) ::= expression(E1) SLASH expression(E2).
	{ SimpleComputation(&E, &E1, &E2, E1.number / E2.number); }

expression(E) ::= expression(E1) PERCENT expression(E2).
	{ SimpleComputation(&E, &E1, &E2, E1.number % E2.number); }

expression ::= expression LSHIFT expression.
expression ::= expression MINUS expression.
expression ::= expression PLUS expression.
expression ::= expression RSHIFT expression.

/* --- Instructions ------------------------------------------------------ */

%include
{
	sub BadAddressType() is
		SimpleError("bad address type");
	end sub;

	sub EmitAddress(expr: [Number], kind: uint8) is
		if (expr.addressSpace != AS_NUMBER) and (expr.addressSpace != kind) then
			SimpleError("mismatched address types");
		end if;
		if kind == AS_IDATA then
			Emit8(expr.number as uint8);
		elseif kind == AS_XDATA then
			Emit16(expr.number);
		else
			BadAddressType();
		end if;
	end sub;

	sub EmitRelAddress(expr: [Number], adjust: int8) is
		var delta := (expr.number as int16) - ([currentProgramCounter] as int16) + (adjust as int16);
		if (delta < -0x80) or (delta > 0x7f) then
			StartError();
			print("relative branch from 0x");
			print_hex_i16([currentProgramCounter]);
			print(" to 0x");
			print_hex_i16(expr.number);
			print(" is out of range");
			EndError();
		end if;
		Emit8(delta as uint8);
	end sub;

	sub CheckIndirectableReg(reg: uint8) is
		if (reg != 0) and (reg != 1) then
			SimpleError("can only indirect through r0 and r1");
		end if;
	end sub;
}

instruction ::= /* empty */.

instruction ::= INSN_SIMPLE(I).
	{ Emit8(I.number as uint8); }

instruction ::= INSN_ABSA(I) expression(E).
	{
		if (E.addressSpace != AS_NUMBER) and (E.addressSpace != AS_XDATA) then
			BadAddressType();
		end if;
		var pc := [currentProgramCounter] + 2;
		if (E.number & 0xfc00) != (pc & 0xfc00) then
			Emit8((I.number as uint8) | 0x01);
			Emit16(E.number);
		else
			Emit8((I.number as uint8) | ((E.number >> 3) as uint8));
			Emit8(E.number as uint8);
		end if;
	}

instruction ::= INSN_ABSL(I) expression(E).
	{ Emit8((I.number as uint8) | 0x01); EmitAddress(&E, AS_XDATA); }

instruction ::= insn_alu(I) REG_A COMMA expression(E).
	{ Emit8((I.number as uint8) | 0x05); EmitAddress(&E, AS_IDATA); }

instruction ::= insn_alu(I) REG_A COMMA HASH expression(E).
	{ Emit8((I.number as uint8) | 0x04); Emit8(E.number as uint8); }

instruction ::= insn_alu(I) REG_A COMMA REG_8(R).
	{ Emit8((I.number as uint8) | (R.number as uint8) | 0x08); }

instruction ::= insn_alu(I) REG_A COMMA AT REG_8(R).
	{ CheckIndirectableReg(R.number as uint8); Emit8((I.number as uint8) | (R.number as uint8) | 0x06); }

instruction ::= INSN_ANL REG_C COMMA expression(E).       { Emit8(0x82); EmitAddress(&E, AS_IDATA); }
instruction ::= INSN_ANL REG_C COMMA SLASH expression(E). { Emit8(0xb0); EmitAddress(&E, AS_IDATA); }

instruction ::= INSN_ANL expression(E1) COMMA HASH expression(E2).
	{ Emit8(0x53); EmitAddress(&E1, AS_IDATA); Emit8(E2.number as uint8); }

instruction ::= INSN_ANL expression(E1) COMMA REG_A.
	{ Emit8(0x52); EmitAddress(&E1, AS_IDATA); }

instruction ::= INSN_EXT_A(I) REG_16(R1) COMMA REG_16(R2).
	{ Emit8(0xa5); Emit16(I.number | ((R1.number & 0x03) << 2) | ((R2.number & 0x03) << 2)); }

instruction ::= INSN_EXT_A(I) REG_16(R1) COMMA AT REG_16(R2).
	{ Emit8(0xa5); Emit16(I.number | 0x0010 | ((R1.number & 0x03) << 2) | ((R2.number & 0x03) << 2)); }

instruction ::= INSN_EXT_A(I) AT REG_16(R1) COMMA REG_16(R2).
	{ Emit8(0xa5); Emit16(I.number | 0x0020 | ((R1.number & 0x03) << 2) | ((R2.number & 0x03) << 2)); }

%type insn_alu {Token}
insn_alu(I) ::= INSN_ALU(T). { I.number := T.number; }
insn_alu(I) ::= INSN_ANL(T). { I.number := T.number; }
insn_alu(I) ::= INSN_ORL(T). { I.number := T.number; }

/* --- cjne -------------------------------------------------------------- */

instruction ::= INSN_CJNE(I) REG_A COMMA HASH expression(E1) COMMA expression(E2).
	{ Emit8((I.number as uint8) | 0x04); Emit8(E1.number as uint8); EmitRelAddress(&E2, -1); }

instruction ::= INSN_CJNE(I) REG_A COMMA expression(E1) COMMA expression(E2).
	{ Emit8((I.number as uint8) | 0x05); EmitAddress(&E1, AS_IDATA); EmitRelAddress(&E2, -1); }

instruction ::= INSN_CJNE(I) REG_8(R) COMMA HASH expression(E1) COMMA expression(E2).
	{ Emit8((I.number as uint8) | (R.number as uint8) | 0x08); Emit8(E1.number as uint8); EmitRelAddress(&E2, -1); }

instruction ::= INSN_CJNE(I) AT REG_8(R) COMMA HASH expression(E1) COMMA expression(E2).
	{ CheckIndirectableReg(R.number as uint8); Emit8((I.number as uint8) | (R.number as uint8) | 0x06);
	  Emit8(E1.number as uint8); EmitRelAddress(&E2, -1); }

