#ifndef H6301_CHIP_H
#define H6301_CHIP_H

/*
 * 6801/6301 memory map
 */
#define NIREGS  0x15		/* Number of internal registers */

/*
 * Internal registers
 */
#define DDR1	0x00
#define DDR2	0x01
#define P1	0x02
#define P2	0x03
#define DDR3	0x04
#define DDR4	0x05
#define P3	0x06
#define P4	0x07
/*
 * Timer registers
 */
#define TCSR	0x08	/* Timer Control/Status Register	*/
#define FRC	0x09	/* Free-Running Counter (16 bits)	*/
#define OCR	0x0B	/* Output Compare Register (16 bits)	*/
#define ICR	0x0D	/* Input Capture Register (16 bits)	*/
#define P3CSR	0x0F	/* Port 3 Control/Status Register	*/
/*
 * SCI registers
 */
#define RMCR	0x10	/* Rate/Mode Control Register			*/
#define TRCSR	0x11	/* Transmit/Receive Control Status Register	*/
#define RDR	0x12	/* Receive Data Register			*/
#define TDR	0x13	/* Transmit Data Register			*/
/*
 * RAM Control Register
 */
#define RAMCR	0x14


/*
 *	Internal register values (incomplete)
 */

/*
 * TRCSR (Transmit/Receive Control/Status Register) bits
 */
#define WU	0x01	/* Wake Up bit				*/
#define TE	0x02	/* Transmitter Enable bit		*/
#define TIE	0x04	/* Transmitter Interrupt Enable bit	*/
#define RE	0x08	/* Receiver Enable bit			*/
#define RIE	0x10	/* Revceiver Interrupt Enable bit	*/
#define TDRE	0x20	/* Transmit Data Register Empty		*/
#define ORFE	0x40	/* OverRun Framing Error		*/
#define	RDRF	0x80	/* Receive Data Register Full		*/

/*
 * TCSR (Timer Control/Status Register) bits:
 */
#define OLVL	0x01	/* Output Level (when DDR20=1): FRC matched OCR */
#define IEDG	0x02	/* Input Edge (when DDR20=0):
			   0=negative 1=positive for P20 trigging FRC->ICR */
#define ETOI	0x04	/* Enable Timer Overflow Interrupt	*/
#define EOCI	0x08	/* Enable Output Compare Interrupt	*/
#define EICI	0x10	/* Enable Input Capture Interrupt	*/
#define TOF	0x20	/* Timer OverFlow ($FFFF->0) occured	*/
#define OCF	0x40	/* Output Compare Flag: FRC matched OCR	*/
#define ICF	0x80	/* Input Capture Flag: FRC->ICR		*/


/*
 *	Interrupt vector map
 */
/* 6301 only */
#define TRAPVECTOR	0xFFEE
/* 6301/6801 */
#define SCIVECTOR	0xFFF0	/* Serial */
#define TOFVECTOR	0xFFF2	/* Timer Overflow	*/
#define OCFVECTOR	0xFFF4	/* Timer Output Capture	*/
#define ICFVECTOR	0xFFF6	/* Timer Input Capture	*/
#define IRQVECTOR	0xFFF8	/* IRQ1 (ISI3)		*/
#define SWIVECTOR	0xFFFA	/* Software Interrupt	*/
#define NMIVECTOR	0xFFFC	/* NMI			*/
#define RESVECTOR	0xFFFE	/* RESET		*/

#endif
