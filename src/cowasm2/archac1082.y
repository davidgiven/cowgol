%token EOS NUMBER STRING ID.
%token PERCENT OPENPAREN CLOSEPAREN OPENSQ CLOSESQ.
%token COLON PLUS SLASH STAR MINUS.
%token PIPE CARET COMMA AMPERSAND LSHIFT RSHIFT.
%token OPENBR CLOSEBR TILDE LEOP LTOP GEOP GTOP.
%token EQOP NEOP HASH AT.

%token CPUTYPE.
%token REG_A REG_AB REG_C REG_DPTR REG_8 REG_16.
%token INSN_ABSA.
%token INSN_ABSL.
%token INSN_ALU.
%token INSN_ALU_A.
%token INSN_ANL.
%token INSN_CJNE.
%token INSN_CLR.
%token INSN_CPL.
%token INSN_DJNZ.
%token INSN_EXT_A.
%token INSN_JUST_A.
%token INSN_JUST_AB.
%token INSN_ORL.

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

/* --- ACALL/AJMP -------------------------------------------------------- */

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

/* --- LCALL/LJMP -------------------------------------------------------- */

instruction ::= INSN_ABSL(I) expression(E).
	{ Emit8(I.number as uint8); EmitAddress(&E, AS_XDATA); }

/* --- semi-regular xxx A, something ------------------------------------- */

instruction ::= insn_alu_a(I) REG_A COMMA expression(E).
	{ Emit8((I.number as uint8) | 0x05); EmitAddress(&E, AS_IDATA); }

instruction ::= insn_alu_a(I) REG_A COMMA HASH expression(E).
	{ Emit8((I.number as uint8) | 0x04); Emit8(E.number as uint8); }

instruction ::= insn_alu_a(I) REG_A COMMA REG_8(R).
	{ Emit8((I.number as uint8) | (R.number as uint8) | 0x08); }

instruction ::= insn_alu_a(I) REG_A COMMA AT REG_8(R).
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

%type insn_alu_a {Token}
insn_alu_a(I) ::= INSN_ALU_A(T). { I.number := T.number; }
insn_alu_a(I) ::= INSN_ANL(T). { I.number := T.number; }
insn_alu_a(I) ::= INSN_ORL(T). { I.number := T.number; }

/* --- semi-regular xxx something ---------------------------------------- */

%type insn_alu {Token}
insn_alu(I) ::= INSN_ALU(T). { I.number := T.number; }
insn_alu(I) ::= INSN_INC(T). { I.number := T.number; }

instruction ::= insn_alu(I) REG_A.
	{ Emit8((I.number as uint8) | 0x04); }

instruction ::= insn_alu(I) expression(E).
	{ Emit8((I.number as uint8) | 0x05); EmitAddress(&E, AS_IDATA); }

instruction ::= insn_alu(I) REG_8(R).
	{ Emit8((I.number as uint8) | (R.number as uint8) | 0x08); }

instruction ::= insn_alu(I) AT REG_8(R).
	{ CheckIndirectableReg(R.number as uint8); Emit8((I.number as uint8) | (R.number as uint8) | 0x06); }

instruction ::= INSN_INC REG_DPTR. { Emit8(0xa3); }

/* --- Simple instructions ----------------------------------------------- */

instruction ::= INSN_JUST_A(I) REG_A.
	{ Emit8(I.number as uint8); }

instruction ::= INSN_JUST_AB(I) REG_AB.
	{ Emit8(I.number as uint8); }

instruction ::= INSN_SIMPLE(I).
	{ Emit8(I.number as uint8); }

/* --- CJNE -------------------------------------------------------------- */

instruction ::= INSN_CJNE(I) REG_A COMMA HASH expression(E1) COMMA expression(E2).
	{ Emit8((I.number as uint8) | 0x04); Emit8(E1.number as uint8); EmitRelAddress(&E2, -1); }

instruction ::= INSN_CJNE(I) REG_A COMMA expression(E1) COMMA expression(E2).
	{ Emit8((I.number as uint8) | 0x05); EmitAddress(&E1, AS_IDATA); EmitRelAddress(&E2, -1); }

instruction ::= INSN_CJNE(I) REG_8(R) COMMA HASH expression(E1) COMMA expression(E2).
	{ Emit8((I.number as uint8) | (R.number as uint8) | 0x08); Emit8(E1.number as uint8); EmitRelAddress(&E2, -1); }

instruction ::= INSN_CJNE(I) AT REG_8(R) COMMA HASH expression(E1) COMMA expression(E2).
	{ CheckIndirectableReg(R.number as uint8); Emit8((I.number as uint8) | (R.number as uint8) | 0x06);
	  Emit8(E1.number as uint8); EmitRelAddress(&E2, -1); }

/* --- CLR --------------------------------------------------------------- */

instruction ::= INSN_CLR REG_A.          { Emit8(0xe4); }
instruction ::= INSN_CLR REG_C.          { Emit8(0xc3); }
instruction ::= INSN_CLR expression(E).  { Emit8(0xc2); EmitAddress(&E, AS_IDATA); }

/* --- CPL --------------------------------------------------------------- */

instruction ::= INSN_CPL REG_A.          { Emit8(0xf4); }
instruction ::= INSN_CPL REG_C.          { Emit8(0xb3); }
instruction ::= INSN_CPL expression(E).  { Emit8(0xb2); EmitAddress(&E, AS_IDATA); }

