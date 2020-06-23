/* Automagically generated Fr 15 Apr 2011 09:30:58 CEST - dont edit */
#ifndef SYMTAB_H
#define SYMTAB_H

#if defined(__STDC__) || defined(__cplusplus)
# define _P(s) s
#else
# define _P(s) ()
#endif

extern char * sym_find_name _P((unsigned int value));
extern int sym_find_value _P((char *name, unsigned int *value));
extern int sym_add _P((int value, char *name));
extern int sym_readfile _P((char *loadfile, char *symfile));

#undef _P
#endif /* SYMTAB_H */
