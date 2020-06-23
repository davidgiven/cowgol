 /*
  *
  * Sim68xx - 68xx/63xx CPU Simulator
  *
  * optab.c - Opcode Decoding Table (6303)
  *
     Copyright (C) 2011 Felix Erckenbrecht
     <dg1yfe at gmx.de>

     Copyright (C) 1994 - 1996  Arne Riiber
     <riiber at systek.no>

     This program is free software; you can redistribute it and/or modify
     it under the terms of the GNU General Public License as published by
     the Free Software Foundation; either version 2 of the License, or
     (at your option) any later version.

     This program is distributed in the hope that it will be useful,
     but WITHOUT ANY WARRANTY; without even the implied warranty of
     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
     GNU General Public License for more details.

     You should have received a copy of the GNU General Public License
     along with this program; if not, write to the Free Software
     Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
  *
*/

#ifndef H6303
#define H6303
#endif

#include "optab.h"		/* struct opcodetab */
#include "opfunc.h"

/*
 * Opcode map 1 - the only one for 6301/6303/6803
 *
 * Instructions:
 *	6301 = 6801 + aim/eim/oim/tim/xgdx/slp (ref. Hitatchi).
 */
struct opcode opcodetab[256] = {

	{0x00, 0, trap,		0,	"---", 4},
	{0x01, 0, nop_inh,	1,	"nop", 4},
	{0x02, 0, trap,		0,	"---", 4},
	{0x03, 0, trap,		0,	"---", 4},
	{0x04, 0, lsrd_inh,	1,	"lsrd", 4},
	{0x05, 0, asld_inh,	1,	"asld", 4},
	{0x06, 0, tap_inh,	1,	"tap", 4},
	{0x07, 0, tpa_inh,	1,	"tpa", 4},
	{0x08, 0, inx_inh,	1,	"inx", 4},
	{0x09, 0, dex_inh,	1,	"dex", 4},
	{0x0a, 0, clv_inh,	1,	"clv", 4},
	{0x0b, 0, sev_inh,	1,	"sev", 4},
	{0x0c, 0, clc_inh,	1,	"clc", 4},
	{0x0d, 0, sec_inh,	1,	"sec", 4},
	{0x0e, 0, cli_inh,	1,	"cli", 4},
	{0x0f, 0, sei_inh,	1,	"sei", 4},

	{0x10, 0, sba_inh,	1,	"sba", 4},
	{0x11, 0, cba_inh,	1,	"cba", 4},
 	{0x12, 0, trap,		0,	"---", 4},
 	{0x13, 0, trap,		0,	"---", 4},
 	{0x14, 0, trap,		0,	"---", 4},
 	{0x15, 0, trap,		0,	"---", 4},
	{0x16, 0, tab_inh,	1,	"tab", 4},
	{0x17, 0, tba_inh,	1,	"tba", 4},
 	{0x18, 0, xgdx_inh,	2,	"xgdx", 4},
	{0x19, 0, daa_inh,	2,	"daa", 4},
 	{0x1a, 0, slp_inh,	4,	"slp", 4},
	{0x1b, 0, aba_inh,	1,	"aba", 4},
 	{0x1c, 0, trap,		0,	"---", 4},
 	{0x1d, 0, trap,		0,	"---", 4},
 	{0x1e, 0, trap,		0,	"---", 4},
 	{0x1f, 0, trap,		0,	"---", 4},

	{0x20, 1, bra_rel,	3,	"bra  %02x", 5},
	{0x21, 1, brn_rel,	3,	"brn  %02x", 5},
	{0x22, 1, bhi_rel,	3,	"bhi  %02x", 5},
	{0x23, 1, bls_rel,	3,	"bls  %02x", 5},
	{0x24, 1, bcc_rel,	3,	"bcc  %02x", 5},
	{0x25, 1, bcs_rel,	3,	"bcs  %02x", 5},
	{0x26, 1, bne_rel,	3,	"bne  %02x", 5},
	{0x27, 1, beq_rel,	3,	"beq  %02x", 5},
	{0x28, 1, bvc_rel,	3,	"bvc  %02x", 5},
	{0x29, 1, bvs_rel,	3,	"bvs  %02x", 5},
	{0x2a, 1, bpl_rel,	3,	"bpl  %02x", 5},
	{0x2b, 1, bmi_rel,	3,	"bmi  %02x", 5},
	{0x2c, 1, bge_rel,	3,	"bge  %02x", 5},
	{0x2d, 1, blt_rel,	3,	"blt  %02x", 5},
	{0x2e, 1, bgt_rel,	3,	"bgt  %02x", 5},
	{0x2f, 1, ble_rel,	3,	"ble  %02x", 5},

