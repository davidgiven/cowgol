%token REG_A REG_D REG_PC.

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

ea(R) ::= REG_CCRSR(T).
	{ R.mode := AM_CCR + (T.number as uint8); }

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
		if IsRvalue(r2.mode) == 0 then
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
			if (adda == 0) or (m == 1) then
				InvalidOperand();
			end if;
			Emit16(adda
				| (r2.reg as uint16 << 9)
				| ((m & 0b10) as uint16 << 7)
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

	sub AluSpecial(op: uint16, r1: [AddressingMode]) is
		Emit16(op);
		MustBeRawNumber(r1.value.type);
		Emit16(r1.value.number as uint16);
	end sub;
}

/* All the adds */
instruction ::= INSN_ADDSUB(T) mod(M) ea(R1) COMMA ea(R2).
	{
		case T.number as uint8 is
			when 0: # add
				AddSub(
					0b0101000000000000, # addq
					0b1101000011000000, # adda
					0b0000011000000000, # addi
					0b1101000000000000, # add
					M, &R1, &R2);
				return;

			when 1: # sub
				AddSub(
					0b0101000100000000, # subq
					0b1001000011000000, # suba
					0b0000010000000000, # subi
					0b1001000000000000, # sub
					M, &R1, &R2);
				return;

			when 2: # and
				if R2.mode == AM_CCR then
					AluSpecial(0b0000001000111100, &R1);
					return;
				elseif R2.mode == AM_SR then
					AluSpecial(0b0000001001111100, &R1);
					return;
				end if;

				AddSub(
					0,
					0,
					0b0000001000000000, # andi
					0b1100000000000000, # and
					M, &R1, &R2);
				return;

			when 3: # or
				if R2.mode == AM_CCR then
					AluSpecial(0b0000000000111100, &R1);
					return;
				elseif R2.mode == AM_SR then
					AluSpecial(0b0000000001111100, &R1);
					return;
				end if;

				AddSub(
					0,
					0,
					0b0000000000000000, # ori
					0b1000000000000000, # or
					M, &R1, &R2);
				return;

			when 4: # eor is special
				if R2.mode == AM_CCR then
					AluSpecial(0b0000101000111100, &R1);
					return;
				elseif R2.mode == AM_SR then
					AluSpecial(0b0000101001111100, &R1);
					return;
				end if;

				if IsRvalueD(R2.mode) == 0 then
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

			when 5: # cmp
				AddSub(
					0, # cmpq
					0b1011000011000000, # cmpa
					0b0000110000000000, # cmpi
					0b1011000000000000, # cmp
					M, &R1, &R2);
				return;

		end case;

		InvalidOperand();
	}

/* Shifts */

instruction ::= INSN_ASL(T) mod(M) ea(R1) COMMA ea(R2).
	{
		if (R1.mode == AM_REGD) and (R2.mode == AM_REGD) then
			Emit16(((T.number as uint16 & 0b110) << 2)
				| ((T.number as uint16 & 0b001) << 8)
				| 0b1110000000100000
				| (R1.reg as uint16 << 9)
				| (M as uint16 << 6)
				| (R2.reg as uint16));
		elseif (R1.mode == AM_IMM) and (R2.mode == AM_REGD) then
			MustBeRawNumber(R1.value.type);
			if (R1.value.number == 0) or (R1.value.number > 8) then
				SimpleError("shift out of range");
			end if;
			Emit16(((T.number as uint16 & 0b110) << 2)
				| ((T.number as uint16 & 0b001) << 8)
				| 0b1110000000000000
				| ((R1.value.number as uint16 & 7) << 9)
				| (M as uint16 << 6)
				| (R2.reg as uint16));
		else
			InvalidOperand();
		end if;
	}

instruction ::= INSN_ASL(T) mod(M) ea(R1).
	{
		if M != 1 then
			InvalidOperand();
		end if;

		if IsLvalueM(R1.mode) == 0 then
			InvalidOperand();
		end if;
		Emit16((T.number as uint16 << 8)
			| 0b1110000011000000
			| (R1.mode as uint16)
			| (R1.reg as uint16));
		EmitX(&R1, M);
	}

/* Branches */

instruction ::= INSN_BRA(T) expression(E).
	{
		if pass == 1 then
			[currentProgramCounter] := [currentProgramCounter] + 6;
		else
			var delta: int32;
			if E.type == AS_NUMBER then
				case T.number as uint8 is
					when 0: # bra
						Emit16(0b0100111011111001);

					when 1: # bsr
						Emit16(0b0100111010111001);

					when else: # long conditional
						Emit16(((T.number as uint16 ^ 1) << 8)
							| 0b0110000000000110);
						Emit16(0b0100111010111001); # jmp
				end case;
				Emit32(&E);
				return;
			elseif E.type == currentSegment then
				delta := (E.number - [currentProgramCounter] - 2) as int32;
				if (delta >= -0x80) and (delta <= 0x7f) then
					Emit16((T.number as uint16 << 8)
						| 0b0110000000000000
						| (delta as uint8 as uint16));
				elseif (delta >= -0x8000) and (delta <= 0x7fff) then
					Emit16((T.number as uint16 << 8)
						| 0b0110000000000000);
					Emit16(delta as uint16);
				else
					Emit16(((T.number as uint16 ^ 1) << 8)
						| 0b0110000000000110);
					Emit16(0b0100111010111001);
					Emit32(&E);
				end if;
			end if;
		end if;
	}

