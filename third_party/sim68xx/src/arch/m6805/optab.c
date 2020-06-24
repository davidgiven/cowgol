/* <<<                                  */
/* Copyright (c) 1994-1996 Arne Riiber. */
/* All rights reserved.                 */
/* >>>                                  */
/* 6805map.c - opcode map 6805 cpu core */

#include "defs.h"

#ifndef M6805
#define M6805
#endif

#include "optab.h"      /* struct opcodetab */
#include "opfunc.h"


/*
 * Opcode map
 *
 * Instructions:
 *	68hc705c8 = 6805 + mul
 */
struct opcode opcodetab[256] = {

/* opcode   operands  func      cycles   formatstring */

	{0x00, 2, brset0_btb,	5,	"brset0 %02x %02x"},
	{0x01, 2, brclr0_btb,	5,	"brclr0 %02x %02x"},
	{0x02, 2, brset1_btb,	5,	"brset1 %02x %02x"},
	{0x03, 2, brclr1_btb,	5,	"brclr1 %02x %02x"},
	{0x04, 2, brset2_btb,	5,	"brset2 %02x %02x"},
	{0x05, 2, brclr2_btb,	5,	"brclr2 %02x %02x"},
	{0x06, 2, brset3_btb,	5,	"brset3 %02x %02x"},
	{0x07, 2, brclr3_btb,	5,	"brclr3 %02x %02x"},
	{0x08, 2, brset4_btb,	5,	"brset4 %02x %02x"},
	{0x09, 2, brclr4_btb,	5,	"brclr4 %02x %02x"},
	{0x0a, 2, brset5_btb,	5,	"brset5 %02x %02x"},
	{0x0b, 2, brclr5_btb,	5,	"brclr5 %02x %02x"},
	{0x0c, 2, brset6_btb,	5,	"brset6 %02x %02x"},
	{0x0d, 2, brclr6_btb,	5,	"brclr6 %02x %02x"},
	{0x0e, 2, brset7_btb,	5,	"brset7 %02x %02x"},
	{0x0f, 2, brclr7_btb,	5,	"brclr7 %02x %02x"},

	/* BSC - Set/clear bit n of zero-page address m */
	{0x10, 1, bset0_bsc,	5,	"bset0  %02x"},
	{0x11, 1, bclr0_bsc,	5,	"bclr0  %02x"},
	{0x12, 1, bset1_bsc,	5,	"bset1  %02x"},
	{0x13, 1, bclr1_bsc,	5,	"bclr1  %02x"},
	{0x14, 1, bset2_bsc,	5,	"bset2  %02x"},
	{0x15, 1, bclr2_bsc,	5,	"bclr2  %02x"},
	{0x16, 1, bset3_bsc,	5,	"bset3  %02x"},
	{0x17, 1, bclr3_bsc,	5,	"bclr3  %02x"},
	{0x18, 1, bset4_bsc,	5,	"bset4  %02x"},
	{0x19, 1, bclr4_bsc,	5,	"bclr4  %02x"},
	{0x1a, 1, bset5_bsc,	5,	"bset5  %02x"},
	{0x1b, 1, bclr5_bsc,	5,	"bclr5  %02x"},
	{0x1c, 1, bset6_bsc,	5,	"bset6  %02x"},
	{0x1d, 1, bclr6_bsc,	5,	"bclr6  %02x"},
	{0x1e, 1, bset7_bsc,	5,	"bset7  %02x"},
	{0x1f, 1, bclr7_bsc,	5,	"bclr7  %02x"},

	{0x20, 1, bra_rel,	3,	"bra    %02x"},
	{0x21, 1, brn_rel,	3,	"brn    %02x"},
	{0x22, 1, bhi_rel,	3,	"bhi    %02x"},
	{0x23, 1, bls_rel,	3,	"bls    %02x"},
	{0x24, 1, bcc_rel,	3,	"bcc    %02x"},
	{0x25, 1, bcs_rel,	3,	"bcs    %02x"},
	{0x26, 1, bne_rel,	3,	"bne    %02x"},
	{0x27, 1, beq_rel,	3,	"beq    %02x"},
	{0x28, 1, bhcc_rel,	3,	"bhcc   %02x"},
	{0x29, 1, bhcs_rel,	3,	"bhcs   %02x"},
	{0x2a, 1, bpl_rel,	3,	"bpl    %02x"},
	{0x2b, 1, bmi_rel,	3,	"bmi    %02x"},
	{0x2c, 1, bmc_rel,	3,	"bmc    %02x"},
	{0x2d, 1, bms_rel,	3,	"bms    %02x"},
	{0x2e, 1, bil_rel,	3,	"bil    %02x"},
	{0x2f, 1, bih_rel,	3,	"bih    %02x"},