	{0x30, 0, tsx_inh,	1,	"tsx", 4},
	{0x31, 0, ins_inh,	1,	"ins", 4},
	{0x32, 0, pula_inh,	3,	"pula", 4},
	{0x33, 0, pulb_inh,	3,	"pulb", 4},
	{0x34, 0, des_inh,	1,	"des", 4},
	{0x35, 0, txs_inh,	1,	"txs", 4},
	{0x36, 0, psha_inh,	4,	"psha", 4},
	{0x37, 0, pshb_inh,	4,	"pshb", 4},
	{0x38, 0, pulx_inh,	4,	"pulx", 4},
	{0x39, 0, rts_inh,	5,	"rts\n", 4},
	{0x3a, 0, abx_inh,	1,	"abx", 4},
	{0x3b, 0, rti_inh,	10,	"rti", 4},
	{0x3c, 0, pshx_inh,	5 ,	"pshx", 4},
	{0x3d, 0, mul_inh,	7,	"mul", 4},
	{0x3e, 0, wai_inh,	9,	"wai", 4},
	{0x3f, 0, swi_inh,	12,	"swi", 4},

	{0x40, 0, nega_inh,	1,	"nega", 4},
	{0x41, 0, trap,		0,	"---", 4},
	{0x42, 0, trap,		0,	"---", 4},
	{0x43, 0, coma_inh,	1,	"coma", 4},
	{0x44, 0, lsra_inh,	1,	"lsra", 4},
	{0x45, 0, trap,		0,	"---", 4},
	{0x46, 0, rora_inh,	1,	"rora", 4},
	{0x47, 0, asra_inh,	1,	"asra", 4},
	{0x48, 0, lsla_inh,	1,	"lsla", 4},
	{0x49, 0, rola_inh,	1,	"rola", 4},
	{0x4a, 0, deca_inh,	1,	"deca", 4},
	{0x4b, 0, trap,		0,	"---", 4},
	{0x4c, 0, inca_inh,	1,	"inca", 4},
	{0x4d, 0, tsta_inh,	1,	"tsta", 4},
	{0x4e, 0, trap,		0,	"---", 4},
	{0x4f, 0, clra_inh,	1,	"clra", 4},

	{0x50, 0, negb_inh,	1,	"negb", 4},
	{0x51, 0, trap,		0,	"---", 4},
	{0x52, 0, trap,		0,	"---", 4},
	{0x53, 0, comb_inh,	1,	"comb", 4},
	{0x54, 0, lsrb_inh,	1,	"lsrb", 4},
	{0x55, 0, trap,		0,	"---", 4},
	{0x56, 0, rorb_inh,	1,	"rorb", 4},
	{0x57, 0, asrb_inh,	1,	"asrb", 4},
	{0x58, 0, lslb_inh,	1,	"lslb", 4},
	{0x59, 0, rolb_inh,	1,	"rolb", 4},
	{0x5a, 0, decb_inh,	1,	"decb", 4},
	{0x5b, 0, trap,		0,	"---", 4},
	{0x5c, 0, incb_inh,	1,	"incb", 4},
	{0x5d, 0, tstb_inh,	1,	"tstb", 4},
	{0x5e, 0, trap,		0,	"---", 4},
	{0x5f, 0, clrb_inh,	1,	"clrb", 4},

