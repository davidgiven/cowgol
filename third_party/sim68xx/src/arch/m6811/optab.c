/* <<<                                  */
/* Copyright (c) 1994-1996 Arne Riiber. */
/* All rights reserved.                 */
/* >>>                                  */
/* optab.c - opcode table 6811 cpu */

#ifndef M6811
#define M6811
#endif
#include "optab.h"		/* struct opcodetab */
#include "opfunc.h"

/*
 * Opcode table 1
 */
struct opcode opcodetab[256] = {

	/*
	 * value n_opcodes n_operands func n_cycles mnemonic nextpage(default=NULL)
	 */
	{0x00, 1, 0, test_inh,	0, "test"},
	{0x01, 1, 0, nop_inh,	2, "nop"},
	{0x02, 1, 0, idiv_inh, 41, "idiv"},
	{0x03, 1, 0, fdiv_inh, 41, "fdiv"},
	{0x04, 1, 0, lsrd_inh,  3, "lsrd"},
	{0x05, 1, 0, asld_inh,  3, "asld"},
	{0x06, 1, 0, tap_inh,	2, "tap"},
	{0x07, 1, 0, tpa_inh,	2, "tpa"},
	{0x08, 1, 0, inx_inh,	3, "inx"},
	{0x09, 1, 0, dex_inh,	3, "dex"},
	{0x0a, 1, 0, clv_inh,	2, "clv"},
	{0x0b, 1, 0, sev_inh,	2, "sev"},
	{0x0c, 1, 0, clc_inh,	2, "clc"},
	{0x0d, 1, 0, sec_inh,	2, "sec"},
	{0x0e, 1, 0, cli_inh,	2, "cli"},
	{0x0f, 1, 0, sei_inh,	2, "sei"},

	{0x10, 1, 0, sba_inh,	2, "sba"},
	{0x11, 1, 0, cba_inh,	2, "cba"},
 	{0x12, 1, 3, brset_dir,	6, "brset %02x #%02x %02x"},
 	{0x13, 1, 3, brclr_dir,	6, "brclr %02x #%02x %02x"},
 	{0x14, 1, 2, bset_dir,	6, "bset  %02x #%02x"},
 	{0x15, 1, 2, bclr_dir,	6, "bclr  %02x #%02x"},
	{0x16, 1, 0, tab_inh,	2, "tab"},
	{0x17, 1, 0, tba_inh,	2, "tba"},
 	{0x18, 0, 0, NULL,	0, "page2",	opcodetab2},
	{0x19, 1, 0, daa_inh,	2, "daa"},
 	{0x1a, 0, 0, NULL,	0, "page3",	opcodetab3},
	{0x1b, 1, 0, aba_inh,	2, "aba"},
 	{0x1c, 1, 2, bset_ind_x,  7,	"bset  %02x,x #%02x"},
 	{0x1d, 1, 2, bclr_ind_x,  7,	"bclr  %02x,x #%02x"},
 	{0x1e, 1, 3, brset_ind_x, 7,	"brset %02x,x #%02x %02x"},
 	{0x1f, 1, 3, brclr_ind_x, 7,	"brclr %02x,x #%02x %02x"},

	{0x20, 1, 1, bra_rel,	3,	"bra   %02x"},
	{0x21, 1, 1, brn_rel,	3,	"brn   %02x"},
	{0x22, 1, 1, bhi_rel,	3,	"bhi   %02x"},
	{0x23, 1, 1, bls_rel,	3,	"bls   %02x"},
	{0x24, 1, 1, bcc_rel,	3,	"bcc   %02x"},
	{0x25, 1, 1, bcs_rel,	3,	"bcs   %02x"},
	{0x26, 1, 1, bne_rel,	3,	"bne   %02x"},
	{0x27, 1, 1, beq_rel,	3,	"beq   %02x"},
	{0x28, 1, 1, bvc_rel,	3,	"bvc   %02x"},
	{0x29, 1, 1, bvs_rel,	3,	"bvs   %02x"},
	{0x2a, 1, 1, bpl_rel,	3,	"bpl   %02x"},
	{0x2b, 1, 1, bmi_rel,	3,	"bmi   %02x"},
	{0x2c, 1, 1, bge_rel,	3,	"bge   %02x"},
	{0x2d, 1, 1, blt_rel,	3,	"blt   %02x"},
	{0x2e, 1, 1, bgt_rel,	3,	"bgt   %02x"},
	{0x2f, 1, 1, ble_rel,	3,	"ble   %02x"},

	{0x30, 1, 0, tsx_inh,	3,	"tsx"},
	{0x31, 1, 0, ins_inh,	3,	"ins"},
	{0x32, 1, 0, pula_inh,	4,	"pula"},
	{0x33, 1, 0, pulb_inh,	4,	"pulb"},
	{0x34, 1, 0, des_inh,	3,	"des"},
	{0x35, 1, 0, txs_inh,	3,	"txs"},
	{0x36, 1, 0, psha_inh,	3,	"psha"},
	{0x37, 1, 0, pshb_inh,	3,	"pshb"},
	{0x38, 1, 0, pulx_inh,	5,	"pulx"},
	{0x39, 1, 0, rts_inh,	5,	"rts"},
	{0x3a, 1, 0, abx_inh,	3,	"abx"},
	{0x3b, 1, 0, rti_6811,	12,	"rti"},
	{0x3c, 1, 0, pshx_inh,	4,	"pshx"},
	{0x3d, 1, 0, mul_inh,  10,	"mul"},
	{0x3e, 1, 0, wai_inh,  14,	"wai"},
	{0x3f, 1, 0, swi_6811, 14,	"swi"},

	{0x40, 1, 0, nega_inh,	2,	"nega"},
	{0x41, 1, 0, trap_6811,	0,	"-"},
	{0x42, 1, 0, trap_6811,	0,	"-"},
	{0x43, 1, 0, coma_inh,	2,	"coma"},
	{0x44, 1, 0, lsra_inh,	2,	"lsra"},
	{0x45, 1, 0, trap_6811,	0,	"-"},
	{0x46, 1, 0, rora_inh,	2,	"rora"},
	{0x47, 1, 0, asra_inh,	2,	"asra"},
	{0x48, 1, 0, lsla_inh,	2,	"lsla"},
	{0x49, 1, 0, rola_inh,	2,	"rola"},
	{0x4a, 1, 0, deca_inh,	2,	"deca"},
	{0x4b, 1, 0, trap_6811,	0,	"-"},
	{0x4c, 1, 0, inca_inh,	2,	"inca"},
	{0x4d, 1, 0, tsta_inh,	2,	"tsta"},
	{0x4e, 1, 0, trap_6811,	0,	"-"},
	{0x4f, 1, 0, clra_inh,	2,	"clra"},

	{0x50, 1, 0, negb_inh,	2,	"negb"},
	{0x51, 1, 0, trap_6811,	0,	"-"},
	{0x52, 1, 0, trap_6811,	0,	"-"},
	{0x53, 1, 0, comb_inh,	2,	"comb"},
	{0x54, 1, 0, lsrb_inh,	2,	"lsrb"},
	{0x55, 1, 0, trap_6811,	0,	"-"},
	{0x56, 1, 0, rorb_inh,	2,	"rorb"},
	{0x57, 1, 0, asrb_inh,	2,	"asrb"},
	{0x58, 1, 0, lslb_inh,	2,	"lslb"},
	{0x59, 1, 0, rolb_inh,	2,	"rolb"},
	{0x5a, 1, 0, decb_inh,	2,	"decb"},
	{0x5b, 1, 0, trap_6811,	0,	"-"},
	{0x5c, 1, 0, incb_inh,	2,	"incb"},
	{0x5d, 1, 0, tstb_inh,	2,	"tstb"},
	{0x5e, 1, 0, trap_6811,	0,	"-"},
	{0x5f, 1, 0, clrb_inh,	2,	"clrb"},

	{0x60, 1, 1, neg_ind_x,	6,	"neg   %02x,x"},
	{0x61, 1, 0, trap_6811,	0,	"-"},
	{0x62, 1, 0, trap_6811,	0,	"-"},
	{0x63, 1, 1, com_ind_x,	6,	"com   %02x,x"},
	{0x64, 1, 1, lsr_ind_x,	6,	"lsr   %02x,x"},
	{0x65, 1, 0, trap_6811,	0,	"-"},
	{0x66, 1, 1, ror_ind_x,	6,	"ror   %02x,x"},
	{0x67, 1, 1, asr_ind_x,	6,	"asr   %02x,x"},
	{0x68, 1, 1, lsl_ind_x,	6,	"lsl   %02x,x"},
	{0x69, 1, 1, rol_ind_x,	6,	"rol   %02x,x"},
	{0x6a, 1, 1, dec_ind_x,	6,	"dec   %02x,x"},
	{0x6b, 1, 0, trap_6811,	0,	"-"},
	{0x6c, 1, 1, inc_ind_x,	6,	"inc   %02x,x"},
	{0x6d, 1, 1, tst_ind_x,	4,	"tst   %02x,x"},
	{0x6e, 1, 1, jmp_ind_x,	3,	"jmp   %02x,x"},
	{0x6f, 1, 1, clr_ind_x,	6,	"clr   %02x,x"},

