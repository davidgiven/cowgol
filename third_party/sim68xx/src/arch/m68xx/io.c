/* <<<                                  */
/* Copyright (c) 1994-1996 Arne Riiber. */
/* All rights reserved.                 */
/* >>>                                  */
/*
 * I/O (and chip specific) commands
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "defs.h"
#include "tty.h"

#ifdef USE_PROTOTYPES
#  include "io.h"
#endif

#ifdef HAS_SCI
#  include "sci.h"
#endif

#ifdef HAS_SPI
#  include "spi.h"
#endif

/*
 * The 'out' pseudo device is the default mechanism to output a byte.
 * Different output modes are provided, and commands to select mode.
 */
static enum io_out_modes {
	HEX,
	ASCII,
	BACKSLASH_ASCII
} io_mode = ASCII; /* Shared by out_xxx and io_xxx routines */

/*
 * out_in - determine output mode from input string
 */
int out_in (u_char *buf, int nbytes)
{
	if (strncmp ((char *) buf, "hex", strlen ("hex")) == 0)
		io_mode = HEX;
	else if (strncmp ((char *) buf, "ascii", strlen ("ascii")) == 0)
		io_mode = ASCII;
	else if (strncmp ((char *) buf, "\\ascii", strlen ("\\ascii")) == 0)
		io_mode = BACKSLASH_ASCII;

	return 0;
}

/*
 * out_print - print current output mode
 */
int out_print (buf, nbytes)
{
	printf ("io output mode: ");
	switch (io_mode)
	{
	case HEX: printf ("hex"); break;
	case ASCII: printf ("ascii"); break;
	case BACKSLASH_ASCII: printf ("\\ascii"); break;
	}
	putchar ('\n');

	return 0;
}


/*
 * External event interface to device (and pseudo-devices) 
 */
struct iodev {
	int (*input) ();	/* Input data to buffer of device */
	int (*print) ();	/* Print data in buffer of device */
	char *name;		/* Device name */
};

/*
 * Device table - one instance per device is supported
 */
static
struct iodev iotab[] = {

#ifdef HAS_SCI
	{sci_in, sci_print, "sci"},
#endif

#ifdef HAS_SPI
	{spi_in, spi_print, "spi"},
#endif
	{out_in, out_print, "out"},	/* Pseudo device */
	{NULL, NULL}
};

static
char *helptext[] = {
	"External event commands",

#ifdef HAS_SCI
	"	i sci [hh|\"ss\"] ..        - io input hex digits or strings to SCI",
	"	i sci print                 - print contents of SCI buffer",
#endif

#ifdef HAS_SPI
	"	i spi [hh|\"ss\"] ..        - io input hex digits or strings to SPI",
	"	i spi print                 - print contents of SPI buffer",
#endif
	"	i out [hex|ascii|\\ascii]   - io output mode for displaying data",
	NULL
};

static struct iodev *curr_dev = iotab;	/* Current input device */

static int help ()
{
	char **p;
	for (p = helptext; *p; p++)
		printf ("%s\n", *p);
	return 1;
}

/*
 * io_poll - poll standard input for a character, use as input into device
 */
void io_poll ()
{
	int  c;
	char ch;

	if (curr_dev->name)
	{
		if ((c = tty_getkey (0)) != -1) /* -1 or 0..255 */
		{
			ch = c & 0xff;
			(*curr_dev->input) (&ch, 1);
		}
	}
}

/*
 * io_putb - output value from io device(s)
 *
 * This routine is called as default by device drivers to output a byte.
 */
void io_putb (u_char value)
{
	switch (io_mode)
	{
	case HEX:
		printf ("%02x ", value);
		break;
	case BACKSLASH_ASCII:
		if (isprint (value))
			putchar (value);
		else
			printf ("\\%02x", value);
		break;
	case ASCII:
	default:
		putchar (value);
	}
	fflush (stdout);
}

/*
 * io_cmd - process 'argv', return 1 if valid command executed
 */
int io_cmd (argc, argv)
	int   argc;
	char *argv[];
{
	int i;
	struct iodev *device;	/* Current device */

	if (argc < 1)
		return 0;

	switch (*argv[0])
	{
	case 'i': /* io command */
		if (argc < 2)
			return 0; /* no device supplied */

		/* Find device name */
		for (device = iotab; device->name != NULL; device++)
			if (strcmp (argv[1], device->name) == 0)
				break;

		if (device->name == NULL)
			return 0;	/* Not valid command */

		/* Single string input is different from hex/ascii sequences */
		if (strncmp (device->name, "out", strlen ("out")) == 0 && argc > 2) {
			(*device->input)(argv[2], strlen (argv[2]));
			return 1;
		}

		if (argc > 2 && strncmp (argv[2], "print", strlen ("print")) == 0) {
			(*device->print)();
			return 1;
		}
			
		/* Get hex or ascii input to device */
		for (i = 2; i<argc && *argv[i]; i++)
		{
			u_char buf[MAXBUFSIZE];
			u_int  number;

			if (sscanf (argv[i], "%x", (int *) &number) == 1)
			{
				buf[0] = number & 0xff;
				(*device->input) (buf, 1);
			}
			else if (sscanf (argv[i], "\"%s\"", buf) == 1)
				(*device->input) (buf, strlen ((char *)buf) - 1);
		}
		/* (*device->print) (); // this confuses expect */
		return 1;	/* Valid command */

	case 'h':
	case '?':
		help ();
		return 1;
	default:
		return 0;
	}
}

