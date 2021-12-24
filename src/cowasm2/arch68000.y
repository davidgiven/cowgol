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

/* dX,dX or -(aX),-(aX) with size mod */
instruction ::= INSN_ADDX(I) mod(M) ea(R1) COMMA ea(R2).
	{
		if (R1.mode != R2.mode) and (R1.mode != AM_REGD) and (R1.mode != AM_PREDEC) then
			InvalidOperand();
		end if;
		var rm: uint16 := 0;
		if R1.mode == AM_PREDEC then
			rm := 1;
		end if;

		Emit16((I.number as uint16) | (R1.reg as uint16)
			| (M as uint16 << 6)
			| (R2.reg as uint16 << 9) | (rm << 3));
	}

%include
{
	sub AluImm(op: uint16, m: uint8, r1: [AddressingMode], r2: [AddressingMode]) is
		Emit16(op
			| (m as uint16 << 6)
			| (r2.mode as uint16)
			| (r2.reg as uint16));
		if m == 2 then
			Emit32(&r1.value);
		else
			MustBeRawNumber(r1.value.type);
			Emit16(r1.value.number as uint16);
		end if;
		EmitX(r2, m);
	end sub;

	sub AddSub(addq: uint16, adda: uint16, addi: uint16, add: uint16,
			m: uint8, r1: [AddressingMode], r2: [AddressingMode]) is
		if (r2.mode == AM_IMM) or (r2.mode == AM_PCDISP) then
			InvalidOperand();
		end if;

		if (r1.mode == AM_IMM)
			and (r1.value.type == AS_NUMBER)
			and (r1.value.number < 8)
			and (addq != 0)
		then
			# addq
			Emit16(addq
				| (r1.value.number as uint16 << 9)
				| (m as uint16 << 6)
				| (r2.mode as uint16)
				| (r2.reg as uint16));
			EmitX(r2, m);
			return;
		end if;

		if r2.mode == AM_REGA then
			# adda
			if adda == 0 then
				InvalidOperand();
			end if;
			Emit16(adda
				| (r2.reg as uint16 << 9)
				| (m as uint16 << 6)
				| (r1.mode as uint16)
				| (r1.reg as uint16));
			EmitX(r1, m);
			return;
		end if;

		if r1.mode == AM_IMM then
			# addi
			AluImm(addi, m, r1, r2);
			return;
		end if;

		if r2.mode == AM_REGD then
			# add ea, dX
			if (r1.mode == AM_REGA) and (adda == 0) then
				InvalidOperand();
			end if;
			Emit16(add
				| (m as uint16 << 6)
				| (r2.reg as uint16 << 9)
				| (r1.mode as uint16)
				| (r1.reg as uint16));
			EmitX(r1, m);
			return;
		end if;

		if r1.mode == AM_REGD then
			# add dX, ea
			Emit16(add
				| 0b0000000100000000
				| (m as uint16 << 6)
				| (r1.reg as uint16 << 9)
				| (r2.mode as uint16)
				| (r2.reg as uint16));
			EmitX(r2, m);
			return;
		end if;

		InvalidOperand();
	end sub;
}

/* All the adds */
instruction ::= INSN_ADDSUB(T) mod(M) ea(R1) COMMA ea(R2).
	{
		case T.number as uint8 is
			when 0:
				AddSub(
					0b0101000000000000, # addq
					0b1101000000000000, # adda
					0b0000011000000000, # addi
					0b1101000000000000, # add
					M, &R1, &R2);

			when 1:
				AddSub(
					0b0101000100000000, # subq
					0b1001000000000000, # suba
					0b0000010000000000, # subi
					0b1001000000000000, # sub
					M, &R1, &R2);

			when 2:
				AddSub(
					0,
					0,
					0b0000001000000000, # andi
					0b1100000000000000, # and
					M, &R1, &R2);

			when 3:
				AddSub(
					0,
					0,
					0b0000000000000000, # ori
					0b1000000000000000, # or
					M, &R1, &R2);

			when 4:
				if (R1.mode != AM_IMM) and (R1.mode != AM_REGD) then
					InvalidOperand();
				end if;
				AddSub(
					0,
					0,
					0b0000101000000000, # eori
					0b1011000100000000, # eor
					M, &R1, &R2);
		end case;
	}

/* Eor is special */
instruction ::= INSN_EOR mod(M) ea(R1) COMMA ea(R2).
	{
		if (R2.mode == AM_PCDISP) or (R2.mode == AM_IMM) or (R2.mode == AM_REGA) then
			InvalidOperand();
		end if;

		if R1.mode == AM_IMM then
			AluImm(0b0000101000000000, M, &R1, &R2);
			return;
		end if;

		if R1.mode == AM_REGD then
			Emit16(0b1011000100000000
				| (M as uint16 << 6)
				| (R1.reg as uint16 << 9)
				| (R2.mode as uint16)
				| (R2.reg as uint16));
			EmitX(&R2, M);
			return;
		end if;

		InvalidOperand();
	}

