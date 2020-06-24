/* <<<                                  */
/* Copyright (c) 1994-1996 Arne Riiber. */
/* All rights reserved.                 */
/* >>>                                  */
/*
 * command.c - command handler
 */

/*
 * $Id: command.c,v 1.3 1995/06/24 11:45:39 arne Exp arne $
 *
 * $Log: command.c,v $
 * Revision 1.3  1995/06/24  11:45:39  arne
 * Symbol support. Tty nonblocking mode for simulating serial input.
 * Callstack cleanup.
 *
 * Revision 1.2  1994/08/23  22:22:52  arne
 * Added commandloop(), commandinit(), commandexit(), command(buf)
 * to make reading of commands from file easy.
 *
 * Revision 1.1  1994/08/23  07:41:14  arne
 * Initial revision
 *
 *
 */

#include <errno.h>
#include <signal.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "defs.h"
#include "cpu.h"
#include "memory.h"
#include "reg.h"
#include "instr.h"
#include "tty.h"
#include "callstac.h"
#include "io.h"
#include "opfunc.h"

#ifdef USE_PROTOTYPES
#include "symtab.h"
#endif


#define MAXARGS 100	/* Max. args in a command */

int nerrors = 0;		/* shared with error.c */

static u_int   unasm_addr;	/* Address to start unassembling */
static u_int   unasm_count = 10;
static u_int   dump_addr;	/* Address to start memory dump */
static u_int   dump_count = 10*16;
static int     usr_int = 0;	/* Set to 1 by signal handler */



/*
 * unassemble - unassemble 'ninstr' instructions starting at address 'addr'
 *
 * returns the new address to unassemble
 */
u_int unassemble (u_int addr, int ninstr)
{
	int i;

	for (i=0; i<ninstr; i++)
		addr += instr_print (addr);
	return addr;
}


/*
 * list_breaks - list active breakpoints
 */
static void list_breaks (u_char *breaks)
{
	int i;
	int n_breaks = 0;

	printf ("Active breakpoints:\n");
	for (i=0; i<MEMSIZE; i++)
		if (breaks[i])
		{
			char *name = sym_find_name (i);
			printf ("\t%04x\t%s\n", i, name ? name : "");
			++n_breaks;
		}

	if (n_breaks == 0)
		printf ("\tNone\n");
}


/*
 *  set_break - set or clear breakpoint at the given address
 */
static void set_break (u_char *breaks, u_int addr, int count)
{
	char *p;

	if (count)
		p = "set";
	else
		p = "cleared";

	breaks[addr] = count;
	printf ("Breakpoint at %04x %s\n", addr, p);
}


/*
 * sig_int - called when user presses the Interrupt key (normally Ctrl-C)
 */
void sig_int_handler (int subcode)
{
	usr_int = 1;
	signal (SIGINT, sig_int_handler);
}

/*
 * split - split 'buf' into strings 'cmd[0..MAXARGS-1]'
 */
void split (	char **cmd, char  *buf, int   *argc)
{
	int i = 0;

	if ((cmd[0] = strtok (buf, " \t\r\n")))
	{
		for (i = 1; i < *argc; i++)
			if (!(cmd[i] = strtok (NULL," \t\r\n")))
				break;
	}
	*argc = i;
}


/*
 * commandprompt - display command prompt
 */
void commandprompt ()
{
	putchar ('\n');
	putchar ('>');
	fflush (stdout);
}


/*
 * commandinit - initialize command variables
 */
void commandinit ()
{
	static int command_initiated = FALSE;

	if (!command_initiated) {
		command_initiated = TRUE;
		cpu_reset ();
		unasm_addr = reg_getpc();
		dump_addr  = reg_getpc();
	}

	signal (SIGINT, sig_int_handler);
	cpu_print ();
}

/*
 * command_install - install a command handler func (argc, argv)
 *
 */
static int (*ext_cmd)() = NULL;

void command_install (int (*func)())
/* func (int argc, char **argv) */
{
	ext_cmd = func;
}