	/* cycle count not updated from here on */
	{0x30, 1, neg_dir,	1,	"neg    %02x"},
	{0x31, 0, trap_6805,	1,	"---"},
	{0x32, 0, trap_6805,	3,	"---"},
	{0x33, 1, com_dir,	3,	"com    %02x"},
	{0x34, 1, lsr_dir,	1,	"lsr    %02x"},
	{0x35, 0, trap_6805,	1,	"---"},
	{0x36, 1, ror_dir,	4,	"ror    %02x"},
	{0x37, 1, asr_dir,	4,	"asr    %02x"},
	{0x38, 1, lsl_dir,	4,	"lsl    %02x"},
	{0x39, 1, rol_dir,	5,	"rol    %02x"},
	{0x3a, 1, dec_dir,	1,	"dec    %02x"},
	{0x3b, 0, trap_6805,	10,	"---"},
	{0x3c, 1, inc_dir,	5 ,	"inc    %02x"},
	{0x3d, 1, tst_dir,	7,	"tst    %02x"},
	{0x3e, 0, trap_6805,	9,	"---"},
	{0x3f, 1, clr_dir,	12,	"clr    %02x"},

	/* as 6800 */
	{0x40, 0, nega_inh,	1,	"nega"},
	{0x41, 0, trap_6805,	0,	"---"},
	{0x42, 0, mul_inh_6805,	0,	"mul"},		/* HC705C8 */
	{0x43, 0, coma_inh,	1,	"coma"},
	{0x44, 0, lsra_inh,	1,	"lsra"},
	{0x45, 0, trap_6805,	0,	"---"},
	{0x46, 0, rora_inh,	1,	"rora"},
	{0x47, 0, asra_inh,	1,	"asra"},
	{0x48, 0, lsla_inh,	1,	"lsla"},
	{0x49, 0, rola_inh,	1,	"rola"},
	{0x4a, 0, deca_inh,	1,	"deca"},
	{0x4b, 0, trap_6805,	0,	"---"},
	{0x4c, 0, inca_inh,	1,	"inca"},
	{0x4d, 0, tsta_inh,	1,	"tsta"},
	{0x4e, 0, trap_6805,	0,	"---"},
	{0x4f, 0, clra_inh,	1,	"clra"},

	/* as 6800 ops on B, but here on X */
	{0x50, 0, negx_inh,	1,	"negx"},
	{0x51, 0, trap_6805,	0,	"---"},
	{0x52, 0, trap_6805,	0,	"---"},
	{0x53, 0, comx_inh,	1,	"comx"},
	{0x54, 0, lsrx_inh,	1,	"lsrx"},
	{0x55, 0, trap_6805,	0,	"---"},
	{0x56, 0, rorx_inh,	1,	"rorx"},
	{0x57, 0, asrx_inh,	1,	"asrx"},
	{0x58, 0, aslx_inh,	1,	"aslx"},
	{0x59, 0, rolx_inh,	1,	"rolx"},
	{0x5a, 0, decx_inh,	1,	"decx"},
	{0x5b, 0, trap_6805,	0,	"---"},
	{0x5c, 0, incx_inh,	1,	"incx"},
	{0x5d, 0, tstx_inh,	1,	"tstx"},
	{0x5e, 0, trap_6805,	0,	"---"},
	{0x5f, 0, clrx_inh,	1,	"clrx"},

