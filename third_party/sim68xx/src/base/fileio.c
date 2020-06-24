/* <<<                                  */
/* Copyright (c) 1994-1996 Arne Riiber. */
/* All rights reserved.                 */
/* >>>                                  */
/* fileio - read an executable into a buffer */

/*
  S19 file format:

	S00700006E63727045
	S113F000FFFF00FD00FEFF00FC00FEFFFFBDF2E578
	:
	S105FFFEF0FE0F
	S903F11BF0

*/

#include <stdio.h>
#include <errno.h>
#include <string.h>

#ifdef __STDC__
#  include <stdarg.h>
#  define VA_START(arg,prev_arg)  va_start((arg),(prev_arg)) /* ap = ... */
#else
#  include <varargs.h>
#  define VA_START(arg,prev_arg)  va_start(arg)	/* argp = va_alist */
#endif

#include "defs.h"
#include "error.h"
#if 0 /* arch specific */
#include "chip.h"	/* NIREGS */
#include "memory.h"	/* mem_putb */
#endif

#ifdef USE_PROTOTYPES
#include "fileio.h"
#endif

#ifdef MAIN
#  define error printf
#endif

#ifdef MAIN
static void mem_putb (addr, value)
	u_int addr;
	u_char value;
{
	printf ("mem_putb (%04x,%02x)", addr, value);
}
#else
static void mem_putb (u_int addr, u_char value)
{
	/* Simulate we burn code into target EPROM */
	extern u_char *ram;
	ram[addr] = value; /* dirty dirty, no range check */
}
#endif

/*
 * load_line_s19 - load a line of a s19 file into memory (by putbyte())
 *
 * Returns 0 if checksum error, else 1.
 *
 * Expects a line of format "S1" nbytes addr b1 b2 ..bN csum
 * Example:
 *
 *	"S1" "13" "F000"
 *	"FF" "FF" "00" "FD" "00" "FE" "FF" "00" "FC" "00"
 *	"FE" "FF" "FF" "BD" "F2" "E5"
 *	"78"
 *
 *	nbytes = 13, addr=0xf000, csum = ~(0x13+0xF0+0x00+0xFF+...+0xE5)
 */
static int load_line_s19 (char *buf, u_int offset)
{
	int nbytes;	/* Must be int to be arg to scanf */
	int val;
	int sum;
	int csum;
	u_int  addr;
	int i;
	char c1, c2;
	int debug = 0;

	if ((c1 = buf[0]) == 'S')
	{
		if ((c2 = buf[1]) == '1')
		{
			sscanf (&buf[2], "%02x", &nbytes);
			if (debug) printf ("nbytes: %x\n", nbytes);
			sum = nbytes;
			sscanf (&buf[4], "%04x", &addr);
			if (debug) printf ("addr=%x\n", addr); 
			sum += addr >> 8;
			sum += addr & 0xFF;

			for (i=2; i<nbytes-1; i++)
			{
				int pos = 8 + (i - 2) * 2;
				sscanf (&buf[pos], "%02x", &val);
				if (debug) printf ("val=%02x\n", val);
				mem_putb ((addr + i - 2) - offset, val);
				sum += val;
			}

			sum = ~sum & 0xFF;
			sscanf (&buf[8 + (i - 2) * 2], "%02x", &csum);
			if (csum != sum) {
				error ("Checksum: computed %02x, read: %02x\n", sum, csum);
				return -1;
			}
		} else if (c2 == '9' || c2 == '0') {
			; /* OK - ignore */
		} else {
			error ("Invalid S19 file\n");
			return -1;
		}
	}
	return 0;
}




/*
 * load_file - loads an executable file into memory
 *
 * Returns 0 on success, < 0 on failure
 */
int load_file (char *filename)
{
	FILE *fp;
	int errcode;
	int line_no;
	char buf[MAXBUFSIZE];

	if ((fp = fopen (filename, "rt")) == NULL)
	{
		perror (filename);
		return (errno);
	}

	for (line_no = 1; !feof (fp); line_no++)
	{
		if (fgets (buf, MAXBUFSIZE, fp) != NULL)
		{
			buf[ strlen(buf)] = '\0'; /* Trim trailing newline */

			if ((errcode = load_line_s19 (buf, 0))) {
				printf ("Line %d: %s\n", line_no, buf);
				break;
			}
		}
	}
	fclose (fp);
	return errcode;
}


#ifdef MAIN
main (argc, argv)
	int argc;
	char *argv[];
{
	if (argc > 1)
		load_file (argv[1]);
	else
		fprintf (stderr, "Usage: %s filename\n", argv[0]);
}
#endif
