/* Automagically generated Fr 15 Apr 2011 09:30:58 CEST - dont edit */
#ifndef COMMAND_H
#define COMMAND_H

#if defined(__STDC__) || defined(__cplusplus)
# define _P(s) s
#else
# define _P(s) ()
#endif

//extern int void _P(((int )));
//extern FILE *fopen _P((int fprintf (FILE *, const char *, ...), int fputc (int, FILE *)));
//extern char *strerror _P((int strerror_r (int, char *, size_t )));
extern u_int unassemble _P((unsigned int addr, int ninstr));
extern void sig_int_handler _P((int subcode));
extern void split _P((char **cmd, char *buf, int *argc));
extern void commandprompt _P((void));
extern void commandinit _P((void));
extern void print_help _P((void));
extern int command _P((unsigned char *buf));
extern int commandloop _P((FILE *ifp));

#undef _P
#endif /* COMMAND_H */
