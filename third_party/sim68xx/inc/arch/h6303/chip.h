#ifndef H6303_CHIP_H
#define H6303_CHIP_H

/*
 * 6303 memory map
 */
#define NIREGS  0x21		/* Number of internal registers */

/*
 * Internal registers
 */
#define DDR1	0x00
#define DDR2	0x01
#define P1		0x02
#define P2		0x03
#define DDR3	0x04	/* External RAM area in 6303 */
#define DDR4	0x05	/* External RAM area in 6303 */
#define P3		0x06	/* External RAM area in 6303 */
#define P4		0x07	/* External RAM area in 6303 */

/*
 * Timer registers
 */
#define TCSR	0x08	/* Timer Control/Status Register	*/
#define TCSR1	0x08	/* Timer Control/Status Register	*/
#define FRC		0x09	/* Free-Running Counter (16 bits)	*/
#define FRCH	0x09
#define FRCL	0x0A
#define OCR1	0x0B	/* Output Compare Register (16 bits)	*/
#define OCR1H	0x0B
#define OCR1L	0x0C
#define ICR		0x0D	/* Input Capture Register (16 bits)	*/
#define ICRH	0x0D
#define ICRL	0x0E
#define TCSR2	0x0F	/* Timer Control/Status Register 2	*/
/*
 * SCI registers
 */
#define RMCR	0x10	/* Rate/Mode Control Register			*/
#define TRCSR	0x11	/* Transmit/Receive Control Status Register	*/
#define RDR		0x12	/* Receive Data Register			*/
#define TDR		0x13	/* Transmit Data Register			*/
/*
 * RAM Control Register
 */
#define RP5CR	0x14	/* RAM/Port 5 Control Register */

/*
 * Port 5, 6 & 7
 */
#define P5		0x15
#define DDR6	0x16
#define P6		0x17
#define P7		0x18

/*
 * More Timer registers
 */
#define OCR2	0x19	/* Output Compare Register (16 bits)	*/
#define OCR2H	0x19
#define OCR2L	0x1A
#define TCSR3	0x1B	/* Timer Control/Status Register 3	*/
#define TCONR	0x1C	/* Timer Constant Register	*/
#define T2CNT	0x1D	/* Timer 2 Up Counter	*/
#define TRCSR2	0x1E	/* Tx/Rx Control Status Register 2	*/
#define TSTREG	0x1F	/* Test Register	*/

#define DDR5	0x20	/* Port 5 DDR	*/
#define P6CSR	0x21	/* Port 6 Control/Status Register*/


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
 * TCSR1 (Timer Control/Status Register) bits:
 */
#define OLVL1	0x01	/* Output Level (when DDR20=1): FRC matched OCR */
#define IEDG	0x02	/* Input Edge (when DDR20=0):
			   0=negative 1=positive for P20 trigging FRC->ICR */
#define ETOI	0x04	/* Enable Timer Overflow Interrupt	*/
#define EOCI1	0x08	/* Enable Output Compare Interrupt	*/
#define EICI	0x10	/* Enable Input Capture Interrupt	*/
#define TOF		0x20	/* Timer OverFlow ($FFFF->0) occured	*/
#define OCF1	0x40	/* Output Compare Flag: FRC matched OCR	*/
#define ICF		0x80	/* Input Capture Flag: FRC->ICR		*/

/*
 * TCSR2 (Timer Control/Status Register) bits:
 */
#define OE1		0x01	/* Output Enable 1:
 	 	 	 	 	 	 This bit enables the OLVL1 to appear at
 	 	 	 	 	 	 port 2, bit 1 when a match has occured
 	 	 	 	 	 	 between the counter and the OCR1
 	 	 	 	 	 	 When cleared, port 2, bit 1 will be an I/O port
 	 	 	 	 	 	 When set it will be an output of OLVL1*/
#define OE2		0x02	/* Output Enable 2:
 	 	 	 	 	 	 This bit enables the OLVL2 to appear at
 	 	 	 	 	 	 port 2, bit 5 when a match has occured
 	 	 	 	 	 	 between the counter and the OCR2
 	 	 	 	 	 	 When cleared, port 2, bit 5 will be an I/O port
 	 	 	 	 	 	 When set it will be an output of OLVL2*/
#define OLVL2	0x04	/* Output Level 2 */
#define EOCI2	0x08	/* Enable Output Compare Interrupt 2	*/
#define OCF2	0x20	/* Output Compare Flag: FRC matched OCR2	*/


/*
 * TCSR3 (Timer Control/Status Register) bits:
 */
#define CKS0	0x01	/* CKS0 Input Clock Select 0 */
#define CKS1	0x02	/* CKS1 Input Clock Select 1
						  CKS1  |  CKS0  |  Input Clock to Counter 2
						  ------+--------+---------------------------
						    0   |    0   |  E clock
						    0   |    1   |  E clock / 8
						    1   |    0   |  E clock / 128
						    1   |    1   |  External clock
 	 	 	 	 	 	 */
#define TOS0	0x04	/* Timer Output Select 0 */
#define TOS1	0x08	/* Timer Output Select 1
						  TOS1  |  TOS0  |  Input Clock to Counter 2
						  ------+--------+---------------------------
						    0   |    0   |  Timer Output Inhibited
						    0   |    1   |  Toggle Output*
						    1   |    0   |  Output "0"
						    1   |    1   |  Output "1"

		 * - When a match occurs between the counter and the TCONR, timer 2
		     output level is reversed.
 	 	 	 	 	 	 */
#define TE2		0x10	/* Timer 2 Enable Bit	*/
#define ECMI	0x40	/* Enable Counter Match Interrupt */
#define CMF 	0x80	/* Counter Match Flag   */

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