	{0x60, 1, neg_ind_x,	6,	"neg %02x,x", 3},
 	{0x61, 2, aim_ind_x,	7,	"aim #%02x, %02x,x", 7},	/* 6301 */
 	{0x62, 2, oim_ind_x,	7,	"oim #%02x, %02x,x", 7},	/* 6301 */
	{0x63, 1, com_ind_x,	6,	"com %02x,x", 3},
	{0x64, 1, lsr_ind_x,	6,	"lsr %02x,x", 3},
 	{0x65, 2, eim_ind_x,	7,	"eim #%02x, %02x,x", 7},	/* 6301 */
	{0x66, 1, ror_ind_x,	6,	"ror %02x,x", 3},
	{0x67, 1, asr_ind_x,	6,	"asr %02x,x", 3},
	{0x68, 1, lsl_ind_x,	6,	"lsl %02x,x", 3},
	{0x69, 1, rol_ind_x,	6,	"rol %02x,x", 3},
	{0x6a, 1, dec_ind_x,	6,	"dec %02x,x", 3},
 	{0x6b, 2, tim_ind_x,	5,	"tim #%02x, %02x,x", 7},	/* 6301 */
	{0x6c, 1, inc_ind_x,	6,	"inc %02x,x", 3},
	{0x6d, 1, tst_ind_x,	4,	"tst %02x,x", 3},
	{0x6e, 1, jmp_ind_x,	3,	"jmp %02x,x", 3},
	{0x6f, 1, clr_ind_x,	5,	"clr %02x,x", 3},

	{0x70, 2, neg_ext,	6,	"neg %04x", 2},
 	{0x71, 2, aim_dir,	6,	"aim #%02x, %02x", 6},	/* 6301 */
 	{0x72, 2, oim_dir,	6,	"oim #%02x, %02x", 6},	/* 6301 */
	{0x73, 2, com_ext,	6,	"com %04x", 2},
	{0x74, 2, lsr_ext,	6,	"lsr %04x", 2},
 	{0x75, 2, eim_dir,	6,	"eim #%02x, %02x", 6},	/* 6301 */
	{0x76, 2, ror_ext,	6,	"ror %04x", 2},
	{0x77, 2, asr_ext,	6,	"asr %04x", 2},
	{0x78, 2, lsl_ext,	6,	"lsl %04x", 2},
	{0x79, 2, rol_ext,	6,	"rol %04x", 2},
	{0x7a, 2, dec_ext,	6,	"dec %04x", 2},
 	{0x7b, 2, tim_dir,	4,	"tim #%02x, %02x", 6},
	{0x7c, 2, inc_ext,	6,	"inc %04x", 2},
	{0x7d, 2, tst_ext,	6,	"tst %04x", 2},
	{0x7e, 2, jmp_ext,	3,	"jmp %04x", 2},
	{0x7f, 2, clr_ext,	5,	"clr %04x", 2},

	{0x80, 1, suba_imm,	2,	"suba #%02x", 0},
	{0x81, 1, cmpa_imm,	2,	"cmpa #%02x", 0},
	{0x82, 1, sbca_imm,	2,	"sbca #%02x", 0},
	{0x83, 2, subd_imm,	3,	"subd #%02x", 0},
	{0x84, 1, anda_imm,	2,	"anda #%02x", 0},
	{0x85, 1, bita_imm,	2,	"bita #%02x", 0},
	{0x86, 1, ldaa_imm,	2,	"ldaa #%02x", 0},
	{0x87, 1, trap,		0,	"---", 4},
	{0x88, 1, eora_imm,	2,	"eora #%02x", 0},
	{0x89, 1, adca_imm,	2,	"adca #%02x", 0},
	{0x8a, 1, oraa_imm,	2,	"oraa #%02x", 0},
	{0x8b, 1, adda_imm,	2,	"adda #%02x", 0},
	{0x8c, 2, cpx_imm,	3,	"cpx  #%04x", 0},
	{0x8d, 1, bsr_rel,	5,	"bsr  %02x", 5},
	{0x8e, 2, lds_imm,	3,	"lds  #%04x", 0},
 	{0x8f, 0, trap,		0,	"---", 4},

	{0x90, 1, suba_dir,	3,	"suba %02x", 1},
	{0x91, 1, cmpa_dir,	3,	"cmpa %02x", 1},
	{0x92, 1, sbca_dir,	3,	"sbca %02x", 1},
	{0x93, 1, subd_dir,	4,	"subd %02x", 1},
	{0x94, 1, anda_dir,	3,	"anda %02x", 1},
	{0x95, 1, bita_dir,	3,	"bita %02x", 1},
	{0x96, 1, ldaa_dir,	3,	"ldaa %02x", 1},
	{0x97, 1, staa_dir,	3,	"staa %02x", 1},
	{0x98, 1, eora_dir,	3,	"eora %02x", 1},
	{0x99, 1, adca_dir,	3,	"adca %02x", 1},
	{0x9a, 1, oraa_dir,	3,	"oraa %02x", 1},
	{0x9b, 1, adda_dir,	3,	"adda %02x", 1},
	{0x9c, 1, cpx_dir,	4,	"cpx  %02x", 1},
	{0x9d, 1, jsr_dir,	5,	"jsr  %02x\n", 1},
	{0x9e, 1, lds_dir,	4,	"lds  %02x", 1},
	{0x9f, 1, sts_dir,	4,	"sts  %02x", 1},

