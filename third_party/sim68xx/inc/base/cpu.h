/*
 *	General purpose CPU info
 */
#ifndef CPU_H
#define CPU_H

#include "defs.h"

enum cpu_states {IDLE, RUNNING};

struct cpu {
	/*
	 *  Debug registers: stack limits
	 */
	struct {
		unsigned min:16;
		unsigned max:16;
	} stack;
	unsigned long ncycles;
	enum cpu_states state;

#if 0
	/* 
	 * The cpu specific API we use
	 * (but we inline functions to get better performance).
	 */
	struct {
		int (*reset) ();	/* Chip reset event */
		int (*instr_exec) ();	/* Step one instruction */
		int (*instr_print) ();	/* Print one instruction */
		int (*reg_printall)();	/* Print registers */
	} chip;
#endif

};

extern struct cpu cpu;

/*
 * Function prototypes (and macros)
 */

/*
 * The first macros here are very frequently called
 */
#define cpu_getncycles()	cpu.ncycles
#define cpu_setncycles(value)	(cpu.ncycles = value)

#define cpu_getstackmin()	cpu.stack.min
#define cpu_getstackmax()	cpu.stack.max

#define cpu_setstackmin(value)	(cpu.stack.min = value)
#define cpu_setstackmax(value)	(cpu.stack.max = value)

#define cpu_start()		(cpu.state = RUNNING)
#define cpu_stop()		(cpu.state = IDLE)
#define cpu_isrunning()		(cpu.state == RUNNING)


#if defined(__STDC__) || defined(__cplusplus)
# define P_(s) s
#else
# define P_(s) ()
#endif

extern void cpu_reset P_((void));
extern void cpu_print P_((void));

#endif /* CPU_H */