/* --- DJNZ -------------------------------------------------------------- */
instruction ::= INSN_DJNZ(I) expression(E1) COMMA expression(E2).
	{ Emit8((I.number as uint8) | 0x05); EmitAddress(&E1, AS_IDATA); EmitRelAddress(&E2, -1); }

instruction ::= INSN_DJNZ(I) REG_8(R) COMMA expression(E).
	{ Emit8((I.number as uint8) | (R.number as uint8) | 0x08); EmitRelAddress(&E, -1); }

/* --- JB ---------------------------------------------------------------- */

instruction ::= INSN_JB(I) expression(E1) COMMA expression(E2).
	{ Emit8(I.number as uint8); EmitAddress(&E1, AS_IDATA); EmitRelAddress(&E2, -1); }

/* --- J ---------------------------------------------------------------- */

instruction ::= INSN_J(I) expression(E).
	{ Emit8(I.number as uint8); EmitRelAddress(&E, -1); }

/* --- JMP -------------------------------------------------------------- */

instruction ::= INSN_JMP AT REG_A PLUS REG_DPTR.
	{ Emit8(0x73); }

/* --- MOV -------------------------------------------------------------- */

instruction ::= INSN_MOV AT REG_8(R) COMMA HASH expression(E).
	{ CheckIndirectableReg(R.number as uint8); Emit8((R.number as uint8) | 0x76);
	  Emit8(E.number as uint8); }

instruction ::= INSN_MOV AT REG_8(R) COMMA REG_A.
	{ CheckIndirectableReg(R.number as uint8); Emit8((R.number as uint8) | 0xf6); }

instruction ::= INSN_MOV AT REG_8(R) COMMA expression(E).
	{ CheckIndirectableReg(R.number as uint8); Emit8((R.number as uint8) | 0xa6);
	  EmitAddress(&E, AS_IDATA); }

instruction ::= INSN_MOV REG_A COMMA HASH expression(E).
	{ Emit8(0x74); Emit8(E.number as uint8); }

instruction ::= INSN_MOV REG_A COMMA AT REG_8(R).
	{ CheckIndirectableReg(R.number as uint8); Emit8((R.number as uint8) | 0xe6); }

instruction ::= INSN_MOV REG_A COMMA expression(E).
	{ Emit8(0xe5); EmitAddress(&E, AS_IDATA); }

instruction ::= INSN_MOV REG_A COMMA REG_8(R).
	{ Emit8((R.number as uint8) | 0xe8); }

instruction ::= INSN_MOV expression(E) COMMA REG_C.
	{ Emit8(0x92); EmitAddress(&E, AS_IDATA); }

instruction ::= INSN_MOV REG_C COMMA expression(E).
	{ Emit8(0xa2); EmitAddress(&E, AS_IDATA); }

instruction ::= INSN_MOV expression(E1) COMMA expression(E2).
	{ Emit8(0x85); EmitAddress(&E2, AS_IDATA); EmitAddress(&E1, AS_IDATA); }

instruction ::= INSN_MOV expression(E1) COMMA HASH expression(E2).
	{ Emit8(0x75); EmitAddress(&E1, AS_IDATA); Emit8(E2.number as uint8); }

instruction ::= INSN_MOV expression(E) COMMA AT REG_8(R).
	{ CheckIndirectableReg(R.number as uint8); Emit8((R.number as uint8) | 0x86);
	  EmitAddress(&E, AS_IDATA); }

instruction ::= INSN_MOV expression(E) COMMA REG_A.
	{ Emit8(0xf5); EmitAddress(&E, AS_IDATA); }

instruction ::= INSN_MOV expression(E) COMMA REG_8(R).
	{ Emit8((R.number as uint8) | 0x88); EmitAddress(&E, AS_IDATA); }

instruction ::= INSN_MOV REG_DPTR COMMA HASH expression(E).
	{ Emit8(0x90); Emit16(E.number as uint16); }

instruction ::= INSN_MOV REG_8(R) COMMA HASH expression(E).
	{ Emit8((R.number as uint8) | 0x78); Emit8(E.number as uint8); }

instruction ::= INSN_MOV REG_8(R) COMMA REG_A.
	{ Emit8((R.number as uint8) | 0xf8); }

instruction ::= INSN_MOV REG_8(R) COMMA expression(E).
	{ Emit8((R.number as uint8) | 0xa8); EmitAddress(&E, AS_IDATA); }

/* --- MOVC -------------------------------------------------------------- */

instruction ::= INSN_MOVC REG_A COMMA AT REG_A PLUS REG_DPTR.
	{ Emit8(0x93); }

instruction ::= INSN_MOVC REG_A COMMA AT REG_A PLUS REG_PC.
	{ Emit8(0x83); }

/* --- MOVX -------------------------------------------------------------- */

instruction ::= INSN_MOVX AT REG_8(R) COMMA REG_A.
	{ CheckIndirectableReg(R.number as uint8); Emit8((R.number as uint8) | 0xf2); }

instruction ::= INSN_MOVX REG_A COMMA AT REG_DPTR.
	{ Emit8(0xe0); }

instruction ::= INSN_MOVX REG_A COMMA AT REG_8(R).
	{ CheckIndirectableReg(R.number as uint8); Emit8((R.number as uint8) | 0xe2); }

instruction ::= INSN_MOVX AT REG_DPTR COMMA REG_A.
	{ Emit8(0xf0); }


