/* Automagically generated Fr 15 Apr 2011 09:30:58 CEST - dont edit */
#ifndef MAIN_H
#define MAIN_H

#if defined(__STDC__) || defined(__cplusplus)
# define _P(s) s
#else
# define _P(s) ()
#endif

//extern FILE *fopen _P((int fprintf (FILE *, const char *, ...), int fputc (int, FILE *)));
extern char *strerror _P((int strerror_r (int, char *, size_t )));
extern char *getprogname _P((void));
extern int main _P((int argc, char *argv[]));

#undef _P
#endif /* MAIN_H */