	{0x70, 1, 2, neg_ext,	6,	"neg   %04x"},
	{0x71, 1, 0, trap_6811,	0,	"-"},
	{0x72, 1, 0, trap_6811,	0,	"-"},
	{0x73, 1, 2, com_ext,	6,	"com   %04x"},
	{0x74, 1, 2, lsr_ext,	6,	"lsr   %04x"},
	{0x75, 1, 0, trap_6811,	0,	"-"},
	{0x76, 1, 2, ror_ext,	6,	"ror   %04x"},
	{0x77, 1, 2, asr_ext,	6,	"asr   %04x"},
	{0x78, 1, 2, lsl_ext,	6,	"lsl   %04x"},
	{0x79, 1, 2, rol_ext,	6,	"rol   %04x"},
	{0x7a, 1, 2, dec_ext,	6,	"dec   %04x"},
	{0x6b, 1, 0, trap_6811,	0,	"-"},
	{0x7c, 1, 2, inc_ext,	6,	"inc   %04x"},
	{0x7d, 1, 2, tst_ext,	6,	"tst   %04x"},
	{0x7e, 1, 2, jmp_ext,	3,	"jmp   %04x"},
	{0x7f, 1, 2, clr_ext,	5,	"clr   %04x"},

	{0x80, 1, 1, suba_imm,	2,	"suba #%02x"},
	{0x81, 1, 1, cmpa_imm,	2,	"cmpa #%02x"},
	{0x82, 1, 1, sbca_imm,	2,	"sbca #%02x"},
	{0x83, 1, 2, subd_imm,	4,	"subd #%02x"},
	{0x84, 1, 1, anda_imm,	2,	"anda #%02x"},
	{0x85, 1, 1, bita_imm,	2,	"bita #%02x"},
	{0x86, 1, 1, ldaa_imm,	2,	"ldaa #%02x"},
	{0x87, 1, 1, trap_6811,	0,	"-"},
	{0x88, 1, 1, eora_imm,	2,	"eora #%02x"},
	{0x89, 1, 1, adca_imm,	2,	"adca #%02x"},
	{0x8a, 1, 1, oraa_imm,	2,	"oraa #%02x"},
	{0x8b, 1, 1, adda_imm,	2,	"adda #%02x"},
	{0x8c, 1, 2, cpx_imm,	4,	"cpx  #%04x"},
	{0x8d, 1, 1, bsr_rel,	6,	"bsr   %02x"},
	{0x8e, 1, 2, lds_imm,	3,	"lds  #%04x"},
 	{0x8f, 1, 0, xgdx_inh,	3,	"xgdx"},

	{0x90, 1, 1, suba_dir,	3,	"suba  %02x"},
	{0x91, 1, 1, cmpa_dir,	3,	"cmpa  %02x"},
	{0x92, 1, 1, sbca_dir,	3,	"sbca  %02x"},
	{0x93, 1, 1, subd_dir,	5,	"subd  %02x"},
	{0x94, 1, 1, anda_dir,	3,	"anda  %02x"},
	{0x95, 1, 1, bita_dir,	3,	"bita  %02x"},
	{0x96, 1, 1, ldaa_dir,	3,	"ldaa  %02x"},
	{0x97, 1, 1, staa_dir,	3,	"staa  %02x"},
	{0x98, 1, 1, eora_dir,	3,	"eora  %02x"},
	{0x99, 1, 1, adca_dir,	3,	"adca  %02x"},
	{0x9a, 1, 1, oraa_dir,	3,	"oraa  %02x"},
	{0x9b, 1, 1, adda_dir,	3,	"adda  %02x"},
	{0x9c, 1, 1, cpx_dir,	5,	"cpx   %02x"},
	{0x9d, 1, 1, jsr_dir,	5,	"jsr   %02x"},
	{0x9e, 1, 1, lds_dir,	4,	"lds   %02x"},
	{0x9f, 1, 1, sts_dir,	4,	"sts   %02x"},

	{0xA0, 1, 1, suba_ind_x,	4, "suba  %02x,x"},
	{0xA1, 1, 1, cmpa_ind_x,	4, "cmpa  %02x,x"},
	{0xA2, 1, 1, sbca_ind_x,	4, "sbca  %02x,x"},
	{0xA3, 1, 1, subd_ind_x,	6, "subd  %02x,x"},
	{0xA4, 1, 1, anda_ind_x,	4, "anda  %02x,x"},
	{0xA5, 1, 1, bita_ind_x,	4, "bita  %02x,x"},
	{0xA6, 1, 1, ldaa_ind_x,	4, "ldaa  %02x,x"},
	{0xA7, 1, 1, staa_ind_x,	4, "staa  %02x,x"},
	{0xA8, 1, 1, eora_ind_x,	4, "eora  %02x,x"},
	{0xA9, 1, 1, adca_ind_x,	4, "adca  %02x,x"},
	{0xAa, 1, 1, oraa_ind_x,	4, "oraa  %02x,x"},
	{0xAb, 1, 1, adda_ind_x,	4, "adda  %02x,x"},
	{0xAc, 1, 1, cpx_ind_x,		6, "cpx   %02x,x"},
	{0xAd, 1, 1, jsr_ind_x,		6, "jsr   %02x,x"},
	{0xAe, 1, 1, lds_ind_x,		5, "lds   %02x,x"},
	{0xAf, 1, 1, sts_ind_x,		5, "sts   %02x,x"},

	{0xB0, 1, 2, suba_ext,		4, "suba  %04x"},
	{0xB1, 1, 2, cmpa_ext,		4, "cmpa  %04x"},
	{0xB2, 1, 2, sbca_ext,		4, "sbca  %04x"},
	{0xB3, 1, 2, subd_ext,		5, "subd  %04x"},
	{0xB4, 1, 2, anda_ext,		4, "anda  %04x"},
	{0xB5, 1, 2, bita_ext,		4, "bita  %04x"},
	{0xB6, 1, 2, ldaa_ext,		4, "ldaa  %04x"},
	{0xB7, 1, 2, staa_ext,		4, "staa  %04x"},
	{0xB8, 1, 2, eora_ext,		4, "eora  %04x"},
	{0xB9, 1, 2, adca_ext,		4, "adca  %04x"},
	{0xBa, 1, 2, oraa_ext,		4, "oraa  %04x"},
	{0xBb, 1, 2, adda_ext,		4, "adda  %04x"},
	{0xBc, 1, 2, cpx_ext,		6, "cpx   %04x"},
	{0xBd, 1, 2, jsr_ext,		6, "jsr   %04x"},
	{0xBe, 1, 2, lds_ext,		5, "lds   %04x"},
	{0xBf, 1, 2, sts_ext,		5, "sts   %04x"},

	{0xC0, 1, 1, subb_imm,	2,	"subb #%02x"},
	{0xC1, 1, 1, cmpb_imm,	2,	"cmpb #%02x"},
	{0xC2, 1, 1, sbcb_imm,	2,	"sbcb #%02x"},
	{0xC3, 1, 2, addd_imm,	4,	"addd #%04x"},
	{0xC4, 1, 1, andb_imm,	2,	"andb #%02x"},
	{0xC5, 1, 1, bitb_imm,	2,	"bitb #%02x"},
	{0xC6, 1, 1, ldab_imm,	2,	"ldab #%02x"},
	{0xC7, 1, 0, trap_6811,	0,	"-"},
	{0xC8, 1, 1, eorb_imm,	2,	"eorb #%02x"},
	{0xC9, 1, 1, adcb_imm,	2,	"adcb #%02x"},
	{0xCa, 1, 1, orab_imm,	2,	"orab #%02x"},
	{0xCb, 1, 1, addb_imm,	2,	"addb #%02x"},
	{0xCc, 1, 2, ldd_imm,	3,	"ldd  #%04x"},
	{0xCd, 0, 0, NULL,	0,	"page4",	opcodetab4},
	{0xCe, 1, 2, ldx_imm,	3,	"ldx  #%04x"},
	{0xCf, 1, 0, stop_inh,	2,	"stop"},

	{0xD0, 1, 1, subb_dir,	3,	"subb  %02x"},
	{0xD1, 1, 1, cmpb_dir,	3,	"cmpb  %02x"},
	{0xD2, 1, 1, sbcb_dir,	3,	"sbcb  %02x"},
	{0xD3, 1, 1, addd_dir,	5,	"addd  %02x"},
	{0xD4, 1, 1, andb_dir,	3,	"anda  %02x"},
	{0xD5, 1, 1, bitb_dir,	3,	"bita  %02x"},
	{0xD6, 1, 1, ldab_dir,	3,	"ldab  %02x"},
	{0xD7, 1, 1, stab_dir,	3,	"stab  %02x"},
	{0xD8, 1, 1, eorb_dir,	3,	"eorb  %02x"},
	{0xD9, 1, 1, adcb_dir,	3,	"adcb  %02x"},
	{0xDa, 1, 1, orab_dir,	3,	"orab  %02x"},
	{0xDb, 1, 1, addb_dir,	3,	"addb  %02x"},
	{0xDc, 1, 1, ldd_dir,	4,	"ldd   %02x"},
	{0xDd, 1, 1, std_dir,	4,	"std   %02x"},
	{0xDe, 1, 1, ldx_dir,	4,	"ldx   %02x"},
	{0xDf, 1, 1, stx_dir,	4,	"stx   %02x"},

