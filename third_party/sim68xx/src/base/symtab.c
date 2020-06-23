/* <<<                                  */
/* Copyright (c) 1994-1996 Arne Riiber. */
/* All rights reserved.                 */
/* >>>                                  */
/*
 * symtab - symbol table support
 *
 * sym_readfile(), sym_find(), sym_add()
 *
 * (c) Arne Riiber 1995
 */

#include <ctype.h>
#include <stdio.h>
#include <string.h>

#ifdef USE_PROTOTYPES
#include "symtab.h"
#endif

#define MAXSYMSIZE	32
#define MAXSYMS 	1024

#define MAXBUFSIZE	1024

struct sym {
	int  value;
	char name[MAXSYMSIZE];
};

static struct {
	int nsymbols;
	struct sym syms[MAXSYMS];
} symtab;


/*
 * sym_find_name - find symbol in table, return pointer to name or 0
 */
char * sym_find_name (unsigned int value)
{
	int i;

	for (i = 0; i < symtab.nsymbols; i++)
		if (symtab.syms[i].value == value)
			return symtab.syms[i].name;
	return NULL;
}


int sym_find_value (char *name, unsigned int *value)
{
	int i;

	for (i = 0; i < symtab.nsymbols; i++)
	{
		if (strcmp (name, symtab.syms[i].name) == 0)
		{
			*value = symtab.syms[i].value;
			return 1;
		}
	}
	return 0;
}


/*
 * sym_add - find symbol in table, return >= 0 if OK or <0 if error
 */
int sym_add (int   value, char *name)
{
	if (symtab.nsymbols < MAXSYMS)
	{
		symtab.syms[symtab.nsymbols].value = value;
		strncpy (symtab.syms[symtab.nsymbols].name, name, MAXSYMSIZE);
		symtab.nsymbols++;
		return 0;
	}
	else
	{
		fprintf (stderr, "sym_add: symbol table full\n");
		return -1;
	}
}


static int read_aslink_file (ifp)
	FILE *ifp;
{
	char buf[MAXBUFSIZE];
	char symname[MAXSYMSIZE];
	int  symvalue;

	while (!feof (ifp))
	{
		if (fgets (buf, MAXBUFSIZE, ifp) != NULL)
		{
			buf[ strlen(buf)] = '\0'; /* Trim trailing newline */

			if (sscanf (buf, " %04x %s ", &symvalue, symname) == 2 &&
			    isspace (buf[0]))
				sym_add (symvalue, symname);
		}
	}

	return ferror (ifp);
}

static int read_asm68xx_file (ifp)
	FILE *ifp;
{
	char buf[MAXBUFSIZE];
	char symname[MAXSYMSIZE];
	int  symvalue;

	while (!feof (ifp))
	{
		if (fgets (buf, MAXBUFSIZE, ifp) == NULL)
			continue;

		buf[strlen(buf)] = '\0'; /* Trim trailing newline */

		if (!isspace (buf[0]))
		{
			if (sscanf (buf, "%s %04x", symname, &symvalue) == 2)
				sym_add (symvalue, symname);
		}
	}
	return ferror (ifp);
}

/*
 * structure to associate file name with function to read symbols from file
 */
static struct sym_file_ass {
	char *ext;
	int  (*read) ();
} file_ass[] = {
	{".map", read_aslink_file},
	{".sym", read_asm68xx_file},
	{NULL, NULL}
};
		
/*
 * sym_readfile - read symbol table from file
 */
int sym_readfile (loadfile, symfile)
	char *loadfile;		/* File to be used for base name */
	char *symfile;		/* NULL => try different extensions */
{
	FILE			*ifp;
	struct sym_file_ass	*ass;
	char			 infile[MAXBUFSIZE];
	int			 len;

	if (symfile)
		/* Use specified symbol file */
		ifp = fopen (symfile, "rt");
	else
	{
		char *p;

		if ((p = strrchr (loadfile, '.')))
			/* Skip extension from loadfile */
			len = (p - loadfile);
		else
			len = strlen (symfile);

		ifp = NULL;
		for (ass = file_ass; ass->ext; ass++)
		{
			strncpy (infile, loadfile, len);
			infile[len] = '\0';
			strcat (infile, ass->ext);
			if ((ifp = fopen (infile, "rt")) != NULL)
				break;
		}
	}
	if (ifp == NULL) {
		printf ("Couldn't open symbol file\n");
		return -1;
	}
	(*ass->read) (ifp);

	fclose (ifp);
	return 0;
}


#ifdef MAIN
main (argc, argv)
	int   argc;
	char *argv[];
{
	if (argc == 2)
		sym_readfile (argv[1]);
	else
		printf ("Usage: %s symbol-file\n");

	return 0;
}
#endif


