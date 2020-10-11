/* <<<                                  */
/* Copyright (c) 1994-1996 Arne Riiber. */
/* All rights reserved.                 */
/* >>>                                  */
/*====================================================================*/
/* opfunc.c - functions that execute Motorola 68xx instructions */
/*====================================================================*/

#include <stdio.h>
#include "defs.h"

#ifdef USE_PROTOTYPES
/* Function prototypes */
#include "alu.h"
#include "reg.h"
#include "opfunc.h"
#endif

#include "memory.h"
#include "reg.h"
#include "alu.c"	/* To get inline functions */

#include "symtab.h"
#include "callstac.h"
/*
 *  CCR flag shorthands
 */
#define C	(reg_getcflag())
#define Z	(reg_getzflag())
#define V	(reg_getvflag())
#define N	(reg_getnflag())



/*====================================================================*/
/* opfunc.c - functions that execute Motorola 6800 instructions */
/*====================================================================*/

u_int rti_pc=0;
u_int call_level=0;
/*
 *	Space-savers
 */


/*
 * Functions returning a memory address
 */
int getaddr_dir ()	{return mem_getb (reg_postincpc (1));}
int getaddr_ext ()	{return mem_getw (reg_postincpc (2));}
int getaddr_ix  ()	{return (mem_getb (reg_postincpc (1)) + reg_getix()) & 0xffff;}

/*
 * Functions returning the value of a memory address
 */
int getbyte_imm () {return mem_getb (reg_postincpc (1));}
int getbyte_dir () {return mem_getb (getaddr_dir ());}
int getbyte_ext () {return mem_getb (getaddr_ext ());}
int getbyte_ix  () {return mem_getb (getaddr_ix  ());}
int getword_imm () {return mem_getw (reg_postincpc (2));}
int getword_dir () {return mem_getw (getaddr_dir ());}
int getword_ext () {return mem_getw (getaddr_ext ());}
int getword_ix  () {return mem_getw (getaddr_ix  ());}


/*
 * branch_expr - branch to offset pointed to by pc if expr is true
 */
void branch_expr (int expr)
{
	s_char offs = getbyte_imm ();
	reg_incpc (expr ? offs : 0);
}

/*
 * Stack operators (SP points to current free stack location)
 */
void pushbyte (value) u_char value;	{mem_putb (reg_postdecsp (1), value);}
void pushword (value) u_int value;	{pushbyte (value); pushbyte (value >> 8);}
int popbyte ()
{
	return (mem_getb (reg_preincsp (1)));
}

int popword ()
{
	u_int hibyte = popbyte ();
	u_int lobyte = popbyte ();
	return (hibyte << 8) | lobyte;
}

/*
 * Functions operating on memory address, no advance of PC (except jump class)
 */
void asr_addr (u_int addr)
{
	u_int operand = mem_getb (addr);
	mem_putb (addr, alu_shrbyte (operand, operand & 0x80));
}
void clr_addr (int addr) {mem_putb (addr, alu_clrbyte (mem_getb (addr)));}
void com_addr (int addr) {mem_putb (addr, alu_combyte (mem_getb (addr)));}
void dec_addr (int addr) {mem_putb (addr, alu_decbyte (mem_getb (addr)));}
void jsr_addr (int addr)
{
	pushword (reg_getpc ());	/* Return address */
	reg_setpc (addr);
	callstack_push (addr);		/* subroutine ref. */
	call_level++;
}
void inc_addr (int addr)		{mem_putb (addr, alu_incbyte (mem_getb (addr))); }
void lsl_addr (int addr)		{mem_putb (addr, alu_shlbyte (mem_getb (addr), 0));}
void lsr_addr (int addr)		{mem_putb (addr, alu_shrbyte (mem_getb (addr), 0));}
void neg_addr (int addr)		{mem_putb (addr, alu_negbyte (mem_getb (addr)));}
void rol_addr (int addr)		{mem_putb (addr, alu_shlbyte (mem_getb (addr), C));}
void ror_addr (int addr)		{mem_putb (addr, alu_shrbyte (mem_getb (addr), C));}
void staa_addr (int addr)	{mem_putb (addr, alu_bittestbyte (reg_getacca ()));}
void stab_addr (int addr)	{mem_putb (addr, alu_bittestbyte (reg_getaccb ()));}
void sts_addr (int addr)		{mem_putw (addr, alu_bittestword (reg_getsp ()));}
void stx_addr (int addr)		{mem_putw (addr, alu_bittestword (reg_getix ()));}
void tst_addr (int addr)		{alu_testbyte (mem_getb (addr));}
/*
 * int_addr - generate interrupt at the given vector address
 */
void int_addr (u_int addr)
{
	rti_pc = reg_getpc();

	pushword (reg_getpc ());
	pushword (reg_getix());
	pushbyte (reg_getacca ());
	pushbyte (reg_getaccb ());
	pushbyte (reg_getccr());
	reg_setpc (mem_getw (addr));
	callstack_push (reg_getpc ());               /* new subroutine ref. */
	reg_setiflag (1);
}


/****************************************************************************
 *	Functions simulating CPU instruction execution
 ****************************************************************************/
void aba_inh ()	{reg_setacca (alu_addbyte (reg_getacca (), reg_getaccb (), 0));}

void adca_imm ()	{reg_setacca (alu_addbyte (reg_getacca (), getbyte_imm (), C));}
void adca_dir ()	{reg_setacca (alu_addbyte (reg_getacca (), getbyte_dir (), C));}
void adca_ext ()	{reg_setacca (alu_addbyte (reg_getacca (), getbyte_ext (), C));}
void adca_ind_x ()	{reg_setacca (alu_addbyte (reg_getacca (), getbyte_ix  (), C));}

void adcb_imm ()	{reg_setaccb (alu_addbyte (reg_getaccb (), getbyte_imm (), C));}
void adcb_dir ()	{reg_setaccb (alu_addbyte (reg_getaccb (), getbyte_dir (), C));}
void adcb_ext ()	{reg_setaccb (alu_addbyte (reg_getaccb (), getbyte_ext (), C));}
void adcb_ind_x ()	{reg_setaccb (alu_addbyte (reg_getaccb (), getbyte_ix  (), C));}

void adda_imm ()	{reg_setacca (alu_addbyte (reg_getacca (), getbyte_imm (), 0));}
void adda_dir ()	{reg_setacca (alu_addbyte (reg_getacca (), getbyte_dir (), 0));}
void adda_ext ()	{reg_setacca (alu_addbyte (reg_getacca (), getbyte_ext (), 0));}
void adda_ind_x ()	{reg_setacca (alu_addbyte (reg_getacca (), getbyte_ix  (), 0));}

void addb_imm ()	{reg_setaccb (alu_addbyte (reg_getaccb (), getbyte_imm (), 0));}
void addb_dir ()	{reg_setaccb (alu_addbyte (reg_getaccb (), getbyte_dir (), 0));}
void addb_ext ()	{reg_setaccb (alu_addbyte (reg_getaccb (), getbyte_ext (), 0));}
void addb_ind_x ()	{reg_setaccb (alu_addbyte (reg_getaccb (), getbyte_ix  (), 0));}

void anda_imm ()	{reg_setacca (alu_andbyte (reg_getacca (), getbyte_imm ()));}
void anda_dir ()	{reg_setacca (alu_andbyte (reg_getacca (), getbyte_dir ()));}
void anda_ext ()	{reg_setacca (alu_andbyte (reg_getacca (), getbyte_ext ()));}
void anda_ind_x ()	{reg_setacca (alu_andbyte (reg_getacca (), getbyte_ix ()));}