	{0xE0, 1, 1, subb_ind_x,	4, "subb  %02x,x"},
	{0xE1, 1, 1, cmpb_ind_x,	4, "cmpb  %02x,x"},
	{0xE2, 1, 1, sbcb_ind_x,	4, "sbcb  %02x,x"},
	{0xE3, 1, 1, addd_ind_x,	6, "addd  %02x,x"},
	{0xE4, 1, 1, andb_ind_x,	4, "anda  %02x,x"},
	{0xE5, 1, 1, bitb_ind_x,	4, "bita  %02x,x"},
	{0xE6, 1, 1, ldab_ind_x,	4, "ldab  %02x,x"},
	{0xE7, 1, 1, stab_ind_x,	4, "stab  %02x,x"},
	{0xE8, 1, 1, eorb_ind_x,	4, "eorb  %02x,x"},
	{0xE9, 1, 1, adcb_ind_x,	4, "adcb  %02x,x"},
	{0xEa, 1, 1, orab_ind_x,	4, "orab  %02x,x"},
	{0xEb, 1, 1, addb_ind_x,	4, "addb  %02x,x"},
	{0xEc, 1, 1, ldd_ind_x,		5, "ldd   %02x,x"},
	{0xEd, 1, 1, std_ind_x,		5, "std   %02x,x"},
	{0xEe, 1, 1, ldx_ind_x,		5, "ldx   %02x,x"},
	{0xEf, 1, 1, stx_ind_x,		5, "stx   %02x,x"},

	{0xF0, 1, 2, subb_ext,	4,	"subb  %04x"},
	{0xF1, 1, 2, cmpb_ext,	4,	"cmpb  %04x"},
	{0xF2, 1, 2, sbcb_ext,	4,	"sbcb  %04x"},
	{0xF3, 1, 2, addd_ext,	6,	"addd  %04x"},
	{0xF4, 1, 2, andb_ext,	4,	"anda  %04x"},
	{0xF5, 1, 2, bitb_ext,	4,	"bita  %04x"},
	{0xF6, 1, 2, ldab_ext,	4,	"ldab  %04x"},
	{0xF7, 1, 2, stab_ext,	4,	"stab  %04x"},
	{0xF8, 1, 2, eorb_ext,	4,	"eorb  %04x"},
	{0xF9, 1, 2, adcb_ext,	4,	"adcb  %04x"},
	{0xFa, 1, 2, orab_ext,	4,	"orab  %04x"},
	{0xFb, 1, 2, addb_ext,	4,	"addb  %04x"},
	{0xFc, 1, 2, ldd_ext,	5,	"ldd   %04x"},
	{0xFd, 1, 2, std_ext,	5,	"std   %04x"},
	{0xFe, 1, 2, ldx_ext,	5,	"ldx   %04x"},
	{0xFf, 1, 2, stx_ext,	5,	"stx   %04x"},
};



/*
 * Opcode table 2
 */
struct opcode opcodetab2[256] = {
	{0x00, 2, 0, trap_6811,	0,	"-"},
	{0x01, 2, 0, trap_6811,	0,	"-"},
	{0x02, 2, 0, trap_6811,	0,	"-"},
	{0x03, 2, 0, trap_6811,	0,	"-"},
	{0x04, 2, 0, trap_6811,	0,	"-"},
	{0x05, 2, 0, trap_6811,	0,	"-"},
	{0x06, 2, 0, trap_6811,	0,	"-"},
	{0x07, 2, 0, trap_6811,	0,	"-"},
	{0x08, 2, 0, iny_inh,	4,	"iny"},
	{0x09, 2, 0, dey_inh,	4,	"dey"},
	{0x0a, 2, 0, trap_6811,	0,	"-"},
	{0x0b, 2, 0, trap_6811,	0,	"-"},
	{0x0c, 2, 0, trap_6811,	0,	"-"},
	{0x0d, 2, 0, trap_6811,	0,	"-"},
	{0x0e, 2, 0, trap_6811,	0,	"-"},
	{0x0f, 2, 0, trap_6811,	0,	"-"},
	{0x10, 2, 0, trap_6811,	0,	"-"},
	{0x11, 2, 0, trap_6811,	0,	"-"},
	{0x12, 2, 0, trap_6811,	0,	"-"},
	{0x13, 2, 0, trap_6811,	0,	"-"},
	{0x14, 2, 0, trap_6811,	0,	"-"},
	{0x15, 2, 0, trap_6811,	0,	"-"},
	{0x16, 2, 0, trap_6811,	0,	"-"},
	{0x17, 2, 0, trap_6811,	0,	"-"},
	{0x18, 2, 0, trap_6811,	0,	"-"},
	{0x19, 2, 0, trap_6811,	0,	"-"},
	{0x1a, 2, 0, trap_6811,	0,	"-"},
	{0x1b, 2, 0, trap_6811,	0,	"-"},
	{0x1c, 2, 2, bset_ind_y, 8,	"bset  %02x,y #%02x"},
	{0x1d, 2, 2, bclr_ind_y, 8,	"bclr  %02x,y #%02x"},
	{0x1e, 2, 3, brset_ind_y, 8,	"brset %02x,y #%02x %02x"},
	{0x1f, 2, 3, brclr_ind_y, 8,	"brclr %02x,y #%02x %02x"},
	{0x20, 2, 0, trap_6811,	0,	"-"},
	{0x21, 2, 0, trap_6811,	0,	"-"},
	{0x22, 2, 0, trap_6811,	0,	"-"},
	{0x23, 2, 0, trap_6811,	0,	"-"},
	{0x24, 2, 0, trap_6811,	0,	"-"},
	{0x25, 2, 0, trap_6811,	0,	"-"},
	{0x26, 2, 0, trap_6811,	0,	"-"},
	{0x27, 2, 0, trap_6811,	0,	"-"},
	{0x28, 2, 0, trap_6811,	0,	"-"},
	{0x29, 2, 0, trap_6811,	0,	"-"},
	{0x2a, 2, 0, trap_6811,	0,	"-"},
	{0x2b, 2, 0, trap_6811,	0,	"-"},
	{0x2c, 2, 0, trap_6811,	0,	"-"},
	{0x2d, 2, 0, trap_6811,	0,	"-"},
	{0x2e, 2, 0, trap_6811,	0,	"-"},
	{0x2f, 2, 0, trap_6811,	0,	"-"},
	{0x30, 2, 0, tsy_inh,	4,	"tsy"},
	{0x31, 2, 0, trap_6811,	0,	"-"},
	{0x32, 2, 0, trap_6811,	0,	"-"},
	{0x33, 2, 0, trap_6811,	0,	"-"},
	{0x34, 2, 0, trap_6811,	0,	"-"},
	{0x35, 2, 0, tys_inh,	4,	"tys"},
	{0x36, 2, 0, trap_6811,	0,	"-"},
	{0x37, 2, 0, trap_6811,	0,	"-"},
	{0x38, 2, 0, puly_inh,	6,	"puly"},
	{0x39, 2, 0, trap_6811,	0,	"-"},
	{0x3a, 2, 0, aby_inh,	4,	"aby"},
	{0x3b, 2, 0, trap_6811,	0,	"-"},
	{0x3c, 2, 0, pshy_inh,	5,	"pshy"},
	{0x3d, 2, 0, trap_6811,	0,	"-"},
	{0x3e, 2, 0, trap_6811,	0,	"-"},
	{0x3f, 2, 0, trap_6811,	0,	"-"},
	{0x40, 2, 0, trap_6811,	0,	"-"},
	{0x41, 2, 0, trap_6811,	0,	"-"},
	{0x42, 2, 0, trap_6811,	0,	"-"},
	{0x43, 2, 0, trap_6811,	0,	"-"},
	{0x44, 2, 0, trap_6811,	0,	"-"},
	{0x45, 2, 0, trap_6811,	0,	"-"},
	{0x46, 2, 0, trap_6811,	0,	"-"},
	{0x47, 2, 0, trap_6811,	0,	"-"},
	{0x48, 2, 0, trap_6811,	0,	"-"},
	{0x49, 2, 0, trap_6811,	0,	"-"},
	{0x4a, 2, 0, trap_6811,	0,	"-"},
	{0x4b, 2, 0, trap_6811,	0,	"-"},
	{0x4c, 2, 0, trap_6811,	0,	"-"},
	{0x4d, 2, 0, trap_6811,	0,	"-"},
	{0x4e, 2, 0, trap_6811,	0,	"-"},
	{0x4f, 2, 0, trap_6811,	0,	"-"},
	{0x50, 2, 0, trap_6811,	0,	"-"},
	{0x51, 2, 0, trap_6811,	0,	"-"},
	{0x52, 2, 0, trap_6811,	0,	"-"},
	{0x53, 2, 0, trap_6811,	0,	"-"},
	{0x54, 2, 0, trap_6811,	0,	"-"},
	{0x55, 2, 0, trap_6811,	0,	"-"},
	{0x56, 2, 0, trap_6811,	0,	"-"},
	{0x57, 2, 0, trap_6811,	0,	"-"},
	{0x58, 2, 0, trap_6811,	0,	"-"},
	{0x59, 2, 0, trap_6811,	0,	"-"},
	{0x5a, 2, 0, trap_6811,	0,	"-"},
	{0x5b, 2, 0, trap_6811,	0,	"-"},
	{0x5c, 2, 0, trap_6811,	0,	"-"},
	{0x5d, 2, 0, trap_6811,	0,	"-"},
	{0x5e, 2, 0, trap_6811,	0,	"-"},
	{0x5f, 2, 0, trap_6811,	0,	"-"},

