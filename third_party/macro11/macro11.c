#define MACRO11__C


/*
    Assembler compatible with MACRO-11.

Copyright (c) 2001, Richard Krehbiel
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are
met:

o Redistributions of source code must retain the above copyright
  notice, this list of conditions and the following disclaimer.

o Redistributions in binary form must reproduce the above copyright
  notice, this list of conditions and the following disclaimer in the
  documentation and/or other materials provided with the distribution.

o Neither the name of the copyright holder nor the names of its
  contributors may be used to endorse or promote products derived from
  this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
HOLDERS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR
TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE
USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
DAMAGE.

*/

#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>

#include "macro11.h"

#include "util.h"

#include "assemble_globals.h"
#include "assemble.h"
#include "assemble_aux.h"
#include "listing.h"
#include "object.h"
#include "symbols.h"

#define stricmp strcasecmp


/* enable_tf is called by command argument parsing to enable and
   disable named options. */

static void enable_tf(
    char *opt,
    int tf)
{
    if (strcmp(opt, "AMA") == 0)
        enabl_ama = tf;
    else if (strcmp(opt, "GBL") == 0)
        enabl_gbl = tf;
    else if (strcmp(opt, "ME") == 0)
        list_me = tf;
    else if (strcmp(opt, "BEX") == 0)
        list_bex = tf;
    else if (strcmp(opt, "MD") == 0)
        list_md = tf;
}

//JH:
static void print_version(
    FILE *strm)
{
    fprintf(strm, "macro11 - portable MACRO11 assembler for DEC PDP-11\n");
    fprintf(strm, "  Version %s\n", VERSIONSTR);
    fprintf(strm, "  Copyright 2001 Richard Krehbiel,\n");
    fprintf(strm, "  modified 2009 by Joerg Hoppe.\n");
}


//JH:
static void print_help(
    void)
{
    printf("\n");
    print_version(stdout);
    printf("\n");
    printf("Usage:\n");
    printf("  macro11 [-o <file>] [-l [<file>]] \n");
    printf("          [-h] [-v][-e <option>] [-d <option>]\n");
    printf("          [-ysl <num>] [-yus] \n");
    printf("          [-m <file>] [-p <directory>] [-x]\n");
    printf("          <inputfile> [<inputfile> ...]\n");
    printf("\n");
    printf("Arguments:\n");
    printf("<inputfile>  MACRO11 source file(s) to assemble\n");
    printf("\n");
    printf("Options:\n");
    printf("-d  disable <option> (see below)\n");
    printf("-e  enable <option> (see below)\n");
    printf("-h  print this help\n");
    printf("-l  gives the listing file name (.LST)\n");
    printf("    -l - enables listing to stdout.\n");
    printf("-m  load RT-11 compatible macro library from which\n");
    printf("    .MCALLed macros can be found.\n");
    printf("    Multiple allowed.\n");
    printf("-o  gives the object file name (.OBJ)\n");
    printf("-p  gives the name of a directory in which .MCALLed macros may be found.\n");
    printf("    Sets environment variable \"MCALL\".\n");

    printf("-v  print version\n");
    printf("    Violates DEC standard, but sometimes needed\n");
    printf("-x  invokes macro11 to expand the contents of the registered macro \n");
    printf("    libraries (see -m) into individual .MAC files in the current\n");
    printf("    directory.  No assembly of input is done.\n");
    printf("    This must be the last command line option!\n");
    printf("-ysl Syntax extension: change length of symbols from \n");
    printf("     default = %d to larger values, max %d.\n", SYMMAX_DEFAULT, SYMMAX_MAX);
    printf("-yus Syntax extension: allow underscore \"_\" in symbols.\n");
    printf("\n");
    printf("Options for -e and -d are:\n");
    printf("AMA (off) - absolute addressing (versus PC-relative)\n");
    printf("            See .ENABL AMA, .DSABL AMA\n");
    printf("GBL (on)  - treat unresolved symbols as globals, linker must resolve.\n");
    printf("            If disabled, unresolved globals are errors.\n");
    printf("            See .ENABL GBL, .DSABL GBL\n");
    printf("ME  (on)  - list macro expansion (no func)\n");
    printf("BEX (on)  - show binary (no func)\n");
    printf("MD  (on)  - list macro/rept definition\n");
    printf("\n");
}

