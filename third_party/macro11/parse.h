
#ifndef PARSE__H
#define PARSE__H

#include "symbols.h"
#include "assemble_aux.h"              /* ADDR_MODE */


// is char 'c' part of a symbol?
#define issym(c) (isalpha(c) || isdigit(c) \
		|| (c) == '.' || (c) == '$' \
		|| (symbol_allow_underscores && (c) == '_'))


char           *skipwhite(
    char *cp);
char           *skipdelim(
    char *cp);

SYMBOL         *get_op(
    char *cp,
    char **endp);
char           *getstring(
    char *cp,
    char **endp);
char           *get_symbol(
    char *cp,
    char **endp,
    int *islocal);
int             get_mode(
    char *cp,
    char **endp,
    ADDR_MODE *mode);

EX_TREE        *parse_expr(
    char *cp,
    int undef);
int             parse_float(
    char *cp,
    char **endp,
    int size,
    unsigned *flt);

int             brackrange(
    char *cp,
    int *start,
    int *length,
    char **endp);





#endif