/* dbt and friends */

instruction ::= INSN_DBT(T) ea(R) COMMA expression(E).
	{
		if R.mode != AM_REGD then
			InvalidOperand();
		end if;

		if pass == 1 then
			[currentProgramCounter] := [currentProgramCounter] + 10;
		else
			var delta: int32;
			if E.type == AS_NUMBER then
				Emit16((T.number as uint16 ^ 0x100)
					| (R.reg as uint16));
				Emit16(0b0100111010111001); # jmp
				Emit32(&E);
				return;
			elseif E.type == currentSegment then
				delta := (E.number - [currentProgramCounter] - 2) as int32;
				if (delta >= -0x80) and (delta <= 0x7f) then
					Emit16((T.number as uint16)
						| (R.reg as uint16)
						| (delta as uint8 as uint16));
				elseif (delta >= -0x8000) and (delta <= 0x7fff) then
					Emit16((T.number as uint16)
						| (R.reg as uint16));
					Emit16(delta as uint16);
				else
					Emit16((T.number as uint16 ^ 0x100)
						| (R.reg as uint16));
					Emit16(0b0100111010111001); # jmp
					Emit32(&E);
				end if;
				return;
			end if;
		end if;
	}

/* Bit operations */

instruction ::= INSN_BTST(T) ea(R1) COMMA ea(R2).
	{
		if ((R1.mode != AM_IMM) and (R1.mode != AM_REGD))
			or (IsLvalueD(R2.mode) == 0)
		then
			InvalidOperand();
		end if;

		if R1.mode == AM_IMM then
			MustBeRawNumber(R1.value.type);
			Emit16((T.number as uint16 << 6)
				| 0b0000100000000000
				| (R2.mode as uint16)
				| (R2.reg as uint16));
			Emit16(R1.value.number as uint8 as uint16);
			EmitX(&R2, 2);
		else
			Emit16((T.number as uint16 << 6)
				| 0b0000000100000000
				| (R1.reg as uint16 << 9)
				| (R2.mode as uint16)
				| (R2.reg as uint16));
			EmitX(&R2, 0);
		end if;
	}

/* .w ea,dX instructions */

instruction ::= INSN_CHK(T) ea(R1) COMMA ea(R2).
	{
		if (IsLvalueD(R1.mode) == 0) or (R2.mode != AM_REGD) then
			InvalidOperand();
		end if;

		Emit16((T.number as uint16)
			| (R2.reg as uint16 << 9)
			| (R1.mode as uint16)
			| (R1.reg as uint16));
		EmitX(&R1, 1);
	}

/* Multisize uniop instructions */

instruction ::= INSN_NEGX(T) mod(M) ea(R).
	{
		if IsLvalueD(R.mode) == 0 then
			InvalidOperand();
		end if;

		Emit16((T.number as uint16)
			| (M as uint16 << 6)
			| (R.mode as uint16)
			| (R.reg as uint16));
		EmitX(&R, M);
	}

/* Simple one-word instructions. */

instruction ::= INSN_SIMPLE(T).
	{
		Emit16(T.number as uint16);
	}

/* Jumps. */

instruction ::= INSN_JMP(T) ea(R).
	{
		if (R.mode == AM_REGA) or (R.mode == AM_REGD)
			or (R.mode == AM_POSTINC) or (R.mode == AM_PREDEC)
		then
			InvalidOperand();
		end if;

		Emit16((T.number as uint16)
			| (R.mode as uint16)
			| (R.reg as uint16));
		EmitX(&R, 2);
	}

/* Moves. */