void andb_imm ()	{reg_setaccb (alu_andbyte (reg_getaccb (), getbyte_imm ()));}
void andb_dir ()	{reg_setaccb (alu_andbyte (reg_getaccb (), getbyte_dir ()));}
void andb_ext ()	{reg_setaccb (alu_andbyte (reg_getaccb (), getbyte_ext ()));}
void andb_ind_x ()	{reg_setaccb (alu_andbyte (reg_getaccb (), getbyte_ix  ()));}

void asr_ext ()	{asr_addr (getaddr_ext ());}
void asr_ind_x ()	{asr_addr (getaddr_ix ());}
void asra_inh ()	{reg_setacca (alu_shrbyte (reg_getacca (), reg_getacca () & 0x80));}
void asrb_inh ()	{reg_setaccb (alu_shrbyte (reg_getaccb (), reg_getaccb () & 0x80));}

void bcc_rel ()	{branch_expr (C == 0);}
void bcs_rel ()	{branch_expr (C);}
void beq_rel ()	{branch_expr (Z);}
void bge_rel ()	{branch_expr ((N ^ V) == 0);}
void bgt_rel ()	{branch_expr ((Z | (N ^ V)) == 0);}
void bhi_rel ()	{branch_expr ((C | Z ) == 0);}

void bita_imm ()	{alu_bittestbyte (reg_getacca () & getbyte_imm ());}
void bita_dir ()	{alu_bittestbyte (reg_getacca () & getbyte_dir ());}
void bita_ext ()	{alu_bittestbyte (reg_getacca () & getbyte_ext ());}
void bita_ind_x ()	{alu_bittestbyte (reg_getacca () & getbyte_ix  ());}

void bitb_imm ()	{alu_bittestbyte (reg_getaccb () & getbyte_imm ());}
void bitb_dir ()	{alu_bittestbyte (reg_getaccb () & getbyte_dir ());}
void bitb_ext ()	{alu_bittestbyte (reg_getaccb () & getbyte_ext ());}
void bitb_ind_x ()	{alu_bittestbyte (reg_getaccb () & getbyte_ix  ());}

void ble_rel ()	{branch_expr ((Z | (N ^ V)) == 1);}
void bls_rel ()	{branch_expr ((C | Z) == 1);}
void blt_rel ()	{branch_expr ((N ^ V) == 1);}
void bmi_rel ()	{branch_expr (N);}
void bne_rel ()	{branch_expr (Z == 0);}
void bpl_rel ()	{branch_expr (N == 0);}
void bra_rel ()	{branch_expr (1);}
void bsr_rel ()
{
	int offs = (s_char) getbyte_imm ();
	jsr_addr (offs + reg_getpc ()); /* preserve pc evaluation order */
}
void bvc_rel ()	{branch_expr (V==0);}
void bvs_rel ()	{branch_expr (V);}

void cba_inh ()	{alu_subbyte (reg_getacca (), reg_getaccb (), 0);}

void clc_inh ()	{reg_setcflag (0);}
void cli_inh ()	{reg_setiflag (0);}

void clr_ext ()	{clr_addr (getaddr_ext ());}
void clr_ind_x ()	{clr_addr (getaddr_ix  ());}
void clra_inh ()	{reg_setacca (alu_clrbyte (reg_getacca ()));}
void clrb_inh ()	{reg_setaccb (alu_clrbyte (reg_getaccb ()));}
void clv_inh ()	{reg_setvflag (0);}

void cmpa_imm ()	{alu_subbyte (reg_getacca (), getbyte_imm (), 0);}
void cmpa_dir ()	{alu_subbyte (reg_getacca (), getbyte_dir (), 0);}
void cmpa_ext ()	{alu_subbyte (reg_getacca (), getbyte_ext (), 0);}
void cmpa_ind_x ()	{alu_subbyte (reg_getacca (), getbyte_ix  (), 0);}

void cmpb_imm ()	{alu_subbyte (reg_getaccb (), getbyte_imm (), 0);}
void cmpb_dir ()	{alu_subbyte (reg_getaccb (), getbyte_dir (), 0);}
void cmpb_ext ()	{alu_subbyte (reg_getaccb (), getbyte_ext (), 0);}
void cmpb_ind_x ()	{alu_subbyte (reg_getaccb (), getbyte_ix  (), 0);}

void com_ext ()	{com_addr (getaddr_ext ());}
void com_ind_x ()	{com_addr (getaddr_ix  ());}
void coma_inh ()	{reg_setacca (alu_combyte (reg_getacca ()));}
void comb_inh ()	{reg_setaccb (alu_combyte (reg_getaccb ()));}

void cpx_imm ()	{alu_subword (reg_getix (), getword_imm (), 0);}
void cpx_dir ()	{alu_subword (reg_getix (), getword_dir (), 0);}
void cpx_ext ()	{alu_subword (reg_getix (), getword_ext (), 0);}
void cpx_ind_x ()	{alu_subword (reg_getix (), getword_ix  (), 0);}

/*
 *  DAA - Decimal adjust sum of 2 BCD digits in A to two BCD nibbles in A
 *
 *  Flags: NZVC
 */
void daa_inh ()
{
	u_int result= reg_getacca ();

	if (reg_gethflag ())
		result+= 0x06;
	if ((result& 0x0f) > 9)
		result+= 6;
	if (C)
		result+= 0x60;
	if ((result& 0xf0) > 0x90)
		result+= 0x60;
	reg_setacca (alu_bittestbyte (result));
	if (result & 0x100)
		reg_setcflag (1);
}

void dec_ext ()	{dec_addr (getaddr_ext ());}
void dec_ind_x ()	{dec_addr (getaddr_ix ());}
void deca_inh ()	{reg_setacca (alu_decbyte (reg_getacca ()));}
void decb_inh ()	{reg_setaccb (alu_decbyte (reg_getaccb ()));}

void des_inh ()	{reg_incsp (-1);}
void dex_inh ()	{reg_setix (alu_decword (reg_getix ()));}

void eora_imm ()	{reg_setacca (alu_xorbyte (reg_getacca (), getbyte_imm ()));}
void eora_dir ()	{reg_setacca (alu_xorbyte (reg_getacca (), getbyte_dir ()));}
void eora_ext ()	{reg_setacca (alu_xorbyte (reg_getacca (), getbyte_ext ()));}
void eora_ind_x ()	{reg_setacca (alu_xorbyte (reg_getacca (), getbyte_ix  ()));}

void eorb_imm ()	{reg_setaccb (alu_xorbyte (reg_getaccb (), getbyte_imm ()));}
void eorb_dir ()	{reg_setaccb (alu_xorbyte (reg_getaccb (), getbyte_dir ()));}
void eorb_ext ()	{reg_setaccb (alu_xorbyte (reg_getaccb (), getbyte_ext ()));}
void eorb_ind_x ()	{reg_setaccb (alu_xorbyte (reg_getaccb (), getbyte_ix  ()));}

void inc_ext ()	{inc_addr (getaddr_ext ());}
void inc_ind_x ()	{inc_addr (getaddr_ix ());}
void inca_inh ()	{reg_setacca (alu_incbyte (reg_getacca ()));}
void incb_inh ()	{reg_setaccb (alu_incbyte (reg_getaccb ()));}
void ins_inh ()	{reg_incsp (1);}
void inx_inh ()	{reg_setix (alu_incword (reg_getix ()));}