	/* IX1 - 8 bit offset */
	/* as 6800 INDEXED,X */
	{0x60, 1, neg_ix1,	6,	"neg   %02x,x"},
 	{0x61, 1, trap_6805,	7,	"---"},
 	{0x62, 1, trap_6805,	7,	"---"},
	{0x63, 1, com_ix1,	6,	"com   %02x,x"},
	{0x64, 1, lsr_ix1,	6,	"lsr   %02x,x"},
 	{0x65, 1, trap_6805,	7,	"---"},
	{0x66, 1, ror_ix1,	6,	"ror   %02x,x"},
	{0x67, 1, asr_ix1,	6,	"asr   %02x,x"},
	{0x68, 1, asl_ix1,	6,	"asl   %02x,x"},
	{0x69, 1, rol_ix1,	6,	"rol   %02x,x"},
	{0x6a, 1, dec_ix1,	6,	"dec   %02x,x"},
 	{0x6b, 1, trap_6805,	5,	"---"},
	{0x6c, 1, inc_ix1,	6,	"inc   %02x,x"},
	{0x6d, 1, tst_ix1,	4,	"tst   %02x,x"},
	{0x6e, 1, trap_6805,	3,	"---"},		/* 6800: jmp */
	{0x6f, 1, clr_ix1,	5,	"clr   %02x,x"},

	/* IX - no offset, 6800 use EXT here, byte count/formatstr not upd. */
	/* maybe some undocumented ops are implemented? */

	{0x70, 0, neg_ix0,	6,	"neg   ,x"},
 	{0x71, 0, trap_6805,	6,	"---"},
 	{0x72, 0, trap_6805,	6,	"---"},
	{0x73, 0, com_ix0,	6,	"com   ,x"},
	{0x74, 0, lsr_ix0,	6,	"lsr   ,x"},
 	{0x75, 0, trap_6805,	6,	"---"},
	{0x76, 0, ror_ix0,	6,	"ror   ,x"},
	{0x77, 0, asr_ix0,	6,	"asr   ,x"},
	{0x78, 0, asl_ix0,	6,	"asl   ,x"},
	{0x79, 0, rol_ix0,	6,	"rol   ,x"},
	{0x7a, 0, dec_ix0,	6,	"dec   ,x"},
 	{0x7b, 0, trap_6805,	4,	"---"},
	{0x7c, 0, inc_ix0,	6,	"inc   ,x"},
	{0x7d, 0, tst_ix0,	6,	"tst   ,x"},
	{0x7e, 0, trap_6805,	3,	"---"},	 /* 6800: jmp */
	{0x7f, 0, clr_ix0,	5,	"clr   ,x"},


	/* INH - note the stack is different on 6800 and 6805 */
	{0x80, 0, rti_6805,	9,	"rti"},
	{0x81, 0, rts_inh,	6,	"rts"},
	{0x82, 0, trap_6805,	0,	"---"},
	{0x83, 0, swi_6805,	10,	"swi"},
	{0x84, 0, trap_6805,	0,	"---"},
	{0x85, 0, trap_6805,	0,	"---"},
	{0x86, 0, trap_6805,	0,	"---"},
	{0x87, 0, trap_6805,	0,	"---"},
	{0x88, 0, trap_6805,	0,	"---"},
	{0x89, 0, trap_6805,	0,	"---"},
	{0x8a, 0, trap_6805,	0,	"---"},
	{0x8b, 0, trap_6805,	0,	"---"},
	{0x8c, 0, trap_6805,	0,	"---"},
	{0x8d, 0, trap_6805,	0,	"---"},
	{0x8e, 0, stop_inh_6805,2,	"stop"},
	{0x8f, 0, wait_inh,	2,	"wait"},

	/* INH */
	{0x90, 0, trap_6805,	0,	"---"},
	{0x91, 0, trap_6805,	0,	"---"},
	{0x92, 0, trap_6805,	0,	"---"},
	{0x93, 0, trap_6805,	0,	"---"},
	{0x94, 0, trap_6805,	0,	"---"},
	{0x95, 0, trap_6805,	0,	"---"},
	{0x96, 0, trap_6805,	0,	"---"},
	{0x97, 0, tax_inh,	2,	"tax"},
	{0x98, 0, clc_inh,	2,	"clc"},
	{0x99, 0, sec_inh,	2,	"sec"},
	{0x9a, 0, cli_inh,	2,	"cli"},
	{0x9b, 0, sei_inh,	2,	"sei"},
	{0x9c, 0, rsp_inh,	2,	"rsp"},
	{0x9d, 0, nop_inh,	2,	"nop"},
	{0x9e, 0, trap_6805,	0,	"---"},
	{0x9f, 0, txa_inh,	2,	"txa"},