void usage(char *message) {
    fputs(message, stderr);
    exit(EXIT_FAILURE);
}

int main(
    int argc,
    char *argv[])
{
    char           *fnames[32];
    int             nr_files = 0;
    FILE           *obj = NULL;
    TEXT_RLD        tr;
    char           *objname = NULL;
    char           *lstname = NULL;
    int             arg;
    int             i;
    STACK           stack;
    int             errcount;

    if (argc <= 1) {
        print_help();
        exit(EXIT_FAILURE);
    }

    for (arg = 1; arg < argc; arg++)
        if (*argv[arg] == '-') {
            char           *cp;

            cp = argv[arg] + 1;
            if (!stricmp(cp, "h")) {
                print_help();
            } else if (!stricmp(cp, "v")) {
                print_version(stderr);
            } else if (!stricmp(cp, "e")) {
                /* Followed by options to enable */
                /* Since /SHOW and /ENABL option names don't overlap,
                   I consolidate. */
                if(arg >= argc-1 || !isalpha(*argv[arg+1])) {
                    usage("-e must be followed by an option to enable\n");
                }
                upcase(argv[++arg]);
                enable_tf(argv[arg], 1);
            } else if (!stricmp(cp, "d")) {
                /* Followed by an option to disable */
                if(arg >= argc-1 || !isalpha(*argv[arg+1])) {
                    usage("-d must be followed by an option to disable\n");
                }
                upcase(argv[++arg]);
                enable_tf(argv[arg], 0);
            } else if (!stricmp(cp, "m")) {
                /* Macro library */
                /* This option gives the name of an RT-11 compatible
                   macro library from which .MCALLed macros can be
                   found. */
                if(arg >= argc-1 || *argv[arg+1] == '-') {
                    usage("-m must be followed by a macro library file name\n");
                }
                arg++;
                mlbs[nr_mlbs] = mlb_open(argv[arg]);
                if (mlbs[nr_mlbs] == NULL) {
                    fprintf(stderr, "Unable to register macro library %s\n", argv[arg]);
                    exit(EXIT_FAILURE);
                }
                nr_mlbs++;
            } else if (!stricmp(cp, "p")) {
                /* P for search path */
                /* The -p option gives the name of a directory in
                   which .MCALLed macros may be found.  */  {
                    char           *env = getenv("MCALL");
                    char           *temp;

                    if(arg >= argc-1 || *argv[arg+1] == '-') {
                        usage("-p must be followed by a macro search directory\n");
                    }

                    if (env == NULL)
                        env = "";

                    temp = memcheck(malloc(strlen(env) + strlen(argv[arg + 1]) + 8));
                    strcpy(temp, "MCALL=");
                    strcat(temp, env);
                    strcat(temp, PATHSEP);
                    strcat(temp, argv[arg + 1]);
                    putenv(temp);
                    arg++;
                }
            } else if (!stricmp(cp, "o")) {
                /* The -o option gives the object file name (.OBJ) */
                if(arg >= argc-1 || *argv[arg+1] == '-') {
                    usage("-o must be followed by the object file name\n");
                }
                ++arg;
                objname = argv[arg];
            } else if (!stricmp(cp, "l")) {
                /* The option -l gives the listing file name (.LST) */
                /* -l - enables listing to stdout. */
                if(arg >= argc-1 || *argv[arg+1] == '-') {
                    usage("-l must be followed by the listing file name (- for standard output)\n");
                }
                lstname = argv[++arg];
                if (strcmp(lstname, "-") == 0)
                    lstfile = stdout;
                else
                    lstfile = fopen(lstname, "w");
            } else if (!stricmp(cp, "x")) {
                /* The -x option invokes macro11 to expand the
                   contents of the registered macro libraries (see -m)
                   into individual .MAC files in the current
                   directory.  No assembly of input is done.  This
                   must be the last command line option.  */
                int             i;

                if(arg != argc-1) {
                    usage("-x must be the last option\n");
                }
                for (i = 0; i < nr_mlbs; i++)
                    mlb_extract(mlbs[i]);
                return EXIT_SUCCESS;
            } else if (!stricmp(cp, "ysl")) {
                /* set symbol_len */
                if (arg >= argc-1) {
                    usage("-s must be followed by a number\n");
                } else {
                    char           *s = argv[++arg];
                    char           *endp;
                    int             sl = strtol(s, &endp, 10);

                    if (*endp || sl < SYMMAX_DEFAULT || sl > SYMMAX_MAX) {
                        usage("-s must be followed by a number\n");
                    }
                    symbol_len = sl;
                }
            } else if (!stricmp(cp, "yus")) {
                /* allow underscores */
                symbol_allow_underscores = 1;
            } else {
                fprintf(stderr, "Unknown option %s\n", argv[arg]);
                print_help();
                exit(EXIT_FAILURE);
            }
        } else {
            fnames[nr_files++] = argv[arg];
        }

    if (objname) {
        obj = fopen(objname, "wb");
        if (obj == NULL)
            return EXIT_FAILURE;
    }

    add_symbols(&blank_section);

    text_init(&tr, NULL, 0);

    module_name = memcheck(strdup(""));

    xfer_address = new_ex_lit(1);      /* The undefined transfer address */

    stack_init(&stack);
    /* Push the files onto the input stream in reverse order */
    for (i = nr_files - 1; i >= 0; --i) {
        STREAM         *str = new_file_stream(fnames[i]);

        if (str == NULL) {
            report(NULL, "Unable to open file %s\n", fnames[i]);
            exit(EXIT_FAILURE);
        }
        stack_push(&stack, str);
    }

    DOT = 0;
    current_pc->section = &blank_section;
    last_dot_section = NULL;
    pass = 0;
    stmtno = 0;
    lsb = 0;
    last_lsb = -1;
    last_locsym = 32767;
    last_cond = -1;
    sect_sp = -1;
    suppressed = 0;

    assemble_stack(&stack, &tr);

#if 0
    if (enabl_debug)
        dump_all_macros();
#endif

    assert(stack.top == NULL);

    migrate_implicit();                /* Migrate the implicit globals */
    write_globals(obj);                /* Write the global symbol dictionary */

#if 0
    sym_hist(&symbol_st, "symbol_st"); /* Draw a symbol table histogram */
#endif


    text_init(&tr, obj, 0);

    stack_init(&stack);                /* Superfluous... */
    /* Re-push the files onto the input stream in reverse order */
    for (i = nr_files - 1; i >= 0; --i) {
        STREAM         *str = new_file_stream(fnames[i]);

        if (str == NULL) {
            report(NULL, "Unable to open file %s\n", fnames[i]);
            exit(EXIT_FAILURE);
        }
        stack_push(&stack, str);
    }

    DOT = 0;
    current_pc->section = &blank_section;
    last_dot_section = NULL;

    pass = 1;
    stmtno = 0;
    lsb = 0;
    last_lsb = -1;
    last_locsym = 32767;
    pop_cond(-1);
    sect_sp = -1;
    suppressed = 0;

    errcount = assemble_stack(&stack, &tr);

    text_flush(&tr);

    while (last_cond >= 0) {
        report(NULL, "%s:%d: Unterminated conditional\n", conds[last_cond].file, conds[last_cond].line);
        pop_cond(last_cond - 1);
        errcount++;
    }

    for (i = 0; i < nr_mlbs; i++)
        mlb_close(mlbs[i]);

    write_endmod(obj);

    if (obj != NULL)
        fclose(obj);

    if (errcount > 0)
        fprintf(stderr, "%d Errors\n", errcount);

    if (lstfile && strcmp(lstname, "-") != 0)
        fclose(lstfile);

    return errcount > 0 ? EXIT_FAILURE : EXIT_SUCCESS;
}
