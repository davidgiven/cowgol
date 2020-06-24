/* m68xx opcode table format */

#ifndef M68XXTAB_H
#define M68XXTAB_H

#include "defs.h"

struct opcode {
	u_char		op_value;	/* Value of first opcode	*/
#ifdef M6811
	u_char		op_n_opcodes;	/* Number of opcode bytes	*/
#endif
	u_char		op_n_operands;	/* No. of bytes in operand	*/
	void		(*op_func)();	/* Func that "executes" opcode	*/
	u_char		op_n_cycles;	/* No. of clock cycles		*/
	char		*op_mnemonic;	/* Printout format string	*/
#ifdef M6811
	struct opcode	*op_nexttab;	/* Pointer to next opcode table	*/
#endif
#ifdef H6303
	u_char		op_addrmode;	/* Addressing mode
	 	 	 	 	 	 	 	 	0 = Immediate
	 	 	 	 	 	 	 	 	1 = Direct Addressing (Zero Page)
	 	 	 	 	 	 	 	 	2 = Extended Addressing
	 	 	 	 	 	 	 	 	3 = Indexed Addressing
	 	 	 	 	 	 	 	 	4 = Implied Addressing
	 	 	 	 	 	 	 	 	5 = Relative Addressing
	 	 	 	 	 	 	 	 	6 = Immediate, Direct
	 	 	 	 	 	 	 	 	7 = Immediate, Indexed
	 	 	 	 	 	 	 	 	*/
#endif
};

#if defined(__STDC__) || defined(__cplusplus)
# define P_(s) s
#else
# define P_(s) ()
#endif

#ifdef M6811
  extern struct opcode opcodetab[], opcodetab2[], opcodetab3[], opcodetab4[];
#else
  extern struct opcode opcodetab[]; /* Single page */
#endif

#undef P_

#endif /* M68XXTAB_H */