void jmp_ext ()	{reg_setpc (getaddr_ext ());}
void jmp_ind_x ()	{reg_setpc (getaddr_ix ());}
void jsr_ext ()	{jsr_addr (getaddr_ext ());}
void jsr_ind_x ()	{jsr_addr (getaddr_ix ());}

void ldaa_imm ()	{reg_setacca (alu_bittestbyte (getbyte_imm ()));}
void ldaa_dir ()	{reg_setacca (alu_bittestbyte (getbyte_dir ()));}
void ldaa_ext ()	{reg_setacca (alu_bittestbyte (getbyte_ext ()));}
void ldaa_ind_x ()	{reg_setacca (alu_bittestbyte (getbyte_ix ()));}

void ldab_imm ()	{reg_setaccb (alu_bittestbyte (getbyte_imm ()));}
void ldab_dir ()	{reg_setaccb (alu_bittestbyte (getbyte_dir ()));}
void ldab_ext ()	{reg_setaccb (alu_bittestbyte (getbyte_ext ()));}
void ldab_ind_x ()	{reg_setaccb (alu_bittestbyte (getbyte_ix ()));}

void lds_imm ()	{reg_setsp (alu_bittestword (getword_imm ()));}
void lds_dir ()	{reg_setsp (alu_bittestword (getword_dir ()));}
void lds_ext ()	{reg_setsp (alu_bittestword (getword_ext ()));}
void lds_ind_x ()	{reg_setsp (alu_bittestword (getword_ix  ()));}

void ldx_imm ()	{reg_setix (alu_bittestword (getword_imm ()));}
void ldx_dir ()	{reg_setix (alu_bittestword (getword_dir ()));}
void ldx_ext ()	{reg_setix (alu_bittestword (getword_ext ()));}
void ldx_ind_x ()	{reg_setix (alu_bittestword (getword_ix  ()));}

void lsl_ext ()	{lsl_addr (getaddr_ext ());}
void lsl_ind_x ()	{lsl_addr (getaddr_ix ());}
void lsla_inh ()	{reg_setacca (alu_shlbyte (reg_getacca (), 0));}
void lslb_inh ()	{reg_setaccb (alu_shlbyte (reg_getaccb (), 0));}
void lsr_ext ()	{lsr_addr (getaddr_ext ());}
void lsr_ind_x ()	{lsr_addr (getaddr_ix ());}
void lsra_inh ()	{reg_setacca (alu_shrbyte (reg_getacca (), 0));}
void lsrb_inh ()	{reg_setaccb (alu_shrbyte (reg_getaccb (), 0));}

void neg_ext ()	{neg_addr (getaddr_ext ());}
void neg_ind_x ()	{neg_addr (getaddr_ix ());}
void nega_inh ()	{reg_setacca (alu_negbyte (reg_getacca ()));}
void negb_inh ()	{reg_setaccb (alu_negbyte (reg_getaccb ()));}
void nop_inh ()	{}
void oraa_imm ()	{reg_setacca (alu_orbyte (reg_getacca (), getbyte_imm ()));}
void oraa_dir ()	{reg_setacca (alu_orbyte (reg_getacca (), getbyte_dir ()));}
void oraa_ext ()	{reg_setacca (alu_orbyte (reg_getacca (), getbyte_ext ()));}
void oraa_ind_x ()	{reg_setacca (alu_orbyte (reg_getacca (), getbyte_ix ()));}

void orab_imm ()	{reg_setaccb (alu_orbyte (reg_getaccb (), getbyte_imm ()));}
void orab_dir ()	{reg_setaccb (alu_orbyte (reg_getaccb (), getbyte_dir ()));}
void orab_ext ()	{reg_setaccb (alu_orbyte (reg_getaccb (), getbyte_ext ()));}
void orab_ind_x ()	{reg_setaccb (alu_orbyte (reg_getaccb (), getbyte_ix  ()));}

void psha_inh ()	{pushbyte (reg_getacca ());}
void pshb_inh ()	{pushbyte (reg_getaccb ());}
void pula_inh ()	{reg_setacca (popbyte ());}
void pulb_inh ()	{reg_setaccb (popbyte ());}

void rol_ext ()	{rol_addr (getaddr_ext ());}
void rol_ind_x ()	{rol_addr (getaddr_ix  ());}
void rola_inh ()	{reg_setacca (alu_shlbyte (reg_getacca (), C));}
void rolb_inh ()	{reg_setaccb (alu_shlbyte (reg_getaccb (), C));}
void ror_ext ()	{ror_addr (getaddr_ext ());}
void ror_ind_x ()	{ror_addr (getaddr_ix ());}
void rora_inh ()	{reg_setacca (alu_shrbyte (reg_getacca (), C));}
void rorb_inh ()	{reg_setaccb (alu_shrbyte (reg_getaccb (), C));}
void rti_inh ()
{
	reg_setccr  (popbyte ());
	reg_setaccb (popbyte ());
	reg_setacca (popbyte ());
	reg_setix   (popword ());
	reg_setpc   (popword ());
	call_level--;
}
void rts_inh ()
{
	reg_setpc (popword ());
	call_level--;
}
void sba_inh ()	{reg_setacca (alu_subbyte (reg_getacca (), reg_getaccb (), 0));}
void sbca_imm ()	{reg_setacca (alu_subbyte (reg_getacca (), getbyte_imm (), C));}
void sbca_dir ()	{reg_setacca (alu_subbyte (reg_getacca (), getbyte_dir (), C));}
void sbca_ext ()	{reg_setacca (alu_subbyte (reg_getacca (), getbyte_ext (), C));}
void sbca_ind_x ()	{reg_setacca (alu_subbyte (reg_getacca (), getbyte_ix  (), C));}
void sbcb_imm ()	{reg_setaccb (alu_subbyte (reg_getaccb (), getbyte_imm (), C));}
void sbcb_dir ()	{reg_setaccb (alu_subbyte (reg_getaccb (), getbyte_dir (), C));}
void sbcb_ext ()	{reg_setaccb (alu_subbyte (reg_getaccb (), getbyte_ext (), C));}
void sbcb_ind_x ()	{reg_setaccb (alu_subbyte (reg_getaccb (), getbyte_ix  (), C));}
void sec_inh ()	{reg_setcflag (1);}
void sei_inh ()	{reg_setiflag (1);}
void sev_inh ()	{reg_setvflag (1);}

void staa_dir ()	{staa_addr (getaddr_dir ());}
void staa_ext ()	{staa_addr (getaddr_ext ());}
void staa_ind_x ()	{staa_addr (getaddr_ix ());}
void stab_dir ()	{stab_addr (getaddr_dir ());}
void stab_ext ()	{stab_addr (getaddr_ext ());}
void stab_ind_x ()	{stab_addr (getaddr_ix  ());}
void sts_dir ()	{sts_addr (getaddr_dir ());}
void sts_ext ()	{sts_addr (getaddr_ext ());}
void sts_ind_x ()	{sts_addr (getaddr_ix  ());}
void stx_dir ()	{stx_addr (getaddr_dir ());}
void stx_ext ()	{stx_addr (getaddr_ext ());}
void stx_ind_x ()	{stx_addr (getaddr_ix ());}

void suba_imm ()	{reg_setacca (alu_subbyte (reg_getacca (), getbyte_imm (), 0));}
void suba_dir ()	{reg_setacca (alu_subbyte (reg_getacca (), getbyte_dir (), 0));}
void suba_ext ()	{reg_setacca (alu_subbyte (reg_getacca (), getbyte_ext (), 0));}
void suba_ind_x ()	{reg_setacca (alu_subbyte (reg_getacca (), getbyte_ix  (), 0));}