	/* IMM - cycle counts? */
	/*
	 * some non-inherent instructions on 8-bits X
	 * differs from 6800
	 */
	{0xA0, 1, suba_imm,	2,	"sub   #%02x"},
	{0xA1, 1, cmpa_imm,	2,	"cmp   #%02x"},
	{0xA2, 1, sbca_imm,	2,	"sbc   #%02x"},
	{0xA3, 1, cpx_imm_6805,	2,	"cpx   #%02x"},
	{0xA4, 1, anda_imm,	2,	"and   #%02x"},
	{0xA5, 1, bita_imm,	2,	"bit   #%02x"},
	{0xA6, 1, ldaa_imm,	2,	"lda   #%02x"},
	{0xA7, 1, trap_6805,	0,	"---"},
	{0xA8, 1, eora_imm,	2,	"eor   #%02x"},
	{0xA9, 1, adca_imm,	2,	"adc   #%02x"},
	{0xAA, 1, oraa_imm,	2,	"ora   #%02x"},
	{0xAB, 1, adda_imm,	2,	"add   #%02x"},
	{0xAC, 0, trap_6805,	0,	"---"},
	{0xAD, 1, bsr_rel,	5,	"bsr   %02x"},
	{0xAE, 1, ldx_imm_6805,	3,	"ldx   #%02x"},
 	{0xAF, 0, trap_6805,	0,	"---"},

	/* DIR - cycle counts? */
	{0xB0, 1, suba_dir,	3,	"sub   %02x"},
	{0xB1, 1, cmpa_dir,	3,	"cmp   %02x"},
	{0xB2, 1, sbca_dir,	3,	"sbc   %02x"},
	{0xB3, 1, cpx_dir_6805,	4,	"cpx   %02x"},
	{0xB4, 1, anda_dir,	3,	"and   %02x"},
	{0xB5, 1, bita_dir,	3,	"bit   %02x"},
	{0xB6, 1, ldaa_dir,	3,	"lda   %02x"},
	{0xB7, 1, staa_dir,	3,	"sta   %02x"},
	{0xB8, 1, eora_dir,	3,	"eor   %02x"},
	{0xB9, 1, adca_dir,	3,	"adc   %02x"},
	{0xBa, 1, oraa_dir,	3,	"ora   %02x"},
	{0xBb, 1, adda_dir,	3,	"add   %02x"},
	{0xBc, 1, jmp_dir,	4,	"jmp   %02x"},
	{0xBd, 1, jsr_dir,	5,	"jsr   %02x"},
	{0xBe, 1, ldx_dir_6805,	4,	"ldx   %02x"},
	{0xBf, 1, stx_dir_6805,	4,	"stx   %02x"},


	/* EXT */
	{0xC0, 2, suba_ext,	4,	"sub   %04x"},
	{0xC1, 2, cmpa_ext,	4,	"cmp   %04x"},
	{0xC2, 2, sbca_ext,	4,	"sbc   %04x"},
	{0xC3, 2, cpx_ext_6805,	5,	"cpx   %04x"},
	{0xC4, 2, anda_ext,	4,	"and   %04x"},
	{0xC5, 2, bita_ext,	4,	"bit   %04x"},
	{0xC6, 2, ldaa_ext,	4,	"lda   %04x"},
	{0xC7, 2, staa_ext,	4,	"sta   %04x"},
	{0xC8, 2, eora_ext,	4,	"eor   %04x"},
	{0xC9, 2, adca_ext,	4,	"adc   %04x"},
	{0xCa, 2, oraa_ext,	4,	"ora   %04x"},
	{0xCb, 2, adda_ext,	4,	"add   %04x"},
	{0xCc, 2, jmp_ext,	5,	"jmp   %04x"},
	{0xCd, 2, jsr_ext,	6,	"jsr   %04x"},
	{0xCe, 2, ldx_ext_6805,	5,	"ldx   %04x"},
	{0xCf, 2, stx_ext_6805,	5,	"stx   %04x"},

