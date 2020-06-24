/* <<<                                  */
/* Copyright (c) 1994-1996 Arne Riiber. */
/* All rights reserved.                 */
/* >>>                                  */
/*
 * tty_getkey - return the key pressed or 0 if none available
 */



#include "defs.h"
#include <string.h>
#include "error.h"

#ifdef HAS_TERMIO

#include <stdio.h>
#include <termios.h>		/* linux/SCO/SunOS */
#include <unistd.h>

/*
 * noblock - set tty in echo, nostrip, non-blocking mode
 *
 * return original tty mode in 'tty_orig'
 */
int tty_noblock (int   fd, char *tty_orig)
{
	struct termios tty_curr;

	if (!isatty (fd))
		return -1;
	if (tcgetattr (fd, (struct termios *) tty_orig) < 0)
		error ( "tcgetattr (tty_orig)");

	memcpy (&tty_curr, tty_orig, sizeof (tty_curr));

	tty_curr.c_iflag     &= ICRNL;	/* do not map CR to NL on input */
	tty_curr.c_lflag      = ISIG;	/* &= (~ICANON & ~ECHO); */
	tty_curr.c_cc[VMIN]   = 0;	/* Don't block indefinitely */
	tty_curr.c_cc[VTIME]  = 0;	/* Block max. 0 seconds */

	if (tcsetattr (fd, TCSANOW, &tty_curr) < 0)
		error ( "tcsetattr(TCSANOW,tty_curr)");
#if 0
 	if (tcsetattr (0, TCSAFLUSH, &tty_curr) < 0)
 		error ( "tcsetattr(tty_curr)");
#endif
	return 0;
}


int tty_restore (int fd, char *tty)
{
	if (!isatty (fd))
		return -1;

	if (tcsetattr (fd, TCSANOW, (struct termios *) tty) < 0)
		error ((void *)"tcsetattr(TCSANOW,tty_curr)");
#if 0
 	if (tcsetattr (0, TCSAFLUSH, tty) < 0)
 		error ("tcsetattr(tty)");
#endif
	return 0;
}


/*
 * tty_getkey - get a key (0..255) if pressed, else -1
 */
int tty_getkey (int fd)
{
	u_char c;

	if (read (fd, &c, 1) <= 0)
		return -1;
	return c;
}


#else

#include <conio.h>

tty_noblock (int fd, char *tty_orig) {}
tty_restore (int fd, char *tty) {}
tty_getkey (int fd)
{
	/* This is Borland specific */
	if (kbhit ())
		return getch ();
	else
		return -1;
}
#endif /* HAS_TERMIO */


#ifdef MAIN

#define CTRL_D 0x04

error (s)
	char *s;
{
	fputs (s, stderr);
}

main ()
{
	int c;
	int n;
	struct termios tty;

	tty_noblock (0, &tty);

	while ((c = tty_getkey (0)) != CTRL_D)
	{
		if (c) {
			fputs ("Read: ", stdout);
			putchar (c);
			putchar ('\n');
		} else {
			putchar ('.');
			fflush (stdout);
		}
	}

	tty_restore (0, &tty);

}
#endif