void subb_imm ()	{reg_setaccb (alu_subbyte (reg_getaccb (), getbyte_imm (), 0));}
void subb_dir ()	{reg_setaccb (alu_subbyte (reg_getaccb (), getbyte_dir (), 0));}
void subb_ext ()	{reg_setaccb (alu_subbyte (reg_getaccb (), getbyte_ext (), 0));}
void subb_ind_x ()	{reg_setaccb (alu_subbyte (reg_getaccb (), getbyte_ix  (), 0));}

void swi_inh ()	{int_addr (SWIVECTOR);}
void tab_inh ()	{reg_setaccb (alu_bittestbyte (reg_getacca ()));}
void tap_inh ()	{reg_setccr (reg_getacca ());}
void tba_inh ()	{reg_setacca (alu_bittestbyte (reg_getaccb()));}
void tpa_inh ()	{reg_setacca (reg_getccr ());}
/*
 * trap - called when an unknown opcode is found
 *
 * 6301 fetches trap vector at $FFEE,
 * hope 6800 does the same
 */
void trap ()
{
	u_int  routine = callstack_peek_addr ();
	char  * p = sym_find_name (routine);

	warning ("trap: pc:%04x\nSubroutine: %04x %s\n",
		 reg_getpc (), routine, p ? p : "");
	int_addr (0xffee); /* Trap vector 6301 */
}
void tst_ext ()	{alu_testbyte (getbyte_ext ());}
void tst_ind_x ()	{alu_testbyte (getbyte_ix ());}
void tsta_inh ()	{alu_testbyte (reg_getacca ());}
void tstb_inh ()	{alu_testbyte (reg_getaccb ());}
void tsx_inh ()	{reg_setix (reg_getsp () + 1);}
void txs_inh ()	{reg_setsp (reg_getix () - 1);}
void wai_inh ()
{
/*
 *	clock (12);
 *	while (no_interrupts)
 *		clock (1);
 */
}

/*====================================================================*/
/* 6801 extensions to 6800 */
/*====================================================================*/

void abx_inh ()    {reg_setix (reg_getix () + reg_getaccb ());}
void addd_imm ()   {reg_setaccd (alu_addword (reg_getaccd () ,getword_imm (), 0));}
void addd_dir ()   {reg_setaccd (alu_addword (reg_getaccd () ,getword_dir (), 0));}
void addd_ext ()   {reg_setaccd (alu_addword (reg_getaccd () ,getword_ext (), 0));}
void addd_ind_x () {reg_setaccd (alu_addword (reg_getaccd () ,getword_ix  (), 0));}
void asld_inh ()   {lsld_inh ();}	/*  Equal to Logical Shift Left */
void brn_rel ()    {branch_expr (0);}
void jsr_dir ()    {jsr_addr (getaddr_dir ());}
void ldd_imm ()    {reg_setaccd (alu_bittestword (getword_imm ()));}
void ldd_dir ()    {reg_setaccd (alu_bittestword (getword_dir ()));}
void ldd_ext ()    {reg_setaccd (alu_bittestword (getword_ext ()));}
void ldd_ind_x ()  {reg_setaccd (alu_bittestword (getword_ix ()));}
void lsld_inh ()   {reg_setaccd (alu_shlword (reg_getaccd (), 0));}
void lsrd_inh ()   {reg_setaccd (alu_shrword (reg_getaccd (), 0));}
void mul_inh ()
{
	reg_setaccd (reg_getacca () * reg_getaccb ());
	reg_setcflag (reg_getaccb () & 0x80);
}
void pshx_inh ()	{pushword (reg_getix ());}
void pulx_inh ()	{reg_setix (popword ());}
void std_dir ()	{mem_putw (getaddr_dir (), alu_bittestword (reg_getaccd ()));}
void std_ext ()	{mem_putw (getaddr_ext (), alu_bittestword (reg_getaccd ()));}
void std_ind_x ()	{mem_putw (getaddr_ix (),  alu_bittestword (reg_getaccd ()));}
void subd_imm ()   {reg_setaccd (alu_subword (reg_getaccd (), getword_imm (), 0));}
void subd_dir ()   {reg_setaccd (alu_subword (reg_getaccd (), getword_dir (), 0));}
void subd_ext ()   {reg_setaccd (alu_subword (reg_getaccd (), getword_ext (), 0));}
void subd_ind_x () {reg_setaccd (alu_subword (reg_getaccd (), getword_ix  (), 0));}

#ifndef M6805 /* 6805 does not use these */

/*====================================================================*/
/* h6301/opfunc.c - functions that execute 6301 specific instructions */
/*====================================================================*/

/* 6301 = 6801 + aim/eim/oim/tim/xgdx/slp */

/*
 *  M op IMM -> M		NZ,V=0
 *
 * where op is one of aim/eim/oim/tim,
 * has the following memory layout:
 *
 * dir	: mem = (opcode,imm,addr)
 * ind_x: mem = (opcode,imm,offs)
 *			^
 *			|
 *			+--- mem[cpu.pc]
 */


/*
 *  aim - And Immediate with Memory
 */
void aim_dir ()
{
	u_int immed	= mem_getb (reg_getpc());
	u_int addr	= mem_getb (reg_getpc() + 1);

	mem_putb (addr, alu_andbyte (immed, mem_getb (addr)));
	reg_incpc (2);
}

void aim_ind_x ()
{
	u_int immed	= mem_getb (reg_getpc());
	u_int offs	= mem_getb (reg_getpc() + 1);
	u_int addr	= reg_getix() + offs;

	mem_putb (addr, alu_andbyte (immed, mem_getb (addr)));
	reg_incpc (2);
}


/*
 * eim - Exclusive or Immediate with Memory
 */
void eim_dir ()
{
	u_int immed	= mem_getb (reg_getpc());
	u_int addr	= mem_getb (reg_getpc() + 1);

	mem_putb (addr, alu_xorbyte (immed, mem_getb (addr)));
	reg_incpc (2);
}

void eim_ind_x ()
{
	u_int immed	= mem_getb (reg_getpc());
	u_int offs	= mem_getb (reg_getpc() + 1);
	u_int addr	= reg_getix() + offs;

	mem_putb (addr, alu_xorbyte (immed, mem_getb (addr)));
	reg_incpc (2);
}


/*
 * oim - Or (inclusive) Immediate with Memory
 */
void oim_dir ()
{
	u_int immed	= mem_getb (reg_getpc());
	u_int addr	= mem_getb (reg_getpc() + 1);

	mem_putb (addr, alu_orbyte (immed, mem_getb (addr)));
	reg_incpc (2);
}

void oim_ind_x ()
{
	u_int immed	= mem_getb (reg_getpc());
	u_int offs	= mem_getb (reg_getpc() + 1);
	u_int addr	= reg_getix() + offs;

	mem_putb (addr, alu_orbyte (immed, mem_getb (addr)));
	reg_incpc (2);
}


/*
 * tim - Test Immediate with Memory
 */
void tim_dir ()
{
	u_int immed	= mem_getb (reg_getpc());
	u_int addr	= mem_getb (reg_getpc() + 1);

	alu_andbyte (immed, mem_getb (addr));
	reg_incpc (2);
}

