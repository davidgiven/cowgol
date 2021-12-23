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

$include "prologue.yh"

/* --- Elements ---------------------------------------------------------- */

%type indir {uint8}
indir(I) ::= AT REG_8(R).
	{ I := R.number as uint8; CheckIndirectableReg(I); }

%type const8 {uint8}
const8(C) ::= HASH expression(E).
	{ C := E.number as uint8; }

%type reg16 {uint8}
reg16(R) ::= REG_16(R1).
	{ R := R1.number as uint8; }

/* --- Major pseudoinstructions ------------------------------------------ */

instruction ::= INSN_DB db_list.
instruction ::= INSN_DW dw_list.

db_list ::= expression(E).               { Emit8(E.number as uint8); }
db_list ::= db_list COMMA expression(E). { Emit8(E.number as uint8); }

dw_list ::= expression(E).               { Emit16(E.number); }
dw_list ::= dw_list COMMA expression(E). { Emit16(E.number); }

label ::= /* empty */.
label ::= ID(I) COLON.
	{ SetSymbol(I.string, [currentProgramCounter], AS_XDATA); }

/* --- Instructions ------------------------------------------------------ */

%include
{
	sub BadAddressType() is
		SimpleError("bad address type");
	end sub;

	sub EmitAddress(expr: [Number], kind: uint8) is
		if (expr.type != AS_NUMBER) and (expr.type != kind) then
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

/* --- ACALL/AJMP -------------------------------------------------------- */

instruction ::= INSN_ABSA(I) expression(E).
	{
		if (E.type != AS_NUMBER) and (E.type != AS_XDATA) then
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

instruction ::= insn_alu_a(I) REG_A COMMA indir(R).
	{ Emit8((I.number as uint8) | R | 0x06); }

instruction ::= INSN_ANL REG_C COMMA expression(E).       { Emit8(0x82); EmitAddress(&E, AS_IDATA); }
instruction ::= INSN_ANL REG_C COMMA SLASH expression(E). { Emit8(0xb0); EmitAddress(&E, AS_IDATA); }

instruction ::= INSN_ANL expression(E1) COMMA HASH expression(E2).
	{ Emit8(0x53); EmitAddress(&E1, AS_IDATA); Emit8(E2.number as uint8); }

instruction ::= INSN_ANL expression(E1) COMMA REG_A.
	{ Emit8(0x52); EmitAddress(&E1, AS_IDATA); }

instruction ::= INSN_ORL REG_C COMMA expression(E).       { Emit8(0x72); EmitAddress(&E, AS_IDATA); }
instruction ::= INSN_ORL REG_C COMMA SLASH expression(E). { Emit8(0xa0); EmitAddress(&E, AS_IDATA); }

instruction ::= INSN_ORL expression(E1) COMMA HASH expression(E2).
	{ Emit8(0x43); EmitAddress(&E1, AS_IDATA); Emit8(E2.number as uint8); }

instruction ::= INSN_ORL expression(E1) COMMA REG_A.
	{ Emit8(0x42); EmitAddress(&E1, AS_IDATA); }

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

instruction ::= insn_alu(I) indir(R).
	{ Emit8((I.number as uint8) | R | 0x06); }

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

instruction ::= INSN_CJNE(I) indir(R) COMMA HASH expression(E1) COMMA expression(E2).
	{ Emit8((I.number as uint8) | R | 0x06); Emit8(E1.number as uint8); EmitRelAddress(&E2, -1); }

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

instruction ::= INSN_MOV indir(R) COMMA HASH expression(E).
	{ Emit8(R | 0x76); Emit8(E.number as uint8); }

instruction ::= INSN_MOV indir(R) COMMA REG_A.
	{ Emit8(R | 0xf6); }

instruction ::= INSN_MOV indir(R) COMMA expression(E).
	{ Emit8(R | 0xa6); EmitAddress(&E, AS_IDATA); }

instruction ::= INSN_MOV REG_A COMMA HASH expression(E).
	{ Emit8(0x74); Emit8(E.number as uint8); }

instruction ::= INSN_MOV REG_A COMMA indir(R).
	{ Emit8(R | 0xe6); }

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

instruction ::= INSN_MOV expression(E) COMMA indir(R).
	{ Emit8(R | 0x86); EmitAddress(&E, AS_IDATA); }

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

instruction ::= INSN_MOVX indir(R) COMMA REG_A.
	{ Emit8(R | 0xf2); }

instruction ::= INSN_MOVX REG_A COMMA AT REG_DPTR.
	{ Emit8(0xe0); }

instruction ::= INSN_MOVX REG_A COMMA indir(R).
	{ Emit8(R | 0xe2); }

instruction ::= INSN_MOVX AT REG_DPTR COMMA REG_A.
	{ Emit8(0xf0); }

/* --- just direct ------------------------------------------------------- */

instruction ::= INSN_JUST_D(I) expression(E).
	{ Emit8(I.number as uint8); EmitAddress(&E, AS_IDATA); }

/* --- SETB -------------------------------------------------------------- */

instruction ::= INSN_SETB expression(E).
	{ Emit8(0xd2); Emit8(E.number as uint8); }

instruction ::= INSN_SETB REG_C.
	{ Emit8(0xd3); }

/* --- XCHD -------------------------------------------------------------- */

instruction ::= INSN_XCHD REG_A COMMA indir(I).
	{ Emit8(I | 0xd6); }

/* ======================================================================= */
/*                     AC1082 extended instructions                        */
/* ======================================================================= */

/* --- ri/ri ------------------------------------------------------------- */

instruction ::= INSN_EXT_RI_RI(I) REG_16(R1) COMMA REG_16(R2).
	{ Emit8(0xa5); Emit16(I.number | ((R1.number & 0x03) << 2) | ((R2.number & 0x03) << 2)); }

instruction ::= INSN_EXT_RI_RI(I) REG_16(R1) COMMA AT REG_16(R2).
	{ Emit8(0xa5); Emit16((I.number + 0x0010) | ((R1.number & 0x03) << 2) | ((R2.number & 0x03) << 2)); }

instruction ::= INSN_EXT_RI_RI(I) AT REG_16(R1) COMMA REG_16(R2).
	{ Emit8(0xa5); Emit16((I.number + 0x0020) | ((R1.number & 0x03) << 2) | ((R2.number & 0x03) << 2)); }

/* --- r/ri -------------------------------------------------------------- */

instruction ::= INSN_EXT_R_RI(I) REG_16(R1) COMMA REG_16(R2).
	{ Emit8(0xa5); Emit16(I.number | ((R1.number & 0x03) << 2) | ((R2.number & 0x03) << 2)); }

instruction ::= INSN_EXT_R_RI(I) REG_16(R1) COMMA AT REG_16(R2).
	{ Emit8(0xa5); Emit16((I.number + 0x0010) | ((R1.number & 0x03) << 2) | ((R2.number & 0x03) << 2)); }

/* --- MOVB -------------------------------------------------------------- */

instruction ::= INSN_EXT_MOVB REG_16(R1) COMMA AT REG_16(R2).
	{ Emit8(0xa5); Emit16(0x0250 | ((R1.number & 0x03) << 2) | ((R2.number & 0x03) << 2)); }

instruction ::= INSN_EXT_MOVB AT REG_16(R1) COMMA REG_16(R2).
	{ Emit8(0xa5); Emit16(0x0260 | ((R1.number & 0x03) << 2) | ((R2.number & 0x03) << 2)); }

/* --- LSL --------------------------------------------------------------- */

instruction ::= INSN_EXT_LSL reg16(R1) COMMA const8(C).
	{ Emit8(0xa5); Emit16(0x0300 | ((C & 0x0c) as uint16 << 2) | ((C & 0x03) as uint16) | ((R1 << 2) as uint16)); }

instruction ::= INSN_EXT_LSL reg16(R).
	{ Emit8(0xa5); Emit8(0x34 | R); }

instruction ::= INSN_EXT_LSL AT reg16(R).
	{ Emit8(0xa5); Emit8(0x3c | R); }

/* --- LSR --------------------------------------------------------------- */

instruction ::= INSN_EXT_LSR reg16(R1) COMMA const8(C).
	{ Emit8(0xa5); Emit16(0x0340 | ((C & 0x0c) as uint16 << 2) | ((C & 0x03) as uint16) | ((R1 << 2) as uint16)); }

instruction ::= INSN_EXT_LSR reg16(R).
	{ Emit8(0xa5); Emit8(0x30 | R); }

instruction ::= INSN_EXT_LSR AT reg16(R).
	{ Emit8(0xa5); Emit8(0x38 | R); }

/* --- ASR --------------------------------------------------------------- */

instruction ::= INSN_EXT_ASR reg16(R1) COMMA const8(C).
	{ Emit8(0xa5); Emit16(0x03c0 | ((C & 0x0c) as uint16 << 2) | ((C & 0x03) as uint16) | ((R1 << 2) as uint16)); }

instruction ::= INSN_EXT_ASR reg16(R).
	{ Emit8(0xa5); Emit8(0x40 | R); }

instruction ::= INSN_EXT_ASR AT reg16(R).
	{ Emit8(0xa5); Emit8(0x44 | R); }

/* --- ROTL -------------------------------------------------------------- */

instruction ::= INSN_EXT_ROTL reg16(R1) COMMA const8(C).
	{ Emit8(0xa5); Emit16(0x0380 | ((C & 0x0c) as uint16 << 2) | ((C & 0x03) as uint16) | ((R1 << 2) as uint16)); }

instruction ::= INSN_EXT_ROTL reg16(R).
	{ Emit8(0xa5); Emit8(0x28 | R); }

instruction ::= INSN_EXT_ROTL AT reg16(R).
	{ Emit8(0xa5); Emit8(0x20 | R); }

/* --- ROTR -------------------------------------------------------------- */

instruction ::= INSN_EXT_ROTR reg16(R).
	{ Emit8(0xa5); Emit8(0x28 | R); }

instruction ::= INSN_EXT_ROTR AT reg16(R).
	{ Emit8(0xa5); Emit8(0x20 | R); }

/* --- Two-byte just taking a register ----------------------------------- */

instruction ::= INSN_EXT_JUST_REG(I) reg16(R).
	{ Emit8(0xa5); Emit8((I.number as uint8) | R); }

/* --- Two-byte just taking two registers -------------------------------- */

instruction ::= INSN_EXT_JUST_REGS(I) reg16(R1) COMMA reg16(R2).
	{ Emit8(0xa5); Emit8((I.number as uint8) | (R1 << 2) | R2); }

/* --- MOV --------------------------------------------------------------- */

instruction ::= INSN_EXT_MOV reg16(R1) COMMA reg16(R2).
	{ Emit8(0xa5); Emit8(0x80 | (R1<<2) | R2); }

instruction ::= INSN_EXT_MOV reg16(R1) COMMA AT reg16(R2).
	{ Emit8(0xa5); Emit8(0xa0 | (R1<<2) | R2); }

instruction ::= INSN_EXT_MOV AT reg16(R1) COMMA reg16(R2).
	{ Emit8(0xa5); Emit8(0x90 | (R1<<2) | R2); }

instruction ::= INSN_EXT_MOV AT reg16(R1) COMMA AT reg16(R2).
	{ Emit8(0xa5); Emit8(0xb0 | (R1<<2) | R2); }

/* --- MUL and MULS ------------------------------------------------------ */

instruction ::= INSN_EXT_MUL(I) reg16(R1) COMMA reg16(R2).
	{ Emit8(0xa5); Emit8((I.number as uint8) | (R1 << 2) | R2); }

instruction ::= INSN_EXT_MUL(I) reg16(R1) COMMA AT reg16(R2).
	{ Emit8(0xa5); Emit8((I.number as uint8 + 0x10) | (R1 << 2) | R2); }

/* --- MULWR and MULSWR -------------------------------------------------- */

instruction ::= INSN_EXT_MULWR(I) reg16(R1) COMMA reg16(R2).
	{
		if (R1 != 2) or (R2 != 1) then
			SimpleError("bad registers");
		end if;
		Emit8(0xa5);
		Emit8(I.number as uint8);
	}