	{0x60, 2, 1, neg_ind_y,	7,	"neg   %02x,y"},
	{0x61, 2, 0, trap_6811,	0,	"-"},
	{0x62, 2, 0, trap_6811,	0,	"-"},
	{0x63, 2, 1, com_ind_y,	7,	"com   %02x,y"},
	{0x64, 2, 1, lsr_ind_y,	7,	"lsr   %02x,y"},
	{0x65, 2, 0, trap_6811,	0,	"-"},
	{0x66, 2, 1, ror_ind_y,	7,	"ror   %02x,y"},
	{0x67, 2, 1, asr_ind_y,	7,	"asr   %02x,y"},
	{0x68, 2, 1, asl_ind_y,	7,	"asl   %02x,y"},
	{0x69, 2, 1, rol_ind_y,	7,	"rol   %02x,y"},
	{0x6a, 2, 1, dec_ind_y,	7,	"dec   %02x,y"},
	{0x6b, 2, 0, trap_6811,	0,	"-"},
	{0x6c, 2, 1, inc_ind_y,	7,	"inc   %02x,y"},
	{0x6d, 2, 1, tst_ind_y,	7,	"tst   %02x,y"},
	{0x6e, 2, 1, jmp_ind_y,	4,	"jmp   %02x,y"},
	{0x6f, 2, 1, clr_ind_y,	7,	"clr   %02x,y"},

	{0x70, 2, 0, trap_6811,	0,	"-"},
	{0x71, 2, 0, trap_6811,	0,	"-"},
	{0x72, 2, 0, trap_6811,	0,	"-"},
	{0x73, 2, 0, trap_6811,	0,	"-"},
	{0x74, 2, 0, trap_6811,	0,	"-"},
	{0x75, 2, 0, trap_6811,	0,	"-"},
	{0x76, 2, 0, trap_6811,	0,	"-"},
	{0x77, 2, 0, trap_6811,	0,	"-"},
	{0x78, 2, 0, trap_6811,	0,	"-"},
	{0x79, 2, 0, trap_6811,	0,	"-"},
	{0x7a, 2, 0, trap_6811,	0,	"-"},
	{0x7b, 2, 0, trap_6811,	0,	"-"},
	{0x7c, 2, 0, trap_6811,	0,	"-"},
	{0x7d, 2, 0, trap_6811,	0,	"-"},
	{0x7e, 2, 0, trap_6811,	0,	"-"},
	{0x7f, 2, 0, trap_6811,	0,	"-"},

	{0x80, 2, 0, trap_6811,	0,	"-"},
	{0x81, 2, 0, trap_6811,	0,	"-"},
	{0x82, 2, 0, trap_6811,	0,	"-"},
	{0x83, 2, 0, trap_6811,	0,	"-"},
	{0x84, 2, 0, trap_6811,	0,	"-"},
	{0x85, 2, 0, trap_6811,	0,	"-"},
	{0x86, 2, 0, trap_6811,	0,	"-"},
	{0x87, 2, 0, trap_6811,	0,	"-"},
	{0x88, 2, 0, trap_6811,	0,	"-"},
	{0x89, 2, 0, trap_6811,	0,	"-"},
	{0x8a, 2, 0, trap_6811,	0,	"-"},
	{0x8b, 2, 0, trap_6811,	0,	"-"},
	{0x8c, 2, 2, cpy_imm,	5,	"cpy  #%04x"},
	{0x8d, 2, 0, trap_6811,	0,	"-"},
	{0x8e, 2, 0, trap_6811,	0,	"-"},
	{0x8f, 2, 0, xgdy_inh,	4,	"xgdy"},

	{0x90, 2, 0, trap_6811,	0,	"-"},
	{0x91, 2, 0, trap_6811,	0,	"-"},
	{0x92, 2, 1, trap_6811,	0,	"-"},
	{0x93, 2, 0, trap_6811,	0,	"-"},
	{0x94, 2, 0, trap_6811,	0,	"-"},
	{0x95, 2, 0, trap_6811,	0,	"-"},
	{0x96, 2, 0, trap_6811,	0,	"-"},
	{0x97, 2, 0, trap_6811,	0,	"-"},
	{0x98, 2, 0, trap_6811,	0,	"-"},
	{0x99, 2, 0, trap_6811,	0,	"-"},
	{0x9a, 2, 0, trap_6811,	0,	"-"},
	{0x9b, 2, 0, trap_6811,	0,	"-"},
	{0x9c, 2, 0, cpy_dir,	7,	"cpy   %02x"},
	{0x9d, 2, 0, trap_6811,	0,	"-"},
	{0x9e, 2, 0, trap_6811,	0,	"-"},
	{0x9f, 2, 0, trap_6811,	0,	"-"},

	{0xA0, 2, 1, suba_ind_y,	5, "suba  %02x,y"},
	{0xA1, 2, 1, cmpa_ind_y,	5, "cmpa  %02x,y"},
	{0xA2, 2, 1, sbca_ind_y,	5, "sbca  %02x,y"},
	{0xA3, 2, 1, subd_ind_y,	7, "subd  %02x,y"},
	{0xA4, 2, 1, anda_ind_y,	5, "anda  %02x,y"},
	{0xA5, 2, 1, bita_ind_y,	5, "bita  %02x,y"},
	{0xA6, 2, 1, ldaa_ind_y,	5, "ldaa  %02x,y"},
	{0xA7, 2, 1, staa_ind_y,	5, "staa  %02x,y"},
	{0xA8, 2, 1, eora_ind_y,	5, "eora  %02x,y"},
	{0xA9, 2, 1, adca_ind_y,	5, "adca  %02x,y"},
	{0xAa, 2, 1, oraa_ind_y,	5, "oraa  %02x,y"},
	{0xAb, 2, 1, adda_ind_y,	5, "adda  %02x,y"},
	{0xAc, 2, 1, cpy_ind_y,		7, "cpy   %02x,y"},
	{0xAd, 2, 1, jsr_ind_y,		7, "jsr   %02x,y"},
	{0xAe, 2, 1, lds_ind_y,		6, "lds   %02x,y"},
	{0xAf, 2, 1, sts_ind_y,		6, "sts   %02x,y"},

	{0xb0, 2, 0, trap_6811,	0,	"-"},
	{0xb1, 2, 0, trap_6811,	0,	"-"},
	{0xb2, 2, 0, trap_6811,	0,	"-"},
	{0xb3, 2, 1, trap_6811,	0,	"-"},
	{0xb4, 2, 0, trap_6811,	0,	"-"},
	{0xb5, 2, 0, trap_6811,	0,	"-"},
	{0xb6, 2, 0, trap_6811,	0,	"-"},
	{0xb7, 2, 0, trap_6811,	0,	"-"},
	{0xb8, 2, 0, trap_6811,	0,	"-"},
	{0xb9, 2, 0, trap_6811,	0,	"-"},
	{0xba, 2, 0, trap_6811,	0,	"-"},
	{0xbb, 2, 0, trap_6811,	0,	"-"},
	{0xbc, 2, 2, cpy_ext,	7,	"cpy   %04x"},
	{0xbd, 2, 0, trap_6811,	0,	"-"},
	{0xbe, 2, 0, trap_6811,	0,	"-"},
	{0xbf, 2, 0, trap_6811,	0,	"-"},

	{0xc0, 2, 0, trap_6811,	0,	"-"},
	{0xc1, 2, 0, trap_6811,	0,	"-"},
	{0xc2, 2, 0, trap_6811,	0,	"-"},
	{0xc3, 2, 0, trap_6811,	0,	"-"},
	{0xc4, 2, 0, trap_6811,	0,	"-"},
	{0xc5, 2, 0, trap_6811,	0,	"-"},
	{0xc6, 2, 0, trap_6811,	0,	"-"},
	{0xc7, 2, 0, trap_6811,	0,	"-"},
	{0xc8, 2, 0, trap_6811,	0,	"-"},
	{0xc9, 2, 0, trap_6811,	0,	"-"},
	{0xca, 2, 0, trap_6811,	0,	"-"},
	{0xcb, 2, 0, trap_6811,	0,	"-"},
	{0xcc, 2, 0, trap_6811,	0,	"-"},
	{0xcd, 2, 0, trap_6811,	0,	"-"},
	{0xce, 2, 2, ldy_imm,	4,	"ldy  #%04x"},
	{0xcf, 2, 0, trap_6811,	0,	"-"},

	{0xd0, 2, 0, trap_6811,	0,	"-"},
	{0xd1, 2, 0, trap_6811,	0,	"-"},
	{0xd2, 2, 0, trap_6811,	0,	"-"},
	{0xd3, 2, 0, trap_6811,	0,	"-"},
	{0xd4, 2, 0, trap_6811,	0,	"-"},
	{0xd5, 2, 0, trap_6811,	0,	"-"},
	{0xd6, 2, 0, trap_6811,	0,	"-"},
	{0xd7, 2, 0, trap_6811,	0,	"-"},
	{0xd8, 2, 0, trap_6811,	0,	"-"},
	{0xd9, 2, 0, trap_6811,	0,	"-"},
	{0xda, 2, 0, trap_6811,	0,	"-"},
	{0xdb, 2, 0, trap_6811,	0,	"-"},
	{0xdc, 2, 0, trap_6811,	0,	"-"},
	{0xdd, 2, 0, trap_6811,	0,	"-"},
	{0xde, 2, 1, ldy_dir,	0,	"ldy   %02x"},
	{0xdf, 2, 1, sty_dir,	0,	"sty   %02x"},