void tim_ind_x ()
{
	u_int immed	= mem_getb (reg_getpc());
	u_int offs	= mem_getb (reg_getpc() + 1);
	u_int addr	= reg_getix() + offs;

	alu_andbyte (immed, mem_getb (addr));
	reg_incpc (2);
}


void xgdx_inh ()
{
	u_int old_x = reg_getix();
	reg_setix (reg_getaccd ());
	reg_setaccd (old_x);
}

void slp_inh ()
{
	/* cpu.state = sleep; */
}

#endif

#ifdef M6811
/*====================================================================*/
/* opfunc.c - 6811 functions executing opcodes */
/*====================================================================*/

/*
 * On entry, pc points to operand
 */

/*
 * Functions returning a memory address
 */
int getaddr_iy  ()	{return (mem_getb (reg_postincpc (1)) + reg_getiy ()) & 0xffff;}

/*
 * Functions returning the value of a memory address
 */
int getbyte_iy  () { return mem_getb (getaddr_iy ());}
int getword_iy  () { return mem_getw (getaddr_iy ());}


/*
 *	Space savers
 */

/*
 * xxx_addr routines differ from 6800 in that PC is incremented
 * for those instructions that require more than operand
 */

/*
 * bset_addr - set bits in 'mask' operand for the byte at address 'addr'
 */
void bset_addr (addr)
	u_int addr;
{
	u_char mask = getbyte_imm ();
	mem_putb (addr, alu_orbyte (mem_getb (addr), mask));
}

/*
 * bclr_addr - clear bits in 'mask' operand for the byte at address 'addr'
 */
void bclr_addr (addr)
	u_int addr;
{
	u_char mask = getbyte_imm ();
	mem_putb (addr, alu_andbyte (mem_getb (addr), ~mask));
}

void int_6811 (addr)
	u_int addr;
{
	pushword (reg_getpc ());
	pushword (reg_getiy ());
	pushword (reg_getix ());
	pushbyte (reg_getacca ());
	pushbyte (reg_getaccb ());
	pushbyte (reg_getccr ());
	reg_setpc (mem_getw (addr));
	callstack_push (reg_getpc ());               /* new subroutine ref. */
	reg_setiflag (1);
}

/*
 * ABY - Add B to Y (set no flags)
 */
void aby_inh ()	{reg_setiy (reg_getiy () + reg_getaccb ());}

void adca_ind_y ()	{reg_setacca (alu_addbyte (reg_getacca (), getbyte_iy (), C));}
void adcb_ind_y ()	{reg_setaccb (alu_addbyte (reg_getaccb (), getbyte_iy (), C));}
void adda_ind_y ()	{reg_setacca (alu_addbyte (reg_getacca (), getbyte_iy (), 0));}
void addb_ind_y ()	{reg_setaccb (alu_addbyte (reg_getaccb (), getbyte_iy (), 0));}
void addd_ind_y ()	{reg_setaccd (alu_addword (reg_getaccd (), getword_iy (), 0));}
void anda_ind_y ()	{reg_setacca (alu_andbyte (reg_getacca (), getbyte_iy ()));}
void andb_ind_y ()	{reg_setaccb (alu_andbyte (reg_getaccb (), getbyte_iy ()));}
void asl_ind_y ()	{lsl_ind_y ();}
void asr_ind_y ()	{asr_addr (getaddr_iy ());}

/*
 * bclr m,n - clr bits in bitmask 'n' of location 'm'
 */
void bclr_dir ()	{bclr_addr (getaddr_dir ());}
void bclr_ind_x ()	{bclr_addr (getaddr_ix ());}
void bclr_ind_y ()	{bclr_addr (getaddr_iy ());}

/*
 * Bit Test A with Memory, set N, Z, V flags
 */
void bita_ind_y ()	{alu_bittestbyte (reg_getacca () & getbyte_iy ());}
void bitb_ind_y ()	{alu_bittestbyte (reg_getaccb () & getbyte_iy ());}

/*
 * brclr m,n,r - branch relative offset 'r' if the bits in bitmask 'n'
 *		 of location 'm' are zero
 */
void brclr_dir ()	{branch_expr (!(getbyte_dir () & getbyte_imm ()));}
void brclr_ind_x ()	{branch_expr (!(getbyte_ix  () & getbyte_imm ()));}
void brclr_ind_y ()	{branch_expr (!(getbyte_iy  () & getbyte_imm ()));}

/*
 * brset m,n,r - branch relative offset 'r' if the bits in bitmask 'n'
 *		 of location 'm' are set
 */
void brset_dir ()	{branch_expr (getbyte_dir () & getbyte_imm ());}
void brset_ind_x ()	{branch_expr (getbyte_ix  () & getbyte_imm ());}
void brset_ind_y ()	{branch_expr (getbyte_iy  () & getbyte_imm ());}


/*
 * bset m,n - set bits in bitmask 'n' of location 'm'
 */
void bset_dir ()	{bset_addr (getaddr_dir ());}
void bset_ind_x ()	{bset_addr (getaddr_ix ());}
void bset_ind_y ()	{bset_addr (getaddr_iy ());}

void clr_ind_y ()	{clr_addr (getaddr_iy ());}

void cmpa_ind_y ()	{alu_subbyte (reg_getacca (), getbyte_iy (), 0);}
void cmpb_ind_y ()	{alu_subbyte (reg_getaccb (), getbyte_iy (), 0);}
void com_ind_y ()	{com_addr    (getaddr_iy ());}
void cpd_imm ()	{alu_subword (reg_getaccd (), getword_imm (), 0);}
void cpd_dir ()	{alu_subword (reg_getaccd (), getword_dir (), 0);}
void cpd_ext ()	{alu_subword (reg_getaccd (), getword_ext (), 0);}
void cpd_ind_x ()	{alu_subword (reg_getaccd (), getword_ix  (), 0);}
void cpd_ind_y ()	{alu_subword (reg_getaccd (), getword_iy  (), 0);}
void cpx_ind_y ()	{alu_subword (reg_getix (),   getword_iy  (), 0);}
void cpy_imm ()	{alu_subword (reg_getiy (),   getword_imm (), 0);}
void cpy_dir ()	{alu_subword (reg_getiy (),   getword_dir (), 0);}
void cpy_ext ()	{alu_subword (reg_getiy (),   getword_ext (), 0);}
void cpy_ind_x ()	{alu_subword (reg_getiy (),   getword_ix  (), 0);}
void cpy_ind_y ()	{alu_subword (reg_getiy (),   getword_iy  (), 0);}
void dec_ind_y ()	{dec_addr    (getaddr_iy ());}
void dey_inh ()	{reg_setiy   (alu_decword (reg_getiy ()));}
void eora_ind_y ()	{reg_setacca (alu_xorbyte (reg_getacca (), getbyte_iy ()));}
void eorb_ind_y ()	{reg_setaccb (alu_xorbyte (reg_getaccb (), getbyte_iy ()));}

/*
 *  IDIV - Integer divide
 *
 *  D/X -> X, D%X -> D		Z,V=0,C
 *
 *  partially implemented - enough for most cases
 */
void idiv_inh ()
{
	u_int d = reg_getaccd ();
	u_int x = reg_getix ();
	u_int result;

	reg_setvflag (0);

	if (x == 0)
	{
		reg_setix (-1);
		reg_setaccd (0);
		reg_setcflag (1);
		return;
	}

	reg_setix (d / x);
	result = d % x;
	reg_setaccd (result);
	reg_setzflag (result == 0);
	reg_setcflag (result > 65535); /* 0 */
}


