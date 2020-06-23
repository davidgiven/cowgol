#ifndef M68XX_IO_H
#define M68XX_IO_H

#if defined(__STDC__) || defined(__cplusplus)
# define _P(s) s
#else
# define _P(s) ()
#endif

/* Headers for ../../src/arch/m68xx/io.c */
extern int out_in _P((u_char *buf, int nbytes));
extern int out_print _P((int buf, int nbytes));
extern void io_poll _P((void));
extern void io_putb _P((u_char value));
extern int io_cmd _P((int argc, char *argv[]));
/* End of headers for ../../src/arch/m68xx/io.c */

#undef _P
#endif /* M68XX_IO_H */
