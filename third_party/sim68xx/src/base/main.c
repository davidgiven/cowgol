 /*
  *
  * Sim68xx - 68xx/63xx CPU Simulator
  *
  * main.c - simulator loop
  *
     Copyright (C) 2011 Felix Erckenbrecht
     <dg1yfe at gmx.de>

     Copyright (C) 1994 - 2004  Arne Riiber
     <riiber at systek.no>

     This program is free software; you can redistribute it and/or modify
     it under the terms of the GNU General Public License as published by
     the Free Software Foundation; either version 2 of the License, or
     (at your option) any later version.

     This program is distributed in the hope that it will be useful,
     but WITHOUT ANY WARRANTY; without even the implied warranty of
     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
     GNU General Public License for more details.

     You should have received a copy of the GNU General Public License
     along with this program; if not, write to the Free Software
     Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
  *
*/
/*
 * 04/2011 Reworked the code to compile under OS-X 10.6
 * Included GPL v2 license message into source code the program
 * is released under the terms of the GPL.
 * Added code to GIT version control
 *
 * Revision 1.2  1994/08/23  22:19:54  arne
 * Added reading commands of default .simrc init file.
 * Made reading commands from redirected input possible.
 *
 * Revision 1.1  1994/08/23  07:42:45  arne
 * Initial revision
 *
 *
 */
#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#include "defs.h"

#include "symtab.h"

#include "fileio.h"
#include "command.h"
#include "memory.h"

char *inifile = ".simrc";
char *progname;

extern u_char *mem_init();
extern int board_install();
/*
char * getprogname ()
{
	return progname;
}
*/


int main (int argc, char *argv[])
{
	int   errcode;
	FILE *ifp;
	char *host;
	int   port;
	char  *filename;

	progname = argv[0];
	filename = argv[1];

	if (argc <= 1)
	{
		fprintf (stderr, "Usage: %s filename", progname);
#ifdef NETCOMMAND
		fprintf (stderr, " [host] [port]");
#endif
		fprintf (stderr, "\n");

		return (1);
	}

	if (argc >= 3)
		host = argv[2];
	else
		host = "localhost";

	if (argc >= 4)
		port = atoi (argv[3]);
	else
		port = 0;

	if (!mem_init ())
		return errno;

	if ((errcode = board_install ()) < 0)
		return errcode;

	if ((errcode = load_file (filename)) != 0)
		return errcode;

	/*
	 * Try opening symbol file
	 */
	sym_readfile (filename, NULL);

	/*
	 * If this looks like a Fuzix binary, set the CPU to start at the beginning of the
	 * program.
	 */
	if (mem_getw(0x100) == 0x80a8)
	{
		int hibyte = mem_getb(0x104);
		int lobyte = mem_getb(0x10c);
		if (hibyte != 1)
		{
			printf("Fuzix binaries must be loaded at 0x100\n");
			exit(1);
		}
		u_int address = 0x0100 | lobyte;
		mem_putw(RESVECTOR, address);
	}

	/*
	 * Try opening basename of filename with ".sim" extension
	 */
	{
		char  initfile[1024];
		char *p;
		int   len;

		if ((p = strrchr (filename, '.'))) {
			/* Skip extension */
			len = (p - filename);
		} else {
			len = strlen (filename);
		}

		strncpy (initfile, filename, len);
		initfile[len] = '\0';
		strcat (initfile, ".sim");
		ifp = fopen (initfile, "rt");
	}

	/*
	 * read commands from init file
	 */
	if (ifp || (ifp = fopen (inifile, "rt")))
	{
//		commandloop (ifp, host, port);
		commandloop (ifp);
		fclose (ifp);
	}
//	return commandloop (stdin, host, port);
	return commandloop (stdin);
}