	{0xA0, 1, suba_ind_x,	4,	"suba %02x,x", 3},
	{0xA1, 1, cmpa_ind_x,	4,	"cmpa %02x,x", 3},
	{0xA2, 1, sbca_ind_x,	4,	"sbca %02x,x", 3},
	{0xA3, 1, subd_ind_x,	5,	"subd %02x,x", 3},
	{0xA4, 1, anda_ind_x,	4,	"anda %02x,x", 3},
	{0xA5, 1, bita_ind_x,	4,	"bita %02x,x", 3},
	{0xA6, 1, ldaa_ind_x,	4,	"ldaa %02x,x", 3},
	{0xA7, 1, staa_ind_x,	4,	"staa %02x,x", 3},
	{0xA8, 1, eora_ind_x,	4,	"eora %02x,x", 3},
	{0xA9, 1, adca_ind_x,	4,	"adca %02x,x", 3},
	{0xAa, 1, oraa_ind_x,	4,	"oraa %02x,x", 3},
	{0xAb, 1, adda_ind_x,	4,	"adda %02x,x", 3},
	{0xAc, 1, cpx_ind_x,	5,	"cpx  %02x,x", 3},
	{0xAd, 1, jsr_ind_x,	5,	"jsr  %02x,x", 3},
	{0xAe, 1, lds_ind_x,	5,	"lds  %02x,x", 3},
	{0xAf, 1, sts_ind_x,	5,	"sts  %02x,x", 3},

	{0xB0, 2, suba_ext,	4,	"suba %04x", 2},
	{0xB1, 2, cmpa_ext,	4,	"cmpa %04x", 2},
	{0xB2, 2, sbca_ext,	4,	"sbca %04x", 2},
	{0xB3, 2, subd_ext,	5,	"subd %04x", 2},
	{0xB4, 2, anda_ext,	4,	"anda %04x", 2},
	{0xB5, 2, bita_ext,	4,	"bita %04x", 2},
	{0xB6, 2, ldaa_ext,	4,	"ldaa %04x", 2},
	{0xB7, 2, staa_ext,	4,	"staa %04x", 2},
	{0xB8, 2, eora_ext,	4,	"eora %04x", 2},
	{0xB9, 2, adca_ext,	4,	"adca %04x", 2},
	{0xBa, 2, oraa_ext,	4,	"oraa %04x", 2},
	{0xBb, 2, adda_ext,	4,	"adda %04x", 2},
	{0xBc, 2, cpx_ext,	5,	"cpx  %04x", 2},
	{0xBd, 2, jsr_ext,	6,	"jsr  %04x", 2},
	{0xBe, 2, lds_ext,	5,	"lds  %04x", 2},
	{0xBf, 2, sts_ext,	5,	"sts  %04x", 2},

	{0xC0, 1, subb_imm,	2,	"subb #%02x", 0},
	{0xC1, 1, cmpb_imm,	2,	"cmpb #%02x", 0},
	{0xC2, 1, sbcb_imm,	2,	"sbcb #%02x", 0},
	{0xC3, 2, addd_imm,	3,	"addd #%04x", 0},
	{0xC4, 1, andb_imm,	2,	"andb #%02x", 0},
	{0xC5, 1, bitb_imm,	2,	"bitb #%02x", 0},
	{0xC6, 1, ldab_imm,	2,	"ldab #%02x", 0},
	{0xC7, 0, trap,		0,	"---", 4},
	{0xC8, 1, eorb_imm,	2,	"eorb #%02x", 0},
	{0xC9, 1, adcb_imm,	2,	"adcb #%02x", 0},
	{0xCa, 1, orab_imm,	2,	"orab #%02x", 0},
	{0xCb, 1, addb_imm,	2,	"addb #%02x", 0},
	{0xCc, 2, ldd_imm,	3,	"ldd  #%04x", 0},
	{0xCd, 0, trap,		0,	"---", 4},
	{0xCe, 2, ldx_imm,	3,	"ldx  #%04x", 0},
	{0xCf, 0, trap,		0,	"---", 4},

