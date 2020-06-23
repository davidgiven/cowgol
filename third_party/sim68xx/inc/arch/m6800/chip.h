#ifndef M6800_CHIP_H
#define M6800_CHIP_H

/*
 * 6800 memory map
 */
#define NIREGS  0x00		/* Number of internal registers */

/*
 *	Interrupt vector map
 */
#define IRQVECTOR	0xFFF8	/* IRQ1			*/
#define SWIVECTOR	0xFFFA	/* Software Interrupt	*/
#define NMIVECTOR	0xFFFC	/* NMI			*/
#define RESVECTOR	0xFFFE	/* RESET		*/

#endif