instruction ::= INSN_MOVE mod(M) ea(R1) COMMA ea(R2).
	{
		var sizes: uint16[] := { 0b01, 0b11, 0b10 };

		if R2.mode == AM_CCR then
			# move dX, ccr
			if (M != 1) or (IsRvalueD(R1.mode) == 0) then
				InvalidOperand();
			end if;
			Emit16(0b0100010011000000
				| (R1.mode as uint16)
				| (R1.reg as uint16));
			return;
		end if;

		if R2.mode == AM_SR then
			# move dX, ssr
			if (M != 1) or (IsRvalueD(R1.mode) == 0) then
				InvalidOperand();
			end if;
			Emit16(0b0100011011000000
				| (R1.mode as uint16)
				| (R1.reg as uint16));
			return;
		end if;

		if R1.mode == AM_CCR then
			# move ccr, dX
			InvalidOperand();
		end if;

		if R1.mode == AM_SR then
			# move ssr, dX
			if (M != 1) or (IsLvalueD(R2.mode) == 0) then
				InvalidOperand();
			end if;
			Emit16(0b0100000011000000
				| (R2.mode as uint16)
				| (R2.reg as uint16));
			return;
		end if;

		if R2.mode == AM_USP then
			# move aX, usp
			if (M != 2) or (R1.mode != AM_REGA) then
				InvalidOperand();
			end if;
			Emit16(0b0100111001100000
				| (R1.reg as uint16));
			return;
		end if;

		if R1.mode == AM_USP then
			# move usp, aX
			if (M != 2) or (R2.mode != AM_REGA) then
				InvalidOperand();
			end if;
			Emit16(0b0100111001101000
				| (R2.reg as uint16));
			return;
		end if;

		if R2.mode == AM_REGA then
			# movea
			if (M == 0) or (IsLvalue(R1.mode) == 0) then
				InvalidOperand();
			end if;
			Emit16(0b0000000001000000
				| (sizes[M] << 12)
				| (R2.reg as uint16 << 9)
				| (R1.mode as uint16)
				| (R1.reg as uint16));
			return;
		end if;

		if (R1.mode == AM_IMM) and (R1.value.type == AS_NUMBER)
			and (R2.mode == AM_REGD)
			and (IsSignedByte(R1.value.number) != 0)
		then
			# moveq
			if M != 2 then
				InvalidOperand();
			end if;
			Emit16(0b0111000000000000
				| (R2.reg as uint16 << 9)
				| (R1.value.number as uint8 as uint16));
			return;
		end if;

		var m2: uint16 := R2.mode as uint16 & 0b111000;
		var r2: uint16 := R2.mode as uint16 & 0b000111;
		Emit16((sizes[M] << 12)
			| (r2 << 9)
			| (R2.reg as uint16 << 9)
			| (m2 << 3)
			| (R1.mode as uint16)
			| (R1.reg as uint16));
		EmitX(&R1, M);
		EmitX(&R2, M);
	}

/* cmpm is weird. */

instruction ::= INSN_CMPM(T) mod(M) ea(R1) COMMA ea(R2).
	{
		if (R1.mode != AM_POSTINC) or (R2.mode != AM_POSTINC) then
			InvalidOperand();
		end if;

		Emit16((T.number as uint16)
			| (M as uint16 << 6)
			| (R1.reg as uint16 << 9)
			| (R2.reg as uint16));
	}

/* exg is weird. */

instruction ::= INSN_EXG(T) ea(R1) COMMA ea(R2).
	{
		if ((R1.mode != AM_REGD) and (R1.mode != AM_REGA))
			or ((R2.mode != AM_REGD) and (R2.mode != AM_REGA))
		then
			InvalidOperand();
		end if;

		if (R1.mode == AM_REGD) and (R2.mode == AM_REGD) then
			Emit16((T.number as uint16)
				| 0b0000000001000000
				| (R1.reg as uint16 << 9)
				| (R2.reg as uint16));
		elseif (R1.mode == AM_REGA) and (R2.mode == AM_REGA) then
			Emit16((T.number as uint16)
				| 0b0000000001001000
				| (R1.reg as uint16 << 9)
				| (R2.reg as uint16));
		elseif R2.mode == AM_REGA then
			Emit16((T.number as uint16)
				| 0b0000000010001000
				| (R1.reg as uint16 << 9)
				| (R2.reg as uint16));
		else
			Emit16((T.number as uint16)
				| 0b0000000010001000
				| (R2.reg as uint16 << 9)
				| (R1.reg as uint16));
		end if;
	}

/* ext is weird. */

instruction ::= INSN_EXT(T) mod(M) ea(R).
	{
		if (M == 0) or (R.mode != AM_REGD) then
			InvalidOperand();
		end if;

		var mode: uint16 := 0b011;
		if M == 1 then
			mode := 0b010;
		end if;

		Emit16((T.number as uint16)
			| (mode << 6)
			| (R.reg as uint16));
	}

/* lea is weird. */

instruction ::= INSN_LEA(T) ea(R1) COMMA ea(R2).
	{
		if (R1.mode == AM_REGD) or (R1.mode == AM_REGA)
			or (R1.mode == AM_POSTINC) or (R1.mode == AM_PREDEC)
			or (R1.mode == AM_IMM) or (R2.mode != AM_REGA)
		then
			InvalidOperand();
		end if;

		Emit16((T.number as uint16)
			| (R2.reg as uint16 << 9)
			| (R1.mode as uint16)
			| (R1.reg as uint16));
		EmitX(&R1, 2);
	}

/* link is weird. */

instruction ::= INSN_LINK(T) ea(R1) COMMA ea(R2).
	{
		if (R1.mode != AM_REGA) or (R2.mode != AM_IMM) then
			InvalidOperand();
		end if;
		MustBeRawNumber(R2.value.type);
		if R2.value.number > 0xffff then
			SimpleError("displacement out of range");
		end if;

		Emit16((T.number as uint16)
			| (R1.reg as uint16));
		Emit16(R2.value.number as uint16);
	}
