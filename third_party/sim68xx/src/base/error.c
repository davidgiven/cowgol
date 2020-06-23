/* <<<                                  */
/* Copyright (c) 1994-1996 Arne Riiber. */
/* All rights reserved.                 */
/* >>>                                  */
#include <stdio.h>

#ifdef __STDC__
#  include <stdarg.h>
#  define VA_START(arg,prev_arg)  va_start((arg),(prev_arg)) /* ap = ... */
#else
#  include <varargs.h>
#  define VA_START(arg,prev_arg)  va_start(arg)	/* argp = va_alist */
#endif


#ifdef USE_PROTOTYPES
#  include "main.h"       /* getprogname */
#endif

#ifdef __STDC__
  void error (char * format, ...)
#else
  void error (format, va_alist)
        char      *format;
        va_dcl			/* int va_alist; */
#endif
{
	va_list ap;		/* char or void *ap; */
	extern int nerrors;

	/* fputs (getprogname (), stderr); */
	/* fputs (": "), stderr); */
	fputs ("Error: ", stderr);

	VA_START (ap, format);
	vfprintf (stderr, (char *) format, ap);
	va_end (ap);

	nerrors++;
}


#ifdef __STDC__
  void warning (char * format, ...)
#else
  void warning (format, va_alist)
        char      *format;
        va_dcl			/* int va_alist; */
#endif
{
	va_list ap;		/* char or void *ap; */

	/* fputs (getprogname (), stderr); */
	/* fputs (": "), stderr); */
	fputs ("Warning: ", stderr);

	VA_START (ap, format);
	vfprintf (stderr, (char *) format, ap);
	va_end (ap);
}

#ifdef MAIN
/*
 * Simple test program
 */
int nerrors = 0;

getprogname () { return (int) "progname"; }

main ()
{
	error   ("%d %s %c\n", 1, "Message ", 'A');
	warning ("%d %s %c\n", 2, "Message ", 'B');
}
#endif