	{0xD0, 1, subb_dir,	3,	"subb %02x", 1},
	{0xD1, 1, cmpb_dir,	3,	"cmpb %02x", 1},
	{0xD2, 1, sbcb_dir,	3,	"sbcb %02x", 1},
	{0xD3, 1, addd_dir,	4,	"addd %02x", 1},
	{0xD4, 1, andb_dir,	3,	"anda %02x", 1},
	{0xD5, 1, bitb_dir,	3,	"bitb %02x", 1},
	{0xD6, 1, ldab_dir,	3,	"ldab %02x", 1},
	{0xD7, 1, stab_dir,	3,	"stab %02x", 1},
	{0xD8, 1, eorb_dir,	3,	"eorb %02x", 1},
	{0xD9, 1, adcb_dir,	3,	"adcb %02x", 1},
	{0xDa, 1, orab_dir,	3,	"orab %02x", 1},
	{0xDb, 1, addb_dir,	3,	"addb %02x", 1},
	{0xDc, 1, ldd_dir,	4,	"ldd  %02x", 1},
	{0xDd, 1, std_dir,	4,	"std  %02x", 1},
	{0xDe, 1, ldx_dir,	4,	"ldx  %02x", 1},
	{0xDf, 1, stx_dir,	4,	"stx  %02x", 1},

	{0xE0, 1, subb_ind_x,	4,	"subb %02x,x", 3},
	{0xE1, 1, cmpb_ind_x,	4,	"cmpb %02x,x", 3},
	{0xE2, 1, sbcb_ind_x,	4,	"sbcb %02x,x", 3},
	{0xE3, 1, addd_ind_x,	5,	"addd %02x,x", 3},
	{0xE4, 1, andb_ind_x,	4,	"anda %02x,x", 3},
	{0xE5, 1, bitb_ind_x,	4,	"bitb %02x,x", 3},
	{0xE6, 1, ldab_ind_x,	4,	"ldab %02x,x", 3},
	{0xE7, 1, stab_ind_x,	4,	"stab %02x,x", 3},
	{0xE8, 1, eorb_ind_x,	4,	"eorb %02x,x", 3},
	{0xE9, 1, adcb_ind_x,	4,	"adcb %02x,x", 3},
	{0xEa, 1, orab_ind_x,	4,	"orab %02x,x", 3},
	{0xEb, 1, addb_ind_x,	4,	"addb %02x,x", 3},
	{0xEc, 1, ldd_ind_x,	5,	"ldd  %02x,x", 3},
	{0xEd, 1, std_ind_x,	5,	"std  %02x,x", 3},
	{0xEe, 1, ldx_ind_x,	5,	"ldx  %02x,x", 3},
	{0xEf, 1, stx_ind_x,	5,	"stx  %02x,x", 3},

	{0xF0, 2, subb_ext,	4,	"subb %04x", 2},
	{0xF1, 2, cmpb_ext,	4,	"cmpb %04x", 2},
	{0xF2, 2, sbcb_ext,	4,	"sbcb %04x", 2},
	{0xF3, 2, addd_ext,	5,	"addd %04x", 2},
	{0xF4, 2, andb_ext,	4,	"anda %04x", 2},
	{0xF5, 2, bitb_ext,	4,	"bitb %04x", 2},
	{0xF6, 2, ldab_ext,	4,	"ldab %04x", 2},
	{0xF7, 2, stab_ext,	4,	"stab %04x", 2},
	{0xF8, 2, eorb_ext,	4,	"eorb %04x", 2},
	{0xF9, 2, adcb_ext,	4,	"adcb %04x", 2},
	{0xFa, 2, orab_ext,	4,	"orab %04x", 2},
	{0xFb, 2, addb_ext,	4,	"addb %04x", 2},
	{0xFc, 2, ldd_ext,	5,	"ldd  %04x", 2},
	{0xFd, 2, std_ext,	5,	"std  %04x", 2},
	{0xFe, 2, ldx_ext,	5,	"ldx  %04x", 2},
	{0xFf, 2, stx_ext,	5,	"stx  %04x", 2}
};