	/* IX2 */
	{0xD0, 2, sub_ix2,	4,	"sub   %04x,x"},
	{0xD1, 2, cmp_ix2,	4,	"cmp   %04x,x"},
	{0xD2, 2, sbc_ix2,	4,	"sbc   %04x,x"},
	{0xD3, 2, cpx_ix2,	5,	"cpx   %04x,x"},
	{0xD4, 2, and_ix2,	4,	"and   %04x,x"},
	{0xD5, 2, bit_ix2,	4,	"bit   %04x,x"},
	{0xD6, 2, lda_ix2,	4,	"lda   %04x,x"},
	{0xD7, 2, sta_ix2,	4,	"sta   %04x,x"},
	{0xD8, 2, eor_ix2,	4,	"eor   %04x,x"},
	{0xD9, 2, adc_ix2,	4,	"adc   %04x,x"},
	{0xDa, 2, ora_ix2,	4,	"ora   %04x,x"},
	{0xDb, 2, add_ix2,	4,	"add   %04x,x"},
	{0xDc, 2, jmp_ix2,	5,	"jmp   %04x,x"},
	{0xDd, 2, jsr_ix2,	6,	"jsr   %04x,x"},
	{0xDe, 2, ldx_ix2,	5,	"ldx   %04x,x"},
	{0xDf, 2, stx_ix2,	5,	"stx   %04x,x"},

	/* IX1 - analogue to 6800 ind_x (but X is 8-bit) */
	{0xE0, 1, sub_ix1,	4,	"sub   %02x,x"},
	{0xE1, 1, cmp_ix1,	4,	"cmp   %02x,x"},
	{0xE2, 1, sbc_ix1,	4,	"sbc   %02x,x"},
	{0xE3, 1, cpx_ix1,	5,	"cpx   %02x,x"},
	{0xE4, 1, and_ix1,	4,	"and   %02x,x"},
	{0xE5, 1, bit_ix1,	4,	"bit   %02x,x"},
	{0xE6, 1, lda_ix1,	4,	"lda   %02x,x"},
	{0xE7, 1, sta_ix1,	4,	"sta   %02x,x"},
	{0xE8, 1, eor_ix1,	4,	"eor   %02x,x"},
	{0xE9, 1, adc_ix1,	4,	"adc   %02x,x"},
	{0xEa, 1, ora_ix1,	4,	"ora   %02x,x"},
	{0xEb, 1, add_ix1,	4,	"add   %02x,x"},
	{0xEc, 1, jmp_ix1,	5,	"jmp   %02x,x"},
	{0xEd, 1, jsr_ix1,	6,	"jsr   %02x,x"},
	{0xEe, 1, ldx_ix1,	5,	"ldx   %02x,x"},
	{0xEf, 1, stx_ix1,	5,	"stx   %02x,x"},

	/* IX - no offset */
	{0xF0, 0, sub_ix0,	4,	"sub   ,x"},
	{0xF1, 0, cmp_ix0,	4,	"cmp   ,x"},
	{0xF2, 0, sbc_ix0,	4,	"sbc   ,x"},
	{0xF3, 0, cpx_ix0,	5,	"cpx   ,x"},
	{0xF4, 0, and_ix0,	4,	"and   ,x"},
	{0xF5, 0, bit_ix0,	4,	"bit   ,x"},
	{0xF6, 0, lda_ix0,	4,	"lda   ,x"},
	{0xF7, 0, sta_ix0,	4,	"sta   ,x"},
	{0xF8, 0, eor_ix0,	4,	"eor   ,x"},
	{0xF9, 0, adc_ix0,	4,	"adc   ,x"},
	{0xFa, 0, ora_ix0,	4,	"ora   ,x"},
	{0xFb, 0, add_ix0,	4,	"add   ,x"},
	{0xFc, 0, jmp_ix0,	5,	"jmp   ,x"},
	{0xFd, 0, jsr_ix0,	6,	"jsr   ,x"},
	{0xFe, 0, ldx_ix0,	5,	"ldx   ,x"},
	{0xFf, 0, stx_ix0,	5,	"stx   ,x"},
};