	{0xE0, 2, 1, subb_ind_y,	5, "subb  %02x,y"},
	{0xE1, 2, 1, cmpb_ind_y,	5, "cmpb  %02x,y"},
	{0xE2, 2, 1, sbcb_ind_y,	5, "sbcb  %02x,y"},
	{0xE3, 2, 1, addd_ind_y,	5, "addd  %02x,y"},
	{0xE4, 2, 1, andb_ind_y,	5, "anda  %02x,y"},
	{0xE5, 2, 1, bitb_ind_y,	5, "bita  %02x,y"},
	{0xE6, 2, 1, ldab_ind_y,	5, "ldab  %02x,y"},
	{0xE7, 2, 1, stab_ind_y,	5, "stab  %02x,y"},
	{0xE8, 2, 1, eorb_ind_y,	5, "eorb  %02x,y"},
	{0xE9, 2, 1, adcb_ind_y,	5, "adcb  %02x,y"},
	{0xEa, 2, 1, orab_ind_y,	5, "orab  %02x,y"},
	{0xEb, 2, 1, addb_ind_y,	5, "addb  %02x,y"},
	{0xEc, 2, 1, ldd_ind_y,		6, "ldd   %02x,y"},
	{0xEd, 2, 1, std_ind_y,		6, "std   %02x,y"},
	{0xEe, 2, 1, ldy_ind_y,		6, "ldy   %02x,y"},
	{0xEf, 2, 1, sty_ind_y,		6, "sty   %02x,y"},

	{0xf0, 2, 0, trap_6811,	0,	"-"},
	{0xf1, 2, 0, trap_6811,	0,	"-"},
	{0xf2, 2, 0, trap_6811,	0,	"-"},
	{0xf3, 2, 0, trap_6811,	0,	"-"},
	{0xf4, 2, 0, trap_6811,	0,	"-"},
	{0xf5, 2, 0, trap_6811,	0,	"-"},
	{0xf6, 2, 0, trap_6811,	0,	"-"},
	{0xf7, 2, 0, trap_6811,	0,	"-"},
	{0xf8, 2, 0, trap_6811,	0,	"-"},
	{0xf9, 2, 0, trap_6811,	0,	"-"},
	{0xfa, 2, 0, trap_6811,	0,	"-"},
	{0xfb, 2, 0, trap_6811,	0,	"-"},
	{0xfc, 2, 0, trap_6811,	0,	"-"},
	{0xfd, 2, 0, trap_6811,	0,	"-"},
	{0xfe, 2, 2, ldy_ext,	6,	"ldy   %04x"},
	{0xff, 2, 2, sty_ext,	6,	"sty   %04x"}
};

/*
 * Opcode table 3
 */
