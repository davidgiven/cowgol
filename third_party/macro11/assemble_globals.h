
#ifndef ASSEMBLE_GLOBALS__H
#define ASSEMBLE_GLOBALS__H


#include "mlb.h"
#include "symbols.h"
#include "extree.h"
//#include "stream2.h"
//#include "object.h"



#define MAX_MLBS 32                    /* number of macro libraries */

#define MAX_CONDS 256
typedef struct cond {
    int             ok;         /* What the condition evaluated to */
    char           *file;       /* What file and line it occurred */
    int             line;
} COND;


#ifndef ASSEMBLE_GLOBALS__C
/* GLOBAL VARIABLES */
extern int      pass;           /* The current assembly pass.  0 = first pass */
extern int      stmtno;         /* The current source line number */
extern int      radix;          /* The current input conversion radix */
extern int      lsb;            /* The current local symbol section identifier */
extern int      last_lsb;       /* The last block in which a macro
                                   automatic label was created */

extern int      last_locsym;    /* The last local symbol number generated */

extern int      enabl_debug;    /* Whether assembler debugging is enabled */

extern int      enabl_ama;      /* When set, chooses absolute (037) versus
                                   PC-relative */
/* (067) addressing mode */
extern int      enabl_lsb;      /* When set, stops non-local symbol
                                   definitions from delimiting local
                                   symbol sections. */

extern int      enabl_gbl;      /* Implicit definition of global symbols */

extern int      suppressed;     /* Assembly suppressed by failed conditional */

extern MLB     *mlbs[MAX_MLBS]; /* macro libraries specified on the command line */
extern int      nr_mlbs;        /* Number of macro libraries */

extern COND     conds[MAX_CONDS];       /* Stack of recent conditions */
extern int      last_cond;      /* 0 means no stacked cond. */

extern SECTION *sect_stack[32]; /* 32 saved sections */
extern int      sect_sp;        /* Stack pointer */

extern char    *module_name;    /* The module name (taken from the 'TITLE'); */

extern char    *ident;          /* .IDENT name */

extern EX_TREE *xfer_address;   /* The transfer address */

extern SYMBOL  *current_pc;     /* The current program counter */

extern unsigned last_dot_addr;  /* Last coded PC... */
extern SECTION *last_dot_section;       /* ...and it's program section */

/* The following are dummy psects for symbols which have meaning to
   the assembler: */
extern SECTION  register_section;
extern SECTION  pseudo_section; /* the section containing the  pseudo-operations */
extern SECTION  instruction_section;    /* the section containing instructions */
extern SECTION  macro_section;  /* Section for macros */

/* These are real psects that get written out to the object file */
extern SECTION  absolute_section;       /* The default  absolute section */
extern SECTION  blank_section;
extern SECTION *sections[256];  /* Array of sections in the order they were defined */
extern int      sector;         /* number of such sections */

#endif


#endif
