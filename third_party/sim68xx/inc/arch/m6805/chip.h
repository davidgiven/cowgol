#ifndef M6805_H
#define M6805_H

/*
 * 68HC705 memory map
 *
 * Defaults to C4/C8, others may be incomplete.
 * C16 model can be compiled by #defining symbol M6805C16
 */

/*
 *  Internal registers (0x00..0x1e)
 */
#define PORTA	0x00
#define PORTB	0x01
#define PORTC	0x02
#define PORTD	0x03	/* in  ,-    ,SS   ,SCK  ,MOSI ,MISO,TxD,RxD */
#define DDRA	0x04
#define DDRB	0x05
#define DDRC	0x06

/* 0x07-0x09 unused */

#define SPCR	0x0A	/* Serial Peripheral Control Register	*/
#define SPSR	0x0B	/* Serial Peripheral Status Register	*/
#define SPDR	0x0C	/* Serial Peripheral Data Register	*/
#define BAUD	0x0D	/* Baud Rate Register			*/
#define SCCR1	0x0E	/* Serial Communications Data Reg. 1	*/
#define SCCR2	0x0F	/* Serial Communications Data Reg. 2	*/
#define SCSR	0x10	/* Serial Communications Status Reg.	*/
#define SCDR	0x11	/* Serial Comm. Data Register (r/w)	*/
#define TCR	0x12	/* Timer Control Register		*/
#define TSR	0x13	/* Timer Status Register		*/
#define ICR	0x14	/* Input Capture Register  2 byte	*/
#define OCR	0x16	/* Output Compare Register 2 byte	*/
#define FRC	0x18	/* Free Running Counter			*/
#define ARC	0x1A	/* Alternate Running Counter		*/
#define PROG	0x1C	/* Eprom Program Register		*/
#define COPRST	0x1d	/* COP Reset */
#define COPCR	0x1e	/* COP Control */

#define NIREGS	(COPCR+1)	/* Number of internal registers	*/

/*
 * SCCR2 status bits
 */
#define TIE	0x80
#define TCIE	0x40
#define RIE	0x20
#define ILIE	0x10
#define TE	0x08
#define RE	0x04
#define RWU	0x02
#define SBK	0x01

/*
 * SCSR status bits
 */
#define TDRE	0x80
#define TC	0x40
#define RDRF	0x20
#define IDLE	0x10
#define OR	0x08
#define NF	0x04
#define FE	0x02


/*
 *  SPI CONTROL REGISTER
 */
#define SPIE 0x80	/* SPI INTERRUPT ENABLE */
#define SPE  0x40	/* SPI SYSTEM ENABLE */
#define DWOM 0x20	/* not used */
#define MSTR 0x10	/* MASTER/SLAVE MODE SELECT */
#define CPOL 0x08	/* CLOCK POLARITY */
#define CPHA 0x04	/* CLOCK PHASE */
#define SPR1 0x02
#define SPR0 0x01
/*
 *  SPI STATUS REGISTER
 */
#define SPIF 0x80	/* SPI INTERRUPT REQUEST */
#define WCOL 0x40	/* WRITE COLLISION STATUS FLAG */
#define MODF 0x10	/* SPI MODE ERROR INTERRUPT STATUS FLAG */


/*
 * TCR (Timer Control Register) bits:  Similar to 6801 family
 */
#define OLVL	0x01	/* Output Level: FRC matched OCR */
#define IEDG	0x02	/* Input Edge:
			   0=negative 1=positive for P20 trigging FRC->ICR */

#define TOIE	0x20	/* Enable Timer Overflow Interrupt	*/
#define OCIE	0x40	/* Enable Output Compare Interrupt	*/
#define ICIE	0x80	/* Enable Input Capture Interrupt	*/

/*
 * TSR (Timer Status Register) bits:  Similar to 6801 family
 */
#define TOF	0x20	/* Timer OverFlow ($FFFF->0) occured	*/
#define OCF	0x40	/* Output Compare Flag: FRC matched OCR	*/
#define ICF	0x80	/* Input Capture Flag: FRC->ICR		*/


/*
 *	Interrupt vector map
 */
#if defined(M6805C16)
#  define INTVECBASE 0x3f00
#else
#  if defined(M6805J1)
#    define INTVECBASE 0x0700
#  else /* C4/C8, B4/B6, P1/P9 */
#    define INTVECBASE 0x1f00
#  endif
#endif

/* 6805 common vectors */
#define RESVEC	(INTVECBASE+0xFE)	/* RESET		*/
#define SWIVEC	(INTVECBASE+0xFC)	/* Software Interrupt	*/
#define IRQVEC	(INTVECBASE+0xFA)	/* IRQ1 (ISI3)		*/

#if defined(M6805B4)||defined(M6805B6) /* B4,B6 */
# define TICVEC	(INTVECBASE+0xF8)	/* Timer input compare 1/2 */
# define TOCVEC	(INTVECBASE+0xF6)	/* Timer output compare 1/2 */
# define TOFVEC	(INTVECBASE+0xF4)	/* Timer overflow */
# define SCIVEC (INTVECBASE+0xF2)	/* Async. serial */
#else /* C4/C8/C16, dont care about others */
# define TIOVEC (INTVECBASE+0xF8)	/* Timer input/output compare */
# define SCIVEC (INTVECBASE+0xF6)	/* Async. serial */
# define SPIVEC (INTVECBASE+0xF4)	/* Sync. serial */
#endif

#endif /* M6805_H */