struct opcode opcodetab3[256] = {
	{0x00, 2, 0, trap_6811,	0,	"-"},
	{0x01, 2, 0, trap_6811,	0,	"-"},
	{0x02, 2, 0, trap_6811,	0,	"-"},
	{0x03, 2, 0, trap_6811,	0,	"-"},
	{0x04, 2, 0, trap_6811,	0,	"-"},
	{0x05, 2, 0, trap_6811,	0,	"-"},
	{0x06, 2, 0, trap_6811,	0,	"-"},
	{0x07, 2, 0, trap_6811,	0,	"-"},
	{0x08, 2, 0, trap_6811,	0,	"-"},
	{0x09, 2, 0, trap_6811,	0,	"-"},
	{0x0a, 2, 0, trap_6811,	0,	"-"},
	{0x0b, 2, 0, trap_6811,	0,	"-"},
	{0x0c, 2, 0, trap_6811,	0,	"-"},
	{0x0d, 2, 0, trap_6811,	0,	"-"},
	{0x0e, 2, 0, trap_6811,	0,	"-"},
	{0x0f, 2, 0, trap_6811,	0,	"-"},
	{0x10, 2, 0, trap_6811,	0,	"-"},
	{0x11, 2, 0, trap_6811,	0,	"-"},
	{0x12, 2, 0, trap_6811,	0,	"-"},
	{0x13, 2, 0, trap_6811,	0,	"-"},
	{0x14, 2, 0, trap_6811,	0,	"-"},
	{0x15, 2, 0, trap_6811,	0,	"-"},
	{0x16, 2, 0, trap_6811,	0,	"-"},
	{0x17, 2, 0, trap_6811,	0,	"-"},
	{0x18, 2, 0, trap_6811,	0,	"-"},
	{0x19, 2, 0, trap_6811,	0,	"-"},
	{0x1a, 2, 0, trap_6811,	0,	"-"},
	{0x1b, 2, 0, trap_6811,	0,	"-"},
	{0x1c, 2, 0, trap_6811,	0,	"-"},
	{0x1d, 2, 0, trap_6811,	0,	"-"},
	{0x1e, 2, 0, trap_6811,	0,	"-"},
	{0x1f, 2, 0, trap_6811,	0,	"-"},
	{0x20, 2, 0, trap_6811,	0,	"-"},
	{0x21, 2, 0, trap_6811,	0,	"-"},
	{0x22, 2, 0, trap_6811,	0,	"-"},
	{0x23, 2, 0, trap_6811,	0,	"-"},
	{0x24, 2, 0, trap_6811,	0,	"-"},
	{0x25, 2, 0, trap_6811,	0,	"-"},
	{0x26, 2, 0, trap_6811,	0,	"-"},
	{0x27, 2, 0, trap_6811,	0,	"-"},
	{0x28, 2, 0, trap_6811,	0,	"-"},
	{0x29, 2, 0, trap_6811,	0,	"-"},
	{0x2a, 2, 0, trap_6811,	0,	"-"},
	{0x2b, 2, 0, trap_6811,	0,	"-"},
	{0x2c, 2, 0, trap_6811,	0,	"-"},
	{0x2d, 2, 0, trap_6811,	0,	"-"},
	{0x2e, 2, 0, trap_6811,	0,	"-"},
	{0x2f, 2, 0, trap_6811,	0,	"-"},
	{0x30, 2, 0, trap_6811,	0,	"-"},
	{0x31, 2, 0, trap_6811,	0,	"-"},
	{0x32, 2, 0, trap_6811,	0,	"-"},
	{0x33, 2, 0, trap_6811,	0,	"-"},
	{0x34, 2, 0, trap_6811,	0,	"-"},
	{0x35, 2, 0, trap_6811,	0,	"-"},
	{0x36, 2, 0, trap_6811,	0,	"-"},
	{0x37, 2, 0, trap_6811,	0,	"-"},
	{0x38, 2, 0, trap_6811,	0,	"-"},
	{0x39, 2, 0, trap_6811,	0,	"-"},
	{0x3a, 2, 0, trap_6811,	0,	"-"},
	{0x3b, 2, 0, trap_6811,	0,	"-"},
	{0x3c, 2, 0, trap_6811,	0,	"-"},
	{0x3d, 2, 0, trap_6811,	0,	"-"},
	{0x3e, 2, 0, trap_6811,	0,	"-"},
	{0x3f, 2, 0, trap_6811,	0,	"-"},
	{0x40, 2, 0, trap_6811,	0,	"-"},
	{0x41, 2, 0, trap_6811,	0,	"-"},
	{0x42, 2, 0, trap_6811,	0,	"-"},
	{0x43, 2, 0, trap_6811,	0,	"-"},
	{0x44, 2, 0, trap_6811,	0,	"-"},
	{0x45, 2, 0, trap_6811,	0,	"-"},
	{0x46, 2, 0, trap_6811,	0,	"-"},
	{0x47, 2, 0, trap_6811,	0,	"-"},
	{0x48, 2, 0, trap_6811,	0,	"-"},
	{0x49, 2, 0, trap_6811,	0,	"-"},
	{0x4a, 2, 0, trap_6811,	0,	"-"},
	{0x4b, 2, 0, trap_6811,	0,	"-"},
	{0x4c, 2, 0, trap_6811,	0,	"-"},
	{0x4d, 2, 0, trap_6811,	0,	"-"},
	{0x4e, 2, 0, trap_6811,	0,	"-"},
	{0x4f, 2, 0, trap_6811,	0,	"-"},
	{0x50, 2, 0, trap_6811,	0,	"-"},
	{0x51, 2, 0, trap_6811,	0,	"-"},
	{0x52, 2, 0, trap_6811,	0,	"-"},
	{0x53, 2, 0, trap_6811,	0,	"-"},
	{0x54, 2, 0, trap_6811,	0,	"-"},
	{0x55, 2, 0, trap_6811,	0,	"-"},
	{0x56, 2, 0, trap_6811,	0,	"-"},
	{0x57, 2, 0, trap_6811,	0,	"-"},
	{0x58, 2, 0, trap_6811,	0,	"-"},
	{0x59, 2, 0, trap_6811,	0,	"-"},
	{0x5a, 2, 0, trap_6811,	0,	"-"},
	{0x5b, 2, 0, trap_6811,	0,	"-"},
	{0x5c, 2, 0, trap_6811,	0,	"-"},
	{0x5d, 2, 0, trap_6811,	0,	"-"},
	{0x5e, 2, 0, trap_6811,	0,	"-"},
	{0x5f, 2, 0, trap_6811,	0,	"-"},
	{0x60, 2, 0, trap_6811,	0,	"-"},
	{0x61, 2, 0, trap_6811,	0,	"-"},
	{0x62, 2, 0, trap_6811,	0,	"-"},
	{0x63, 2, 0, trap_6811,	0,	"-"},
	{0x64, 2, 0, trap_6811,	0,	"-"},
	{0x65, 2, 0, trap_6811,	0,	"-"},
	{0x66, 2, 0, trap_6811,	0,	"-"},
	{0x67, 2, 0, trap_6811,	0,	"-"},
	{0x68, 2, 0, trap_6811,	0,	"-"},
	{0x69, 2, 0, trap_6811,	0,	"-"},
	{0x6a, 2, 0, trap_6811,	0,	"-"},
	{0x6b, 2, 0, trap_6811,	0,	"-"},
	{0x6c, 2, 0, trap_6811,	0,	"-"},
	{0x6d, 2, 0, trap_6811,	0,	"-"},
	{0x6e, 2, 0, trap_6811,	0,	"-"},
	{0x6f, 2, 0, trap_6811,	0,	"-"},
	{0x70, 2, 0, trap_6811,	0,	"-"},
	{0x71, 2, 0, trap_6811,	0,	"-"},
	{0x72, 2, 0, trap_6811,	0,	"-"},
	{0x73, 2, 0, trap_6811,	0,	"-"},
	{0x74, 2, 0, trap_6811,	0,	"-"},
	{0x75, 2, 0, trap_6811,	0,	"-"},
	{0x76, 2, 0, trap_6811,	0,	"-"},
	{0x77, 2, 0, trap_6811,	0,	"-"},
	{0x78, 2, 0, trap_6811,	0,	"-"},
	{0x79, 2, 0, trap_6811,	0,	"-"},
	{0x7a, 2, 0, trap_6811,	0,	"-"},
	{0x7b, 2, 0, trap_6811,	0,	"-"},
	{0x7c, 2, 0, trap_6811,	0,	"-"},
	{0x7d, 2, 0, trap_6811,	0,	"-"},
	{0x7e, 2, 0, trap_6811,	0,	"-"},
	{0x7f, 2, 0, trap_6811,	0,	"-"},
	{0x80, 2, 0, trap_6811,	0,	"-"},
	{0x81, 2, 0, trap_6811,	0,	"-"},
	{0x82, 2, 0, trap_6811,	0,	"-"},
	{0x83, 2, 2, cpd_imm,	5,	"cpd  #%04x"},
	{0x84, 2, 0, trap_6811,	0,	"-"},
	{0x85, 2, 0, trap_6811,	0,	"-"},
	{0x86, 2, 0, trap_6811,	0,	"-"},
	{0x87, 2, 0, trap_6811,	0,	"-"},
	{0x88, 2, 0, trap_6811,	0,	"-"},
	{0x89, 2, 0, trap_6811,	0,	"-"},
	{0x8a, 2, 0, trap_6811,	0,	"-"},
	{0x8b, 2, 0, trap_6811,	0,	"-"},
	{0x8c, 2, 0, trap_6811,	0,	"-"},
	{0x8d, 2, 0, trap_6811,	0,	"-"},
	{0x8e, 2, 0, trap_6811,	0,	"-"},
	{0x8f, 2, 0, trap_6811,	0,	"-"},
	{0x90, 2, 0, trap_6811,	0,	"-"},
	{0x91, 2, 0, trap_6811,	0,	"-"},
	{0x92, 2, 0, trap_6811,	0,	"-"},
	{0x93, 2, 1, cpd_dir,	6,	"cpd   %02x"},
	{0x94, 2, 0, trap_6811,	0,	"-"},
	{0x95, 2, 0, trap_6811,	0,	"-"},
	{0x96, 2, 0, trap_6811,	0,	"-"},
	{0x97, 2, 0, trap_6811,	0,	"-"},
	{0x98, 2, 0, trap_6811,	0,	"-"},
	{0x99, 2, 0, trap_6811,	0,	"-"},
	{0x9a, 2, 0, trap_6811,	0,	"-"},
	{0x9b, 2, 0, trap_6811,	0,	"-"},
	{0x9c, 2, 0, trap_6811,	0,	"-"},
	{0x9d, 2, 0, trap_6811,	0,	"-"},
	{0x9e, 2, 0, trap_6811,	0,	"-"},
	{0x9f, 2, 0, trap_6811,	0,	"-"},
	{0xa0, 2, 0, trap_6811,	0,	"-"},
	{0xa1, 2, 0, trap_6811,	0,	"-"},
	{0xa2, 2, 0, trap_6811,	0,	"-"},
	{0xa3, 2, 1, cpd_ind_x,	7,	"cpd   %02x,x"},
	{0xa4, 2, 0, trap_6811,	0,	"-"},
	{0xa5, 2, 0, trap_6811,	0,	"-"},
	{0xa6, 2, 0, trap_6811,	0,	"-"},
	{0xa7, 2, 0, trap_6811,	0,	"-"},
	{0xa8, 2, 0, trap_6811,	0,	"-"},
	{0xa9, 2, 0, trap_6811,	0,	"-"},
	{0xaa, 2, 0, trap_6811,	0,	"-"},
	{0xab, 2, 0, trap_6811,	0,	"-"},
	{0xac, 2, 1, cpy_ind_x,	7,	"cpy   %02x,x"},
	{0xad, 2, 0, trap_6811,	0,	"-"},
	{0xae, 2, 0, trap_6811,	0,	"-"},
	{0xaf, 2, 0, trap_6811,	0,	"-"},
	{0xb0, 2, 0, trap_6811,	0,	"-"},
	{0xb1, 2, 0, trap_6811,	0,	"-"},
	{0xb2, 2, 0, trap_6811,	0,	"-"},
	{0xb3, 2, 2, cpd_ext,	7,	"cpd   %04x"},
	{0xb4, 2, 0, trap_6811,	0,	"-"},
	{0xb5, 2, 0, trap_6811,	0,	"-"},
	{0xb6, 2, 0, trap_6811,	0,	"-"},
	{0xb7, 2, 0, trap_6811,	0,	"-"},
	{0xb8, 2, 0, trap_6811,	0,	"-"},
	{0xb9, 2, 0, trap_6811,	0,	"-"},
	{0xba, 2, 0, trap_6811,	0,	"-"},
	{0xbb, 2, 0, trap_6811,	0,	"-"},
	{0xbc, 2, 0, trap_6811,	0,	"-"},
	{0xbd, 2, 0, trap_6811,	0,	"-"},
	{0xbe, 2, 0, trap_6811,	0,	"-"},
	{0xbf, 2, 0, trap_6811,	0,	"-"},
	{0xc0, 2, 0, trap_6811,	0,	"-"},
	{0xc1, 2, 0, trap_6811,	0,	"-"},
	{0xc2, 2, 0, trap_6811,	0,	"-"},
	{0xc3, 2, 0, trap_6811,	0,	"-"},
	{0xc4, 2, 0, trap_6811,	0,	"-"},
	{0xc5, 2, 0, trap_6811,	0,	"-"},
	{0xc6, 2, 0, trap_6811,	0,	"-"},
	{0xc7, 2, 0, trap_6811,	0,	"-"},
	{0xc8, 2, 0, trap_6811,	0,	"-"},
	{0xc9, 2, 0, trap_6811,	0,	"-"},
	{0xca, 2, 0, trap_6811,	0,	"-"},
	{0xcb, 2, 0, trap_6811,	0,	"-"},
	{0xcc, 2, 0, trap_6811,	0,	"-"},
	{0xcd, 2, 0, trap_6811,	0,	"-"},
	{0xce, 2, 0, trap_6811,	0,	"-"},
	{0xcf, 2, 0, trap_6811,	0,	"-"},
	{0xd0, 2, 0, trap_6811,	0,	"-"},
	{0xd1, 2, 0, trap_6811,	0,	"-"},
	{0xd2, 2, 0, trap_6811,	0,	"-"},
	{0xd3, 2, 0, trap_6811,	0,	"-"},
	{0xd4, 2, 0, trap_6811,	0,	"-"},
	{0xd5, 2, 0, trap_6811,	0,	"-"},
	{0xd6, 2, 0, trap_6811,	0,	"-"},
	{0xd7, 2, 0, trap_6811,	0,	"-"},
	{0xd8, 2, 0, trap_6811,	0,	"-"},
	{0xd9, 2, 0, trap_6811,	0,	"-"},
	{0xda, 2, 0, trap_6811,	0,	"-"},
	{0xdb, 2, 0, trap_6811,	0,	"-"},
	{0xdc, 2, 0, trap_6811,	0,	"-"},
	{0xdd, 2, 0, trap_6811,	0,	"-"},
	{0xde, 2, 0, trap_6811,	0,	"-"},
	{0xdf, 2, 0, trap_6811,	0,	"-"},
	{0xe0, 2, 0, trap_6811,	0,	"-"},
	{0xe1, 2, 0, trap_6811,	0,	"-"},
	{0xe2, 2, 0, trap_6811,	0,	"-"},
	{0xe3, 2, 0, trap_6811,	0,	"-"},
	{0xe4, 2, 0, trap_6811,	0,	"-"},
	{0xe5, 2, 0, trap_6811,	0,	"-"},
	{0xe6, 2, 0, trap_6811,	0,	"-"},
	{0xe7, 2, 0, trap_6811,	0,	"-"},
	{0xe8, 2, 0, trap_6811,	0,	"-"},
	{0xe9, 2, 0, trap_6811,	0,	"-"},
	{0xea, 2, 0, trap_6811,	0,	"-"},
	{0xeb, 2, 0, trap_6811,	0,	"-"},
	{0xec, 2, 0, trap_6811,	0,	"-"},
	{0xed, 2, 0, trap_6811,	0,	"-"},
	{0xee, 2, 1, ldy_ind_x,	6,	"ldy   %02x,x"},
	{0xef, 2, 1, sty_ind_x,	6,	"sty   %02x,x"},
	{0xf0, 2, 0, trap_6811,	0,	"-"},
	{0xf1, 2, 0, trap_6811,	0,	"-"},
	{0xf2, 2, 0, trap_6811,	0,	"-"},
	{0xf3, 2, 0, trap_6811,	0,	"-"},
	{0xf4, 2, 0, trap_6811,	0,	"-"},
	{0xf5, 2, 0, trap_6811,	0,	"-"},
	{0xf6, 2, 0, trap_6811,	0,	"-"},
	{0xf7, 2, 0, trap_6811,	0,	"-"},
	{0xf8, 2, 0, trap_6811,	0,	"-"},
	{0xf9, 2, 0, trap_6811,	0,	"-"},
	{0xfa, 2, 0, trap_6811,	0,	"-"},
	{0xfb, 2, 0, trap_6811,	0,	"-"},
	{0xfc, 2, 0, trap_6811,	0,	"-"},
	{0xfd, 2, 0, trap_6811,	0,	"-"},
	{0xfe, 2, 0, trap_6811,	0,	"-"},
	{0xff, 2, 0, trap_6811,	0,	"-"},
};