static char *helptext[] = {
	"Breakpoint commands",
	"	b                       - list breakpoints",
	"	b [+|-] [addr]          - toggle, set(+) or clear(-) breakpoint",
	"	B s|c [addr]            - set/clear breakpoint",
	"	B C                     - clear all breakpoints",
	"	B E|e                   - break on error/no break on error",
	"Memory commands",
	"	md [addr [count]]       - memory display",
	"	mf addr addr hh         - memory fill",
	"	mm addr [hh hh..]       - memory modify",
	"	u  [addr [count]]       - unassemble",
	"Run commands",
	"	e                       - return from subroutine - execute until next rti/rts",
	"	g [addr]                - go",
	"	s                       - step over subroutines",
	"	t                       - trace one instruction",
	"	R                       - jump to reset vector",
	"Stack commands",
	"	c			- print call stack",
	"	C			- print function calls on/off toggle",
	"	w [min max]		- set stack watches",
	"Miscellanous commands",
	"	l                       - list symbols",
	"	!Command                - pass 'Command' to shell",
	"	q                       - quit",
	NULL
};


void print_help ()
{
	int i;

	for (i = 0; helptext[i]; i++)
		printf ("%s\n", helptext[i]);
}

/*
 * command - execute the command passed as argument
 *
 * Returns 0 when the quit command is given, else 1.
 */
