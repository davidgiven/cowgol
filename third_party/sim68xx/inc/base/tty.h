/* Automagically generated Fr 15 Apr 2011 09:30:58 CEST - dont edit */
#ifndef TTY_H
#define TTY_H

#if defined(__STDC__) || defined(__cplusplus)
# define _P(s) s
#else
# define _P(s) ()
#endif

//extern FILE *fopen _P((int fprintf (FILE *, const char *, ...), int fputc (int, FILE *)));
extern int tcdrain _P((int tcflow (int, int )));
extern int tty_noblock _P((int fd, char *tty_orig));
extern int tty_restore _P((int fd, char *tty));
extern int tty_getkey _P((int fd));

#undef _P
#endif /* TTY_H */
