%token REG_A REG_D REG_PC.
%token INSN_D_PDA.

$include "prologue.yh"

/* --- Elements ---------------------------------------------------------- */

%type ea {AddressingMode}

ea(R) ::= REG_A(T).
	{ R.mode := AM_REGA; R.reg := T.number as uint8; }

ea(R) ::= REG_D(T).
	{ R.mode := AM_REGD; R.reg := T.number as uint8; }

ea(R) ::= OPENPAREN REG_A(T) CLOSEPAREN.
	{ R.mode := AM_IND; R.reg := T.number as uint8; }

ea(R) ::= MINUS OPENPAREN REG_A(T) CLOSEPAREN.
	{ R.mode := AM_PREDEC; R.reg := T.number as uint8; }

ea(R) ::= OPENPAREN REG_A(T) CLOSEPAREN PLUS.
	{ R.mode := AM_POSTINC; R.reg := T.number as uint8; }

ea(R) ::= OPENPAREN expression(E) COMMA REG_A(T) CLOSEPAREN.
	{ R.mode := AM_ADISP; R.reg := T.number as uint8;
      R.value.type := E.type; R.value.number := E.number; }

ea(R) ::= OPENPAREN expression(E) COMMA REG_A(T) COMMA REG_D(X) CLOSEPAREN.
	{ R.mode := AM_AINDEX; R.reg := T.number as uint8;
      R.xreg := X.number as uint8;
      R.value.type := E.type; R.value.number := E.number; }

ea(R) ::= OPENPAREN expression(E) COMMA REG_A(T) COMMA REG_A(X) CLOSEPAREN.
	{ R.mode := AM_AINDEX; R.reg := T.number as uint8;
      R.xreg := X.number as uint8 | 8;
      R.value.type := E.type; R.value.number := E.number; }

ea(R) ::= OPENPAREN expression(E) COMMA REG_PC CLOSEPAREN.
	{ R.mode := AM_PCDISP; R.value.type := E.type; R.value.number := E.number; }

ea(R) ::= OPENPAREN expression(E) COMMA REG_PC COMMA REG_D(X) CLOSEPAREN.
	{ R.mode := AM_PCINDEX;
      R.xreg := X.number as uint8;
      R.value.type := E.type; R.value.number := E.number; }

ea(R) ::= OPENPAREN expression(E) COMMA REG_PC COMMA REG_A(X) CLOSEPAREN.
	{ R.mode := AM_PCINDEX;
      R.xreg := X.number as uint8 | 8;
      R.value.type := E.type; R.value.number := E.number; }

ea(R) ::= OPENPAREN expression(E) CLOSEPAREN DOT REG_MOD(M).
	{ R.mode := AM_ABSW + (M.number as uint8);
	  R.value.type := E.type; R.value.number := E.number; }

ea(R) ::= HASH expression(E).
	{ R.mode := AM_IMM;
	  R.value.type := E.type; R.value.number := E.number; }

/* --- Major pseudoinstructions ------------------------------------------ */

label ::= /* empty */.
label ::= ID(I) COLON.
	{ SetSymbol(I.string, [currentProgramCounter], currentSegment); }

instruction ::= INSN_DB db_list.
instruction ::= INSN_DW dw_list.
instruction ::= INSN_DD dd_list.

db_list ::= expression(E).               { Emit8(E.number as uint8); }
db_list ::= db_list COMMA expression(E). { Emit8(E.number as uint8); }

dw_list ::= expression(E).               { Emit16(E.number as uint16); }
dw_list ::= dw_list COMMA expression(E). { Emit16(E.number as uint16); }

dd_list ::= expression(E).               { Emit32(&E); }
dd_list ::= dd_list COMMA expression(E). { Emit32(&E); }

/* --- Instructions ------------------------------------------------------ */

/* dX,dX or --aX,--aX */
instruction ::= INSN_D_PDA(I) ea(R1) COMMA ea(R2).
	{
		if R1.mode != R2.mode then
			SimpleError("invalid operand combination");
		end if;
		var rm: uint16 := 0;
		if R1.mode == AM_PREDEC then
			rm := 1;
		end if;
		Emit16((I.number as uint16) | (R1.reg as uint16)
			| (R2.reg as uint16 << 9) | (rm << 3));
	}