int command (u_char *buf)
{
	int		argc;
	char		*argv[MAXARGS];	/* at least 3 */
	static u_int	addr;
	static int	break_on_err;
	static int	trace_function_calls = 0;
	unsigned int i;
	char	tty[MAXBUFSIZE];
	int		n_instr;
	int		io_poll_limit = 500; /* Poll IO each 500'th instr */
	unsigned int pc_old = 0;

	if (*buf == '!')	/* Don't split buf into zero-terminated strings */
	{
		system ((char *) buf + 1);
		return 1;
	}

	argc = MAXARGS;
	split (argv, (char *) buf, &argc);

	if (argc == 0)
		return 1;

	switch (*argv[0])
	{

	case 'b':
		/*
		 *  Breakpoint
		 */
		if (argc > 1)
		{
			int  break_index = 1;
			enum break_cmds {
				CLEAR, SET, TOGGLE
			} break_cmd = TOGGLE;

			if (strcmp (argv[1], "-") == 0) {
				break_cmd = CLEAR;
				break_index++;
			} else if (strcmp (argv[1], "+") == 0) {
				break_cmd = SET;
				break_index++;
			} else
				break_cmd = TOGGLE;

			if (argc > break_index)
			{
				/* 'b +', 'b -', 'b addr' or 'b name' */

				if (sym_find_value (argv[break_index], &addr))
					;
				else if (sscanf (argv[break_index], "%x", &addr)==1)
					;
			}
			set_break (breaks, addr, break_cmd == TOGGLE ? 
				   !breaks [addr] : break_cmd);

		}
		else
			list_breaks (breaks);
		break;
	case 'B':
		if (argc < 2)
			break;
		if (*argv[1] == 'C')
		{
			memset (breaks, 0, MEMSIZE);
			printf ("All breakpoints cleared\n");
		}
		else if (*argv[1] == 'c' || *argv[1] == 's')
		{
			if (sym_find_value (argv[2], &addr))
				;
			else if (sscanf (argv[2], "%x", &addr) == 1)
				;
			else
				addr = reg_getpc ();
			set_break (breaks, addr, *argv[1] == 's');
		}
		else if (*argv[1] == 'e')
		{
			break_on_err = 0;
			printf ("No break on error\n");
		}
		else if (*argv[1] == 'E')
		{
			break_on_err = 1;
			printf ("Break on error\n");
		}
		break;

	case 'c':	/* Call stack */
		callstack_print ();
		break;
	case 'C':
		if (argc > 1 && strncmp (argv[1], "on", 2) == 0)
			callstack_trace (trace_function_calls = 1);
		else if (argc > 1 && strncmp (argv[1], "off", 3) == 0)
			callstack_trace (trace_function_calls = 0);
		else /* Toggle */
			callstack_trace (trace_function_calls = !trace_function_calls);
		printf ("Trace function calls is %s\n", trace_function_calls ? "on" : "off");
		break;
			
	case 'g':	/* Go */
		if (argc > 1)
		{
			if (sym_find_value (argv[1], &addr)) {
				reg_setpc (addr);
			} else if (sscanf (argv[1], "%x",  &addr) == 1) {
				reg_setpc (addr);
			}
		}
		cpu_start ();
#ifdef HAS_TERMIO
		tty_noblock (0, (char *) tty);
#endif
		nerrors = 0;
		n_instr = 0;
		break_flag = 0;
		printf ("%04x: Running...\n", reg_getpc());
		/*
		 * Repeated 'go' commands must at least execute one instruction
		 * before the next breakpoint.
		 *
		 * Do not want to break on memory access when the opcode is fetched.
		 *
		 * 'instr_exec' will cause 'break_flag' to be set, if a
		 *  memory address 'addr' is accessed and 'breaks[addr]'
		 * is nonzero.
		 *
		 */
		pc_old = reg_getpc ();

		instr_exec ();

		/*
		 * Was it a breakpoint at old program counter?
		 * If yes, clear it, so we don't stop.
		 */
		if (break_flag && break_addr == pc_old) {
			break_flag = 0;
		}

		while (!usr_int && !breaks[reg_getpc ()] && !break_flag && !(break_on_err && nerrors))
		{
			/*
			 * Poll standard input for input to device
			 * each 'n_instr_poll'th instruction
			 */
			if (++n_instr > io_poll_limit) {
				io_poll ();
				n_instr = 0;
			}
			pc_old = reg_getpc ();
			instr_exec ();
		}

		cpu_stop ();
#ifdef HAS_TERMIO
		tty_restore (0, (char *)tty);
#endif
		if (usr_int)
			printf ("Interrupted!\n");
		else if (breaks [reg_getpc ()])
			printf ("Breakpoint before code execution, address %04x!\n", reg_getpc ());
		else if (break_flag)
		{
			printf ("Breakpoint after data access, address %04x!\n", break_addr);
		}

		usr_int = 0;
		{
			int   sub  = callstack_peek_addr();
			char *name = sym_find_name (sub);
			printf ("Subroutine: %04x %s\n", sub, (name ? name : ""));
		}
		/* reg_printall (); */
		/* unassemble (unasm_addr = reg_getpc (), 10); */
		if(break_flag && !(breaks[reg_getpc()]))
		{	// on data breakpoint
			unsigned int pc = reg_getpc();
			// rewind pc to show instruction which caused break
			reg_setpc(pc_old);
			cpu_print();
			// forward PC to original value
			reg_setpc(pc);
			// print current instruction
			instr_print (pc);
		}
		else
		{
			cpu_print ();
		}
		break;

	case 'l':		/* List symbol(s) */
		if (argc > 1)
		{
			if (sym_find_value (argv[1], &i))
				printf ("%s: %04x\n", argv[1], i);
		}
		else
		{
			for (i = 0; i < MEMSIZE; i++)
			{
				char *symname;
				if ((symname = sym_find_name (i)))
					printf ("%04x\t%s\n", i, symname);
			}
		}
		break;

	case 'm': /* Memory */
		if (argc > 1)
		{
			if (sym_find_value (argv[1], &dump_addr))
				;
			else if (sscanf (argv[1], "%x", &dump_addr) == 1)
				;
		}

		if (strcmp (argv[0], "mm") == 0) /* Memory modify */
		{

			/* Should have treated memory as a device? */

			for (i = 2; i<argc && *argv[i]; i++)
			{
				u_char buf[MAXBUFSIZE];
				u_int  number;

				if (sscanf (argv[i], "%x", &number) == 1)
				{
					buf[0] = number & 0xff;
					mem_putb (dump_addr++, buf[0]);
				}
				else if (sscanf (argv[i], "\"%s\"", buf) == 1)
				{
					int j;
					for (j = 0; j < strlen ((char *)buf); j++)
						mem_putb (dump_addr++, buf[j]);
				}
			}
		}
		else if (strcmp (argv[0], "mf") == 0) /* Memory fill */
		{
			if (argc == 4) {
				int j;
				for (j = strtol(argv[1], NULL, 16); j <= strtol(argv[2], NULL, 16); j++)
					mem_putb(j, strtol(argv[3], NULL, 16));
			}
		}
		else if (strcmp (argv[0], "md") == 0) /* Memory display */
		{
			if (argc > 2) 
				sscanf (argv[2], "%x", &dump_count);
			dump_addr = mem_print (dump_addr, dump_count, 16);
		}
		break;

	case 'R':
		cpu_reset ();
		commandinit ();
		break;

	case 'e':	/* return from subroutine - execute until next rti/rts */
		{
			u_int cl;

			cl = call_level;

			tty_noblock (0, (char *)tty);
			cpu_start ();
			/* n_instr = 0; // possibly several 'step' in sequence */
			do
			{

				if (++n_instr > io_poll_limit) {
					io_poll ();
					n_instr = 0;
				}
				instr_exec ();
			}
			while ((call_level>=cl) && (usr_int == 0));

			if (usr_int)
			{
				printf ("Interrupted!\n");
				usr_int = 0;
			}
			cpu_stop ();
			tty_restore (0, (char *) tty);

		}
		cpu_print ();
		break;

	case 's':	/* step over subroutines */
		{
			int interrupted;

			u_int ret_sp = reg_getsp ();

			tty_noblock (0, (char *)tty);
			cpu_start ();
			/* n_instr = 0; // possibly several 'step' in sequence */
			do
			{

				if (++n_instr > io_poll_limit) {
					io_poll ();
					n_instr = 0;
				}
				interrupted = instr_exec ();
			}
			while ((reg_getsp () < ret_sp) && (usr_int == 0) && (interrupted==0));

			if (usr_int)
			{
				printf ("Interrupted!\n");
				usr_int = 0;
			}
			cpu_stop ();
			tty_restore (0, (char *) tty);

		}
		cpu_print ();
		break;

	case 't':	/* Trace */
		cpu_start ();
		instr_exec ();
		cpu_stop ();
		cpu_print ();
		break;

	case 'u':	/* Unassemble */
		if (argc > 1)
		{
			if (sym_find_value (argv[1], &unasm_addr))
				;
			else if (sscanf (argv[1], "%x", &unasm_addr) == 1)
				;
		}
		if (argc > 2)
			sscanf (argv[2], "%x", &unasm_count);
		unasm_addr = unassemble (unasm_addr, unasm_count);
		break;

	/*
	 * stack watches
	 */
	case 'w':
		if (argc > 2)
		{
			int stackmin, stackmax;

			if (sscanf (argv[1], "%x", &stackmin) == 1
			&& sscanf (argv[2], "%x", &stackmax) == 1)
			{
			 	cpu_setstackmin (stackmin);
				cpu_setstackmax (stackmax);
			}
		}
		printf ("Stack limits: ");
		printf ("min=%04x max=%04x\n",
			cpu_getstackmin(), cpu_getstackmax());
		break;

	case 'q':
		return 0;

	case '?':
	case 'h':
		print_help ();
		reg_cmd (argc, argv);
		io_cmd (argc, argv);
		/* External command handler installed? */
		if (ext_cmd)
			(*ext_cmd) (argc, argv);
		break;
	case 'r':
		reg_cmd (argc, argv);
		break;
	default:
		if (io_cmd (argc, argv))
			break;
		/* External command handler installed? */
		if (ext_cmd && (*ext_cmd) (argc, argv))
			break;
		printf("Unknown command\n");
		cpu_print ();
		break;
	} /* switch */
	return 1;
}


/*
 * commandloop - execute command loop
 */
int commandloop (FILE *ifp)
{
	char buf[MAXBUFSIZE] = { 0 };
	char buf2[MAXBUFSIZE] = { 0 };

	commandinit ();

	do
	{
		commandprompt ();

		if (fgets (buf, MAXBUFSIZE, ifp) == NULL)
			return ferror (ifp);

		if (strstr(buf, "\x03")) {
			printf("cancel\n");
			buf[0] = 0;
			continue;
		}
			
		if (strlen(buf) < 2) {
			memcpy(buf, buf2, MAXBUFSIZE);
		} else {
			memcpy(buf2, buf, MAXBUFSIZE);
		}
		
			
	} while (command ((u_char *) buf));

	return 0;
}


