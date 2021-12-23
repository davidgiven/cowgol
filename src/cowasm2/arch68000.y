%token REG_A REG_D REG_PC.
%token INSN_D_PDA.

$include "prologue.yh"

/* --- Elements ---------------------------------------------------------- */

%type mod {uint8}
mod(M) ::= /* empty */.
	{ M := 2; }

mod(M) ::= REG_MOD(T).
	{ M := T.number as uint8; }

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

/*
ea(R) ::= OPENPAREN expression(E) COMMA REG_A(T) COMMA REG_D(X) CLOSEPAREN.
	{ R.mode := AM_AINDEX; R.reg := T.number as uint8;
      R.xreg := X.number as uint8;
      R.value.type := E.type; R.value.number := E.number; }

ea(R) ::= OPENPAREN expression(E) COMMA REG_A(T) COMMA REG_A(X) CLOSEPAREN.
	{ R.mode := AM_AINDEX; R.reg := T.number as uint8;
      R.xreg := X.number as uint8 | 8;
      R.value.type := E.type; R.value.number := E.number; }
*/

ea(R) ::= OPENPAREN expression(E) COMMA REG_PC CLOSEPAREN.
	{ R.mode := AM_PCDISP;
	  R.reg := 0;
      R.value.type := E.type; R.value.number := E.number; }

/*
ea(R) ::= OPENPAREN expression(E) COMMA REG_PC COMMA REG_D(X) CLOSEPAREN.
	{ R.mode := AM_PCINDEX;
	  R.reg := 0;
      R.xreg := X.number as uint8;
      R.value.type := E.type; R.value.number := E.number; }

ea(R) ::= OPENPAREN expression(E) COMMA REG_PC COMMA REG_A(X) CLOSEPAREN.
	{ R.mode := AM_PCINDEX;
	  R.reg := 0;
      R.xreg := X.number as uint8 | 8;
      R.value.type := E.type; R.value.number := E.number; }
*/

ea(R) ::= OPENPAREN expression(E) CLOSEPAREN mod(M).
	{ if M == 0 then
	    SimpleError("byte size not allowed in EA");
	  end if;
      R.mode := AM_ABSW - 1 + M;
	  R.reg := 0;
	  R.value.type := E.type; R.value.number := E.number; }

ea(R) ::= HASH expression(E).
	{ R.mode := AM_IMM;
	  R.reg := 0;
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

/* dX,dX or -(aX),-(aX) only */
instruction ::= INSN_ABCD(I) ea(R1) COMMA ea(R2).
	{
		if (R1.mode != R2.mode) and (R1.mode != AM_REGD) and (R1.mode != AM_PREDEC) then
			InvalidOperand();
		end if;
		var rm: uint16 := 0;
		if R1.mode == AM_PREDEC then
			rm := 1;
		end if;

		Emit16((I.number as uint16) | (R1.reg as uint16)
			| (R2.reg as uint16 << 9) | (rm << 3));
	}

/* All the adds */
instruction ::= INSN_ADD mod(M) ea(R1) COMMA ea(R2).
	{
		if (R2.mode == AM_IMM) or (R2.mode == AM_PCDISP) then
			InvalidOperand();
		end if;

		if (R1.mode == AM_IMM)
			and (R1.value.type == AS_NUMBER)
			and (R1.value.number < 8)
		then
			# addq
			Emit16(0b0101000000000000
				| (R1.value.number as uint16 << 9)
				| (M as uint16 << 6)
				| (R2.mode as uint16)
				| (R2.reg as uint16));
			EmitX(&R2, M);
			return;
		end if;

		if R2.mode == AM_REGA then
			# adda
			Emit16(0b1101000000000000
				| (R2.reg as uint16 << 9)
				| (M as uint16 << 6)
				| (R1.mode as uint16)
				| (R1.reg as uint16));
			EmitX(&R1, M);
			return;
		end if;

		if (R1.mode == AM_IMM) and (R2.mode != AM_REGA) then
			# addi
			Emit16(0b0000011000000000
				| (M as uint16 << 6)
				| (R2.mode as uint16)
				| (R2.reg as uint16));
			if M == 2 then
				Emit32(&R1.value);
			else
				MustBeRawNumber(R1.value.type);
				Emit16(R1.value.number as uint16);
			end if;
			EmitX(&R2, M);
			return;
		end if;

		if R2.mode == AM_REGD then
			# add ea, dX
			Emit16(0b1101000000000000
				| (M as uint16 << 6)
				| (R2.reg as uint16 << 9)
				| (R1.mode as uint16)
				| (R1.reg as uint16));
			EmitX(&R1, M);
			return;
		end if;

		if R1.mode == AM_REGD then
			# add dX, ea
			Emit16(0b1101000100000000
				| (M as uint16 << 6)
				| (R1.reg as uint16 << 9)
				| (R2.mode as uint16)
				| (R2.reg as uint16));
			EmitX(&R2, M);
			return;
		end if;

		SimpleError("bad add");
	}