/*
 *  FDIV - Fractional divide 16 by 16 (partially implemented)
 *
 *  Not sure about flags here - should be tested!
 *  Is C to be computed from d/x or d%x?
 *
 *  D/X -> X, D%X -> D		ZVC
 *
 *  partially implemented - enough for most cases
 */
void fdiv_inh ()
{
	u_int d = reg_getaccd ();
	u_int x = reg_getix ();


	if (d > x)
	{
		reg_setvflag (1);
		return;
	}

	reg_setix    ((d << 16) / x);
	reg_setaccd  ((d << 16) % x);
	reg_setzflag (reg_getaccd() == 0);
	reg_setvflag ((d & 0x8000) == (x & 0x8000) &&
		      (x & 0x8000) != (reg_getaccd() & 0x8000));
	reg_setcflag (reg_getaccd() > 65535); /* 0 */
}

void inc_ind_y ()	{inc_addr  (getaddr_iy ());}
void iny_inh ()	{reg_setiy (alu_incword (reg_getiy ()));}

void jmp_ind_y ()	{reg_setpc (getaddr_iy ());}
void jsr_ind_y ()	{jsr_addr  (getaddr_iy ());}

void ldaa_ind_y ()	{reg_setacca (alu_bittestbyte (getbyte_iy ()));}
void ldab_ind_y ()	{reg_setaccb (alu_bittestbyte (getbyte_iy ()));}
void ldd_ind_y ()	{reg_setaccd (alu_bittestword (getword_iy ()));}
void ldx_ind_y ()	{reg_setix (alu_bittestword (getword_iy ()));}
void lds_ind_y ()	{reg_setsp (alu_bittestword (getword_iy ()));}
void ldy_imm ()	{reg_setiy (alu_bittestword (getword_imm ()));}
void ldy_dir ()	{reg_setiy (alu_bittestword (getword_dir ()));}
void ldy_ext ()	{reg_setiy (alu_bittestword (getword_ext ()));}
void ldy_ind_x ()	{reg_setiy (alu_bittestword (getword_ix ()));}
void ldy_ind_y ()	{reg_setiy (alu_bittestword (getword_iy ()));}
void lsl_ind_y ()	{lsl_addr  (getaddr_iy ());}
void lsr_ind_y ()	{lsr_addr  (getaddr_iy ());}
void neg_ind_y ()	{neg_addr  (getaddr_iy ());}
void oraa_ind_y ()	{reg_setacca (alu_orbyte (reg_getacca (), getbyte_iy ()));}
void orab_ind_y ()	{reg_setaccb (alu_orbyte (reg_getaccb (), getbyte_iy ()));}
void pshy_inh ()	{pushword (reg_getiy ());}
void puly_inh ()	{reg_setiy (popword ());}
void rol_ind_y ()	{rol_addr (getaddr_iy ());}
void ror_ind_y ()	{ror_addr (getaddr_iy ());}
void rti_6811 ()
{
	reg_setccr (popbyte ());
	reg_setaccb (popbyte ());
	reg_setacca (popbyte ());
	reg_setix (popword ());
	reg_setiy (popword ());
	reg_setpc (popword ());
}
void sbca_ind_y ()	{reg_setacca (alu_subbyte (reg_getacca (), getbyte_iy (), 0));}
void sbcb_ind_y ()	{reg_setaccb (alu_subbyte (reg_getaccb (), getbyte_iy (), 0));}
void staa_ind_y ()	{mem_putb (getaddr_iy  (), alu_bittestbyte (reg_getacca ()));}
void stab_ind_y ()	{mem_putb (getaddr_iy  (), alu_bittestbyte (reg_getaccb ()));}
void std_ind_y ()	{mem_putw (getaddr_iy  (), alu_bittestword (reg_getaccd ()));}
void sts_ind_y ()	{mem_putw (getaddr_iy  (), alu_bittestword (reg_getsp ()));}
void stx_ind_y ()	{mem_putw (getaddr_iy  (), alu_bittestword (reg_getix ()));}
void sty_dir ()	{mem_putw (getaddr_dir (), alu_bittestword (reg_getiy ()));}
void sty_ext ()	{mem_putw (getaddr_ext (), alu_bittestword (reg_getiy ()));}
void sty_ind_x ()	{mem_putw (getaddr_ix  (), alu_bittestword (reg_getiy ()));}
void sty_ind_y ()	{mem_putw (getaddr_iy  (), alu_bittestword (reg_getiy ()));}
void stop_inh ()	{reg_setpc (reg_getpc () - 1);}	/* Infinite loop */
void suba_ind_y ()	{reg_setacca (alu_subbyte (reg_getacca (), getbyte_iy (), 0));}
void subb_ind_y ()	{reg_setaccb (alu_subbyte (reg_getaccb (), getbyte_iy (), 0));}
void subd_ind_y ()	{reg_setaccd (alu_subword (reg_getaccd (), getword_iy (), 0));}
void swi_6811 ()	{int_6811 (0xfff6);}
void test_inh ()	{reg_setpc (reg_getpc () -1);} /* Infinite loop */
void trap_6811 ()
{
	u_int  routine = callstack_peek_addr ();
	char  *p       = (char *) sym_find_name (routine);

	warning ("trap: pc:%04x\nSubroutine: %04x %s\n",
		 reg_getpc (), routine, p ? p : "");
	int_6811 (0xfff8);
}
void tst_ind_y ()	{alu_testbyte (getbyte_iy ());}
void tsy_inh ()	{reg_setiy (reg_getsp () + 1);}
void tys_inh ()	{reg_setsp (reg_getiy () - 1);}
void xgdy_inh ()
{
	u_int old_y = reg_getiy ();
	reg_setiy (reg_getaccd ());
	reg_setaccd (old_y);
}
#endif

#ifdef M6805 /* compiling for M6805 */

/*====================================================================*/
/* m6805instr.c - 6805 specific instructions */
/*====================================================================*/

/*
 * Functions returning an address (6805 specific address modes)
 */
getaddr_ix0 () {return reg_getix ();}
getaddr_ix1 () {return reg_getix () + getbyte_imm ();} /* incs pc w/1 */
getaddr_ix2 () {return reg_getix () + getword_imm ();} /* incs pc w/2 */

/*
 * Functions returning the value of a memory address
 */
getbyte_ix0 () {return mem_getb (getaddr_ix0 ());}
getbyte_ix1 () {return mem_getb (getaddr_ix1 ());}
getbyte_ix2 () {return mem_getb (getaddr_ix2 ());}

/* set/clear bit 'm' of address 'addr' */
bset_bit (addr, m) {mem_putb (addr, mem_getb (addr) |  (1 << m));}
bclr_bit (addr, m) {mem_putb (addr, mem_getb (addr) & ~(1 << m));}

getirq ()
{
    while (1)
    {
        printf ("\nIRQ line status (0,1): ");
        fflush (stdout);
        switch (getchar ())
        {
            case '0':
                return 0;
            case '1':
                return 1;
        }
    }
}

/*
 * CPU simulating functions
 */
adc_ix0 () {reg_setacca (alu_addbyte (reg_getacca (), getbyte_ix0 (), C));}
adc_ix1 () {reg_setacca (alu_addbyte (reg_getacca (), getbyte_ix1 (), C));}
adc_ix2 () {reg_setacca (alu_addbyte (reg_getacca (), getbyte_ix2 (), C));}

