/* Automagically generated Sun Aug 20 22:15:53  1995 - dont edit */
#ifndef M6811_SPI_H
#define M6811_SPI_H

#if defined(__STDC__) || defined(__cplusplus)
# define P_(s) s
#else
# define P_(s) ()
#endif

extern int spi_interrupt;
/*
 * Non-zero if SPI interrupt has occured
 * It should test SPI interrupt enable flag.
 */
#define spi_int()	spi_interrupt


/* ../../src/68xx/m6811/spi.c */
extern int spi_in P_((u_char *buf, int nbytes));
extern int spi_print P_((void));
extern int spsr_getb P_((u_int offs));
extern int spdr_getb P_((u_int offs));
extern int spdr_putb P_((u_int offs, u_char value));

#undef P_
#endif /* M6811_SPI_H */
