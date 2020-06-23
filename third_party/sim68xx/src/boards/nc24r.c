/* <<<                                  */
/* Copyright (c) 1994-1996 Arne Riiber. */
/* All rights reserved.                 */
/* >>>                                  */
/* io_nc24re.c - NC24R/6811E9 IO simulator */

#include <stdio.h>

#include "defs.h"
#include "chip.h"
#include "ireg.h"
#include "memory.h"
#include "reg.h"


/*

PORTC		PORTE
select	input status
 1:0	 7  6  5  4  3  2  1  0
-----	------------------------
 00	20 16 12  8  4  0
 01	21 17 13  9  5  1
 10	22 18 14 10  6  2
 11	23 19 15 11  7  3

 To address an input i:

	select = i % 4;
	bitno  = i / 4 + 2;
	status = input_status[select] & (1 << bitno);

The PCB layout has an error where PORTE inputs 5 and 7 are swapped.
*/

u_char input_status[4];


/*
 * correct_b57 - correct pcb layout error: bits 5/7 are swapped
 */
correct_b57 (bitno)
	int bitno;
{
	if (bitno == 5)
		return 7;
	else if (bitno == 7)
		return 5;
	else
		return bitno;
}


/*
 * get_input - get input status
 */
get_input (i)
	int i;
{
	int select = i % 4;
	int bitno  = i / 4 + 2;
	/*
	 * Correct for PCB layout error input bits 5/7
	 */
	bitno = correct_b57 (bitno);
	return input_status[select] & (1 << bitno);
}

/*
 * set_input - set input on or off
 */
set_input (i, onoff)
	int i;
	u_char onoff;
{
	int select = i % 4;
	int bitno  = i / 4 + 2;

	bitno = correct_b57 (bitno);
	if (onoff)
		input_status[select] |= (1 << bitno);
	else
		input_status[select] &= ~(1 << bitno);
}

/*
 * porte_read
 */
porte_read (addr)
	int addr;
{
	int select;

	select = ireg_getb(PORTC) & 0x03;
	return ireg_putb (addr, input_status[select]);
}


/*
 Relay output control mask:

   7   6   5   4   3  2  1  0
 +---+---+---+---+------------+
 | 0 | 0 | S | M | outputno   |
 +---+---+---+---+------------+
		S=0 => Enable output (0-11) on slave PCB
		M=0 => Enable output (0-11) on master PCB

The master has 1:1 for binary pattern and outputno,
slave is irregular.
*/

/*
 * portb_write
 */
portb_write (addr, value)
	u_int addr;
	u_char value;
{
	static u_char slave_rtab[] = {
	/* outputno	number-written-to-port-b */
		20,	/* 0 */
		21,	/* 1 */
		22,	/* 2 */
		23,	/* 3 */
		16,	/* 4 */
		17,	/* 5 */
		18,	/* 6 */
		19,	/* 7 */
		12,	/* 8 */
		13,	/* 9 */
		14,	/* 10 */
		15,	/* 11 */
		0xff,	/* 12 */
		0xff,	/* 13 */
		0xff,	/* 14 */
		0xff	/* 15 */
	};
	int output = value & 0x0f;

	switch (value & 0x30)
	{
	case 0x00:
		printf ("portb: Error: master and slave enabled\n");
		break;
	case 0x10:
		/*
		 * Slave enabled (outputs 12-23)
		 */
		output = slave_rtab[output];
	case 0x20:
		/*
		 * Master enabled (outputs 0-11)
		 */
		printf ("portb: Output on: %2d\t", output);
		/*
		 * Toggle relay status input
		 */
		set_input (output, !get_input (output));
		printf ("input: %d %s\t", output,
			get_input (output) ? "ON" : "OFF");
		break;
	case 0x30:
		printf ("portb: Outputs off\n");
		break;
	}
	return ireg_putb (addr, value);
}


/*
 * portb_read
 */
portb_read (addr)
	u_int addr;
{
	printf ("portb_read(%d)=%d\n", addr, ireg_getb(addr));
	return ireg_getb (addr);
}



/*
 * Install functions to be called on IO port access
 */
board_install ()
{
	ireg_install (PORTB, portb_read, portb_write);
	ireg_install (PORTE, NULL, porte_read);
}