add_ix0 () {reg_setacca (alu_addbyte (reg_getacca (), getbyte_ix0 (), 0));}
add_ix1 () {reg_setacca (alu_addbyte (reg_getacca (), getbyte_ix1 (), 0));}
add_ix2 () {reg_setacca (alu_addbyte (reg_getacca (), getbyte_ix2 (), 0));}

and_ix0 () {reg_setacca (alu_andbyte (reg_getacca (), getbyte_ix0 ())); }
and_ix1 () {reg_setacca (alu_andbyte (reg_getacca (), getbyte_ix1 ())); }
and_ix2 () {reg_setacca (alu_andbyte (reg_getacca (), getbyte_ix2 ())); }

asl_ix0 () { lsl_addr (getaddr_ix0 ());}
asl_ix1 () { lsl_addr (getaddr_ix1 ());}
asl_ix2 () { lsl_addr (getaddr_ix2 ());}
asl_dir () { lsl_addr (getaddr_dir ());}
aslx_inh() { reg_setix (alu_shlbyte (reg_getix (), 0)); }

asr_ix0 () { asr_addr (getaddr_ix0 ());}
asr_ix1 () { asr_addr (getaddr_ix1 ());}
asr_ix2 () { asr_addr (getaddr_ix2 ());}
asr_dir () { asr_addr (getaddr_dir ());}
asrx_inh() {
	u_char msbit = reg_getix () & 0x80;
	reg_setix (alu_shrbyte (reg_getix (), msbit));
}

/* brset n dir,offs - Branch if bit 'n' of location 'dir' is set */
brset0_btb () {branch_expr (getbyte_dir () & (1 << 0));}
brset1_btb () {branch_expr (getbyte_dir () & (1 << 1));}
brset2_btb () {branch_expr (getbyte_dir () & (1 << 2));}
brset3_btb () {branch_expr (getbyte_dir () & (1 << 3));}
brset4_btb () {branch_expr (getbyte_dir () & (1 << 4));}
brset5_btb () {branch_expr (getbyte_dir () & (1 << 5));}
brset6_btb () {branch_expr (getbyte_dir () & (1 << 6));}
brset7_btb () {branch_expr (getbyte_dir () & (1 << 7));}

/* brclr n dir,offs - Branch if bit 'n' of location 'dir' is zero */
brclr0_btb () {branch_expr (!(getbyte_dir () & (1 << 0)));}
brclr1_btb () {branch_expr (!(getbyte_dir () & (1 << 1)));}
brclr2_btb () {branch_expr (!(getbyte_dir () & (1 << 2)));}
brclr3_btb () {branch_expr (!(getbyte_dir () & (1 << 3)));}
brclr4_btb () {branch_expr (!(getbyte_dir () & (1 << 4)));}
brclr5_btb () {branch_expr (!(getbyte_dir () & (1 << 5)));}
brclr6_btb () {branch_expr (!(getbyte_dir () & (1 << 6)));}
brclr7_btb () {branch_expr (!(getbyte_dir () & (1 << 7)));}

/* bset m,n - set bit m of location n */
bset0_bsc () {bset_bit (getaddr_dir (), 0);}
bset1_bsc () {bset_bit (getaddr_dir (), 1);}
bset2_bsc () {bset_bit (getaddr_dir (), 2);}
bset3_bsc () {bset_bit (getaddr_dir (), 3);}
bset4_bsc () {bset_bit (getaddr_dir (), 4);}
bset5_bsc () {bset_bit (getaddr_dir (), 5);}
bset6_bsc () {bset_bit (getaddr_dir (), 6);}
bset7_bsc () {bset_bit (getaddr_dir (), 7);}

/* bclr m,n - clr bit m of location n */
bclr0_bsc () {bclr_bit (getaddr_dir (), 0);}
bclr1_bsc () {bclr_bit (getaddr_dir (), 1);}
bclr2_bsc () {bclr_bit (getaddr_dir (), 2);}
bclr3_bsc () {bclr_bit (getaddr_dir (), 3);}
bclr4_bsc () {bclr_bit (getaddr_dir (), 4);}
bclr5_bsc () {bclr_bit (getaddr_dir (), 5);}
bclr6_bsc () {bclr_bit (getaddr_dir (), 6);}
bclr7_bsc () {bclr_bit (getaddr_dir (), 7);}

/* bhcc/bhcs - branch if half carry clear/set */
bhcc_rel () {branch_expr (!reg_gethflag ());}
bhcs_rel () {branch_expr ( reg_gethflag ());}

/* bmc/bms - branch if interrupt mask flag is cleared/set */
bmc_rel ()  {branch_expr (!reg_getiflag ());}
bms_rel ()  {branch_expr ( reg_getiflag ());}

/* bih/bil - branch if interrupt line is low/high */
bih_rel ()  {branch_expr ( getirq ());}
bil_rel ()  {branch_expr (!getirq ());}

/* brn_rel ()  {branch_expr (0);} */

/*
 * mul - X*A -> X:A
 */
mul_inh_6805 ()
{
	u_int res = reg_getacca() * reg_getix ();
	reg_setacca (LSB (res));
	reg_setix   (MSB (res));
}

/*
 * IXn - offset n = 0, 1 or 2 bytes
 */
neg_ix0 () { neg_addr (getaddr_ix0 ());}
neg_ix1 () { neg_addr (getaddr_ix1 ());}
neg_ix2 () { neg_addr (getaddr_ix2 ());}
neg_dir () { neg_addr (getaddr_dir ());}
negx_inh() { reg_setix (alu_negbyte (reg_getix ()));}

com_ix0 () { com_addr (getaddr_ix0 ());}
com_ix1 () { com_addr (getaddr_ix1 ());}
com_ix2 () { com_addr (getaddr_ix2 ());}
com_dir () { com_addr (getaddr_dir ());}
comx_inh() { reg_setix (alu_combyte (reg_getix ()));}

lsr_ix0 () { lsr_addr (getaddr_ix0 ());}
lsr_ix1 () { lsr_addr (getaddr_ix1 ());}
lsr_ix2 () { lsr_addr (getaddr_ix2 ());}
lsr_dir () { lsr_addr (getaddr_dir ());}
lsrx_inh() { reg_setix (alu_shrbyte (reg_getix (), 0));}

ror_ix0 () { ror_addr (getaddr_ix0 ());}
ror_ix1 () { ror_addr (getaddr_ix1 ());}
ror_ix2 () { ror_addr (getaddr_ix2 ());}
ror_dir () { ror_addr (getaddr_dir ());}
rorx_inh() {
	u_char msbit = reg_getcflag (); /* readability */
	reg_setix (alu_shrbyte (reg_getix (), msbit));
}

/* lsl - same as asl */
lsl_ix0 () { lsl_addr (getaddr_ix0 ());}
lsl_ix1 () { lsl_addr (getaddr_ix1 ());}
lsl_ix2 () { lsl_addr (getaddr_ix2 ());}
lsl_dir () { lsl_addr (getaddr_dir ());}
lslx_inh() { reg_setix (alu_shlbyte (reg_getix (), 0)); }

rol_ix0 () { rol_addr (getaddr_ix0 ());}
rol_ix1 () { rol_addr (getaddr_ix1 ());}
rol_ix2 () { rol_addr (getaddr_ix2 ());}
rol_dir () { rol_addr (getaddr_dir ());}
rolx_inh() {
	u_char lsbit = reg_getcflag (); /* readability */
	reg_setix (alu_shlbyte (reg_getix (), lsbit));
}
dec_ix0 () { dec_addr (getaddr_ix0 ());}
dec_ix1 () { dec_addr (getaddr_ix1 ());}
dec_ix2 () { dec_addr (getaddr_ix2 ());}
dec_dir () { dec_addr (getaddr_dir ());}
decx_inh() { reg_setix (alu_decbyte (reg_getix ()));}