/*
 * Opcode table 4
 */
struct opcode opcodetab4[256] = {
	{0x00, 2, 0, trap_6811,	0,	"-"},
	{0x01, 2, 0, trap_6811,	0,	"-"},
	{0x02, 2, 0, trap_6811,	0,	"-"},
	{0x03, 2, 0, trap_6811,	0,	"-"},
	{0x04, 2, 0, trap_6811,	0,	"-"},
	{0x05, 2, 0, trap_6811,	0,	"-"},
	{0x06, 2, 0, trap_6811,	0,	"-"},
	{0x07, 2, 0, trap_6811,	0,	"-"},
	{0x08, 2, 0, trap_6811,	0,	"-"},
	{0x09, 2, 0, trap_6811,	0,	"-"},
	{0x0a, 2, 0, trap_6811,	0,	"-"},
	{0x0b, 2, 0, trap_6811,	0,	"-"},
	{0x0c, 2, 0, trap_6811,	0,	"-"},
	{0x0d, 2, 0, trap_6811,	0,	"-"},
	{0x0e, 2, 0, trap_6811,	0,	"-"},
	{0x0f, 2, 0, trap_6811,	0,	"-"},
	{0x10, 2, 0, trap_6811,	0,	"-"},
	{0x11, 2, 0, trap_6811,	0,	"-"},
	{0x12, 2, 0, trap_6811,	0,	"-"},
	{0x13, 2, 0, trap_6811,	0,	"-"},
	{0x14, 2, 0, trap_6811,	0,	"-"},
	{0x15, 2, 0, trap_6811,	0,	"-"},
	{0x16, 2, 0, trap_6811,	0,	"-"},
	{0x17, 2, 0, trap_6811,	0,	"-"},
	{0x18, 2, 0, trap_6811,	0,	"-"},
	{0x19, 2, 0, trap_6811,	0,	"-"},
	{0x1a, 2, 0, trap_6811,	0,	"-"},
	{0x1b, 2, 0, trap_6811,	0,	"-"},
	{0x1c, 2, 0, trap_6811,	0,	"-"},
	{0x1d, 2, 0, trap_6811,	0,	"-"},
	{0x1e, 2, 0, trap_6811,	0,	"-"},
	{0x1f, 2, 0, trap_6811,	0,	"-"},
	{0x20, 2, 0, trap_6811,	0,	"-"},
	{0x21, 2, 0, trap_6811,	0,	"-"},
	{0x22, 2, 0, trap_6811,	0,	"-"},
	{0x23, 2, 0, trap_6811,	0,	"-"},
	{0x24, 2, 0, trap_6811,	0,	"-"},
	{0x25, 2, 0, trap_6811,	0,	"-"},
	{0x26, 2, 0, trap_6811,	0,	"-"},
	{0x27, 2, 0, trap_6811,	0,	"-"},
	{0x28, 2, 0, trap_6811,	0,	"-"},
	{0x29, 2, 0, trap_6811,	0,	"-"},
	{0x2a, 2, 0, trap_6811,	0,	"-"},
	{0x2b, 2, 0, trap_6811,	0,	"-"},
	{0x2c, 2, 0, trap_6811,	0,	"-"},
	{0x2d, 2, 0, trap_6811,	0,	"-"},
	{0x2e, 2, 0, trap_6811,	0,	"-"},
	{0x2f, 2, 0, trap_6811,	0,	"-"},
	{0x30, 2, 0, trap_6811,	0,	"-"},
	{0x31, 2, 0, trap_6811,	0,	"-"},
	{0x32, 2, 0, trap_6811,	0,	"-"},
	{0x33, 2, 0, trap_6811,	0,	"-"},
	{0x34, 2, 0, trap_6811,	0,	"-"},
	{0x35, 2, 0, trap_6811,	0,	"-"},
	{0x36, 2, 0, trap_6811,	0,	"-"},
	{0x37, 2, 0, trap_6811,	0,	"-"},
	{0x38, 2, 0, trap_6811,	0,	"-"},
	{0x39, 2, 0, trap_6811,	0,	"-"},
	{0x3a, 2, 0, trap_6811,	0,	"-"},
	{0x3b, 2, 0, trap_6811,	0,	"-"},
	{0x3c, 2, 0, trap_6811,	0,	"-"},
	{0x3d, 2, 0, trap_6811,	0,	"-"},
	{0x3e, 2, 0, trap_6811,	0,	"-"},
	{0x3f, 2, 0, trap_6811,	0,	"-"},
	{0x40, 2, 0, trap_6811,	0,	"-"},
	{0x41, 2, 0, trap_6811,	0,	"-"},
	{0x42, 2, 0, trap_6811,	0,	"-"},
	{0x43, 2, 0, trap_6811,	0,	"-"},
	{0x44, 2, 0, trap_6811,	0,	"-"},
	{0x45, 2, 0, trap_6811,	0,	"-"},
	{0x46, 2, 0, trap_6811,	0,	"-"},
	{0x47, 2, 0, trap_6811,	0,	"-"},
	{0x48, 2, 0, trap_6811,	0,	"-"},
	{0x49, 2, 0, trap_6811,	0,	"-"},
	{0x4a, 2, 0, trap_6811,	0,	"-"},
	{0x4b, 2, 0, trap_6811,	0,	"-"},
	{0x4c, 2, 0, trap_6811,	0,	"-"},
	{0x4d, 2, 0, trap_6811,	0,	"-"},
	{0x4e, 2, 0, trap_6811,	0,	"-"},
	{0x4f, 2, 0, trap_6811,	0,	"-"},
	{0x50, 2, 0, trap_6811,	0,	"-"},
	{0x51, 2, 0, trap_6811,	0,	"-"},
	{0x52, 2, 0, trap_6811,	0,	"-"},
	{0x53, 2, 0, trap_6811,	0,	"-"},
	{0x54, 2, 0, trap_6811,	0,	"-"},
	{0x55, 2, 0, trap_6811,	0,	"-"},
	{0x56, 2, 0, trap_6811,	0,	"-"},
	{0x57, 2, 0, trap_6811,	0,	"-"},
	{0x58, 2, 0, trap_6811,	0,	"-"},
	{0x59, 2, 0, trap_6811,	0,	"-"},
	{0x5a, 2, 0, trap_6811,	0,	"-"},
	{0x5b, 2, 0, trap_6811,	0,	"-"},
	{0x5c, 2, 0, trap_6811,	0,	"-"},
	{0x5d, 2, 0, trap_6811,	0,	"-"},
	{0x5e, 2, 0, trap_6811,	0,	"-"},
	{0x5f, 2, 0, trap_6811,	0,	"-"},
	{0x60, 2, 0, trap_6811,	0,	"-"},
	{0x61, 2, 0, trap_6811,	0,	"-"},
	{0x62, 2, 0, trap_6811,	0,	"-"},
	{0x63, 2, 0, trap_6811,	0,	"-"},
	{0x64, 2, 0, trap_6811,	0,	"-"},
	{0x65, 2, 0, trap_6811,	0,	"-"},
	{0x66, 2, 0, trap_6811,	0,	"-"},
	{0x67, 2, 0, trap_6811,	0,	"-"},
	{0x68, 2, 0, trap_6811,	0,	"-"},
	{0x69, 2, 0, trap_6811,	0,	"-"},
	{0x6a, 2, 0, trap_6811,	0,	"-"},
	{0x6b, 2, 0, trap_6811,	0,	"-"},
	{0x6c, 2, 0, trap_6811,	0,	"-"},
	{0x6d, 2, 0, trap_6811,	0,	"-"},
	{0x6e, 2, 0, trap_6811,	0,	"-"},
	{0x6f, 2, 0, trap_6811,	0,	"-"},
	{0x70, 2, 0, trap_6811,	0,	"-"},
	{0x71, 2, 0, trap_6811,	0,	"-"},
	{0x72, 2, 0, trap_6811,	0,	"-"},
	{0x73, 2, 0, trap_6811,	0,	"-"},
	{0x74, 2, 0, trap_6811,	0,	"-"},
	{0x75, 2, 0, trap_6811,	0,	"-"},
	{0x76, 2, 0, trap_6811,	0,	"-"},
	{0x77, 2, 0, trap_6811,	0,	"-"},
	{0x78, 2, 0, trap_6811,	0,	"-"},
	{0x79, 2, 0, trap_6811,	0,	"-"},
	{0x7a, 2, 0, trap_6811,	0,	"-"},
	{0x7b, 2, 0, trap_6811,	0,	"-"},
	{0x7c, 2, 0, trap_6811,	0,	"-"},
	{0x7d, 2, 0, trap_6811,	0,	"-"},
	{0x7e, 2, 0, trap_6811,	0,	"-"},
	{0x7f, 2, 0, trap_6811,	0,	"-"},
	{0x80, 2, 0, trap_6811,	0,	"-"},
	{0x81, 2, 0, trap_6811,	0,	"-"},
	{0x82, 2, 0, trap_6811,	0,	"-"},
	{0x83, 2, 0, trap_6811,	0,	"-"},
	{0x84, 2, 0, trap_6811,	0,	"-"},
	{0x85, 2, 0, trap_6811,	0,	"-"},
	{0x86, 2, 0, trap_6811,	0,	"-"},
	{0x87, 2, 0, trap_6811,	0,	"-"},
	{0x88, 2, 0, trap_6811,	0,	"-"},
	{0x89, 2, 0, trap_6811,	0,	"-"},
	{0x8a, 2, 0, trap_6811,	0,	"-"},
	{0x8b, 2, 0, trap_6811,	0,	"-"},
	{0x8c, 2, 0, trap_6811,	0,	"-"},
	{0x8d, 2, 0, trap_6811,	0,	"-"},
	{0x8e, 2, 0, trap_6811,	0,	"-"},
	{0x8f, 2, 0, trap_6811,	0,	"-"},
	{0x90, 2, 0, trap_6811,	0,	"-"},
	{0x91, 2, 0, trap_6811,	0,	"-"},
	{0x92, 2, 0, trap_6811,	0,	"-"},
	{0x93, 2, 0, trap_6811,	0,	"-"},
	{0x94, 2, 0, trap_6811,	0,	"-"},
	{0x95, 2, 0, trap_6811,	0,	"-"},
	{0x96, 2, 0, trap_6811,	0,	"-"},
	{0x97, 2, 0, trap_6811,	0,	"-"},
	{0x98, 2, 0, trap_6811,	0,	"-"},
	{0x99, 2, 0, trap_6811,	0,	"-"},
	{0x9a, 2, 0, trap_6811,	0,	"-"},
	{0x9b, 2, 0, trap_6811,	0,	"-"},
	{0x9c, 2, 0, trap_6811,	0,	"-"},
	{0x9d, 2, 0, trap_6811,	0,	"-"},
	{0x9e, 2, 0, trap_6811,	0,	"-"},
	{0x9f, 2, 0, trap_6811,	0,	"-"},
	{0xa0, 2, 0, trap_6811,	0,	"-"},
	{0xa1, 2, 0, trap_6811,	0,	"-"},
	{0xa2, 2, 0, trap_6811,	0,	"-"},
	{0xa3, 2, 1, cpd_ind_y,	7,	"cpd   %02x,y"},
	{0xa4, 2, 0, trap_6811,	0,	"-"},
	{0xa5, 2, 0, trap_6811,	0,	"-"},
	{0xa6, 2, 0, trap_6811,	0,	"-"},
	{0xa7, 2, 0, trap_6811,	0,	"-"},
	{0xa8, 2, 0, trap_6811,	0,	"-"},
	{0xa9, 2, 0, trap_6811,	0,	"-"},
	{0xaa, 2, 0, trap_6811,	0,	"-"},
	{0xab, 2, 0, trap_6811,	0,	"-"},
	{0xac, 2, 1, cpx_ind_y,	7,	"cpx   %02x,y"},
	{0xad, 2, 0, trap_6811,	0,	"-"},
	{0xae, 2, 0, trap_6811,	0,	"-"},
	{0xaf, 2, 0, trap_6811,	0,	"-"},
	{0xb0, 2, 0, trap_6811,	0,	"-"},
	{0xb1, 2, 0, trap_6811,	0,	"-"},
	{0xb2, 2, 0, trap_6811,	0,	"-"},
	{0xb3, 2, 0, trap_6811,	0,	"-"},
	{0xb4, 2, 0, trap_6811,	0,	"-"},
	{0xb5, 2, 0, trap_6811,	0,	"-"},
	{0xb6, 2, 0, trap_6811,	0,	"-"},
	{0xb7, 2, 0, trap_6811,	0,	"-"},
	{0xb8, 2, 0, trap_6811,	0,	"-"},
	{0xb9, 2, 0, trap_6811,	0,	"-"},
	{0xba, 2, 0, trap_6811,	0,	"-"},
	{0xbb, 2, 0, trap_6811,	0,	"-"},
	{0xbc, 2, 0, trap_6811,	0,	"-"},
	{0xbd, 2, 0, trap_6811,	0,	"-"},
	{0xbe, 2, 0, trap_6811,	0,	"-"},
	{0xbf, 2, 0, trap_6811,	0,	"-"},
	{0xc0, 2, 0, trap_6811,	0,	"-"},
	{0xc1, 2, 0, trap_6811,	0,	"-"},
	{0xc2, 2, 0, trap_6811,	0,	"-"},
	{0xc3, 2, 0, trap_6811,	0,	"-"},
	{0xc4, 2, 0, trap_6811,	0,	"-"},
	{0xc5, 2, 0, trap_6811,	0,	"-"},
	{0xc6, 2, 0, trap_6811,	0,	"-"},
	{0xc7, 2, 0, trap_6811,	0,	"-"},
	{0xc8, 2, 0, trap_6811,	0,	"-"},
	{0xc9, 2, 0, trap_6811,	0,	"-"},
	{0xca, 2, 0, trap_6811,	0,	"-"},
	{0xcb, 2, 0, trap_6811,	0,	"-"},
	{0xcc, 2, 0, trap_6811,	0,	"-"},
	{0xcd, 2, 0, trap_6811,	0,	"-"},
	{0xce, 2, 0, trap_6811,	0,	"-"},
	{0xcf, 2, 0, trap_6811,	0,	"-"},
	{0xd0, 2, 0, trap_6811,	0,	"-"},
	{0xd1, 2, 0, trap_6811,	0,	"-"},
	{0xd2, 2, 0, trap_6811,	0,	"-"},
	{0xd3, 2, 0, trap_6811,	0,	"-"},
	{0xd4, 2, 0, trap_6811,	0,	"-"},
	{0xd5, 2, 0, trap_6811,	0,	"-"},
	{0xd6, 2, 0, trap_6811,	0,	"-"},
	{0xd7, 2, 0, trap_6811,	0,	"-"},
	{0xd8, 2, 0, trap_6811,	0,	"-"},
	{0xd9, 2, 0, trap_6811,	0,	"-"},
	{0xda, 2, 0, trap_6811,	0,	"-"},
	{0xdb, 2, 0, trap_6811,	0,	"-"},
	{0xdc, 2, 0, trap_6811,	0,	"-"},
	{0xdd, 2, 0, trap_6811,	0,	"-"},
	{0xde, 2, 0, trap_6811,	0,	"-"},
	{0xdf, 2, 0, trap_6811,	0,	"-"},
	{0xe0, 2, 0, trap_6811,	0,	"-"},
	{0xe1, 2, 0, trap_6811,	0,	"-"},
	{0xe2, 2, 0, trap_6811,	0,	"-"},
	{0xe3, 2, 0, trap_6811,	0,	"-"},
	{0xe4, 2, 0, trap_6811,	0,	"-"},
	{0xe5, 2, 0, trap_6811,	0,	"-"},
	{0xe6, 2, 0, trap_6811,	0,	"-"},
	{0xe7, 2, 0, trap_6811,	0,	"-"},
	{0xe8, 2, 0, trap_6811,	0,	"-"},
	{0xe9, 2, 0, trap_6811,	0,	"-"},
	{0xea, 2, 0, trap_6811,	0,	"-"},
	{0xeb, 2, 0, trap_6811,	0,	"-"},
	{0xec, 2, 0, trap_6811,	0,	"-"},
	{0xed, 2, 0, trap_6811,	0,	"-"},
	{0xee, 2, 1, ldx_ind_y,	6,	"ldx   %02x,y"},
	{0xef, 2, 1, stx_ind_y,	6,	"stx   %02x,y"},
	{0xf0, 2, 0, trap_6811,	0,	"-"},
	{0xf1, 2, 0, trap_6811,	0,	"-"},
	{0xf2, 2, 0, trap_6811,	0,	"-"},
	{0xf3, 2, 0, trap_6811,	0,	"-"},
	{0xf4, 2, 0, trap_6811,	0,	"-"},
	{0xf5, 2, 0, trap_6811,	0,	"-"},
	{0xf6, 2, 0, trap_6811,	0,	"-"},
	{0xf7, 2, 0, trap_6811,	0,	"-"},
	{0xf8, 2, 0, trap_6811,	0,	"-"},
	{0xf9, 2, 0, trap_6811,	0,	"-"},
	{0xfa, 2, 0, trap_6811,	0,	"-"},
	{0xfb, 2, 0, trap_6811,	0,	"-"},
	{0xfc, 2, 0, trap_6811,	0,	"-"},
	{0xfd, 2, 0, trap_6811,	0,	"-"},
	{0xfe, 2, 0, trap_6811,	0,	"-"},
	{0xff, 2, 0, trap_6811,	0,	"-"},
};