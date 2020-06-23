/* <<<                                  */
/* Copyright (c) 1994-1996 Arne Riiber. */
/* All rights reserved.                 */
/* >>>                                  */
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>


int bytesperline = 16;

static char hexnum[] = {
	'0', '1', '2', '3',
	'4', '5', '6', '7',
	'8', '9', 'a', 'b',
	'c', 'd', 'e', 'f'
};

void fprinthex (FILE *fp, unsigned char *buf, int len)
{
	int i, j;

	for (i = 0; i < len; i += 16)
	{
		for (j = i; j < i+bytesperline; j++)
			if (j < len)
			{
				/* perform fprintf (fp, "%02x ", buf[j]): */
				putc (hexnum[buf[j] >> 4], fp);
				putc (hexnum[buf[j] & 0x0f], fp);
				putc (' ', fp);
			}
			else
				fputs ("   ", fp);
		for (j = i; j < i+bytesperline && j < len; j++)
			if (isprint (buf[j]))
				putc (buf[j], fp);
			else
				putc ('.', fp);
		putc ('\n', fp);
	}
}

#ifdef MAIN

#define BUFSIZE 512

main (argc, argv)
	int   argc;
	char *argv[];
{
	char *buf;
	int i;

	if (!(buf = malloc (BUFSIZE)))
	{
		perror (argv[0]);
		exit (-1);
	}
	for (i = 0; i < BUFSIZE; i++)
		buf[i] = i;

	printf ("fprinthex (buf, 8):\n");
	fprinthex (stdout, buf, 8);

	printf ("fprinthex (buf, 16):\n");
	fprinthex (stdout, buf, 16);

	printf ("fprinthex (buf, 64):\n");
	fprinthex (stdout, buf, 64);

	printf ("fprinthex (buf, 512):\n");
	fprinthex (stdout, buf, 512);

	free (buf);
}
#endif