inc_ix0 () { inc_addr (getaddr_ix0 ());}
inc_ix1 () { inc_addr (getaddr_ix1 ());}
inc_ix2 () { inc_addr (getaddr_ix2 ());}
inc_dir () { inc_addr (getaddr_dir ());}
incx_inh() { reg_setix (alu_incbyte (reg_getix ()));}

tst_ix0 () { tst_addr (getaddr_ix0 ());}
tst_ix1 () { tst_addr (getaddr_ix1 ());}
tst_ix2 () { tst_addr (getaddr_ix2 ());}
tst_dir () { tst_addr (getaddr_dir ());}
tstx_inh() { alu_testbyte (reg_getix ());}

clr_ix0 () { clr_addr (getaddr_ix0 ());}
clr_ix1 () { clr_addr (getaddr_ix1 ());}
clr_ix2 () { clr_addr (getaddr_ix2 ());}
clr_dir () { clr_addr (getaddr_dir ());}
clrx_inh() { reg_setix (alu_testbyte (0));}

stop_inh_6805 () {}
rsp_inh  () {reg_setsp (0xFF);}

/*
 * tax/txa shall not set CCR flags
 */
tax_inh  () { reg_setix   (reg_getacca ()); }
txa_inh  () { reg_setacca (reg_getix   ()); }
wait_inh () {}

/* Acc A, IX0, IX1, IX2 */
sub_ix0 () { reg_setacca (alu_subbyte (reg_getacca (), getbyte_ix0 (), 0)); }
sub_ix1 () { reg_setacca (alu_subbyte (reg_getacca (), getbyte_ix1 (), 0)); }
sub_ix2 () { reg_setacca (alu_subbyte (reg_getacca (), getbyte_ix2 (), 0)); }

cmp_ix0 () { alu_subbyte (reg_getacca (), getbyte_ix0 (), 0); }
cmp_ix1 () { alu_subbyte (reg_getacca (), getbyte_ix1 (), 0); }
cmp_ix2 () { alu_subbyte (reg_getacca (), getbyte_ix2 (), 0); }

sbc_ix0 () { alu_subbyte (reg_getacca (), getbyte_ix0 (), reg_getcflag ()); }
sbc_ix1 () { alu_subbyte (reg_getacca (), getbyte_ix1 (), reg_getcflag ()); }
sbc_ix2 () { alu_subbyte (reg_getacca (), getbyte_ix2 (), reg_getcflag ()); }

cpx_ix0 ()      { alu_subbyte (reg_getix (), getbyte_ix0 (), 0);}
cpx_ix1 ()      { alu_subbyte (reg_getix (), getbyte_ix1 (), 0);}
cpx_ix2 ()      { alu_subbyte (reg_getix (), getbyte_ix2 (), 0);}
cpx_imm_6805 () { alu_subbyte (reg_getix (), getbyte_imm (), 0);}
cpx_dir_6805 () { alu_subbyte (reg_getix (), getbyte_dir (), 0);}
cpx_ext_6805 () { alu_subbyte (reg_getix (), getbyte_ext (), 0);}


bit_ix0 () {alu_bittestbyte (reg_getacca () & getbyte_ix0 ());}
bit_ix1 () {alu_bittestbyte (reg_getacca () & getbyte_ix1 ());}
bit_ix2 () {alu_bittestbyte (reg_getacca () & getbyte_ix2 ());}

lda_ix0 () {reg_setacca (alu_bittestbyte (getbyte_ix0 ()));}
lda_ix1 () {reg_setacca (alu_bittestbyte (getbyte_ix1 ()));}
lda_ix2 () {reg_setacca (alu_bittestbyte (getbyte_ix2 ()));}

sta_ix0 () {mem_putb (getaddr_ix0 (), alu_bittestbyte (reg_getacca ()));}
sta_ix1 () {mem_putb (getaddr_ix1 (), alu_bittestbyte (reg_getacca ()));}
sta_ix2 () {mem_putb (getaddr_ix2 (), alu_bittestbyte (reg_getacca ()));}

eor_ix0 () {reg_setacca (alu_xorbyte (reg_getacca (), getbyte_ix0 ()));}
eor_ix1 () {reg_setacca (alu_xorbyte (reg_getacca (), getbyte_ix1 ()));}
eor_ix2 () {reg_setacca (alu_xorbyte (reg_getacca (), getbyte_ix2 ()));}

ora_ix0 () {reg_setacca (alu_orbyte (reg_getacca (), getbyte_ix0 ()));}
ora_ix1 () {reg_setacca (alu_orbyte (reg_getacca (), getbyte_ix1 ()));}
ora_ix2 () {reg_setacca (alu_orbyte (reg_getacca (), getbyte_ix2 ()));}

jmp_dir () {reg_setpc (getaddr_dir ());}
jmp_ix0 () {reg_setpc (getaddr_ix0 ());}
jmp_ix1 () {reg_setpc (getaddr_ix1 ());}
jmp_ix2 () {reg_setpc (getaddr_ix2 ());}

jsr_ix0 () {jsr_addr (getaddr_ix0 ());}
jsr_ix1 () {jsr_addr (getaddr_ix1 ());}
jsr_ix2 () {jsr_addr (getaddr_ix2 ());}

ldx_ix0 ()      {reg_setix (alu_bittestbyte (getbyte_ix0 ()));}
ldx_ix1 ()      {reg_setix (alu_bittestbyte (getbyte_ix1 ()));}
ldx_ix2 ()      {reg_setix (alu_bittestbyte (getbyte_ix2 ()));}
ldx_imm_6805 () {reg_setix (alu_bittestbyte (getbyte_imm ()));}
ldx_dir_6805 () {reg_setix (alu_bittestbyte (getbyte_dir ()));}
ldx_ext_6805 () {reg_setix (alu_bittestbyte (getbyte_ext ()));}

stx_ix0 ()      {mem_putb (getaddr_ix0 (), alu_bittestbyte (reg_getix ()));}
stx_ix1 ()      {mem_putb (getaddr_ix1 (), alu_bittestbyte (reg_getix ()));}
stx_ix2 ()      {mem_putb (getaddr_ix2 (), alu_bittestbyte (reg_getix ()));}
stx_dir_6805 () {mem_putb (getaddr_dir (), alu_bittestbyte (reg_getix ()));}
stx_ext_6805 () {mem_putb (getaddr_ext (), alu_bittestbyte (reg_getix ()));}

int_6805 (addr)
	u_int addr;
{
	pushword (reg_getpc ());
	pushbyte (reg_getix ());
	pushbyte (reg_getacca ());
	pushbyte (reg_getccr ());
	reg_setpc (mem_getw (addr));
	callstack_push (reg_getpc ());               /* new subroutine ref. */
	reg_setiflag (1);
}

rti_6805  ()
{
	reg_setccr  (popbyte ());
	reg_setacca (popbyte ());
	reg_setix   (popbyte ());
	reg_setpc   (popword ());
}

swi_6805  ()
{
	extern u_int swivector; /* chip specific */
	int_6805 (swivector);	/* chip specific */
}

trap_6805 ()
{
	warning ("trap: pc:%04x\nSubroutine: %04x\n",
		 reg_getpc (), callstack_peek_addr ());
}

#endif /* M6805 */
