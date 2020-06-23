#ifndef I2C_SIM_H
#define I2C_SIM_H
/*
 * $Id: i2c_sim.h,v 1.2 1997/06/05 20:13:44 arne Exp $
 */
#include "defs.h"		/* bool */

#if defined(__STDC__) || defined(__cplusplus)
# define P_(s) s
#else
# define P_(s) ()
#endif

/* Flag values */
#define I2C_DATA_INPUT	0x1	/* I2C data line in input mode */
#define I2C_DATA_OUTPUT	0x2	/* I2C data line in output mode */
#define I2C_START	0x4	/* I2C start condition is true */
#define I2C_STOP	0x8	/* I2C stop condition is true */
#define I2C_CLOCK_0_1	0x10	/* I2C clock transition 0->1 */
#define I2C_CLOCK_1_0	0x20	/* I2C clock transition 1->0 */

/*
 * I2C devices
 */

/*
 * I2C like two wire devices
 */
/* Xicor devices */
#define X9241_ID	0x05


enum i2c_sim_modes {
	I2C,			/* use pure I2C protocol */
	XICOR			/* use vendor I2C like protocol */
};

/*
 * Set simulation mode
 */
extern void i2c_mode P_((enum i2c_sim_modes new_mode));

/*
 * Set the I2C input pin to the value of `data'.
 * This routine must be provided by the user of i2c_sim.c
 */
extern void i2c_input P_((bool data));


/*
 * i2c_sim - simulate I2C slave devices
 *
 * i2c_sim responsibilities:
 *
 * - Detect start and stop conditions
 * - Detect data clocked out
 * - Call device simulators
 *
 * This routine can be called at any time. It will detect
 * changes on I2C clock and data lines and decode START and STOP
 * events.
 */
extern void i2c_sim P_((bool clock, bool data, int flags));

/*
 * Set one or more of the following option bits
 * to control the amount of event information printed
 */
extern struct i2c_print {
	unsigned command_bit:1;		/* Print each bit of a command */
	unsigned command_byte:1;	/* Print each byte of a command */
	unsigned command_device:1;	/* Print device type in a command */
	unsigned response_bit:1;	/* Print each bit of a response */
	unsigned response_done:1;	/* Print when response is done */
	unsigned response_none:1;	/* Print when no response is ready */
	unsigned response_ack:1;	/* Print ack from slave */
	unsigned start_stop;		/* Print start/stop conditions */
	unsigned clock;			/* Print clock transitions */
	unsigned device;		/* Print device specific events */
} i2c_print;


/*
 * Since the simulator is event driven, we must generate I2C
 * ack after a write from master before clock 0->1, i.e when
 * one of the following events occur:
 *
 * - master's clock go 1->0
 * - when master's SDA pin go from output to input mode to
 *   read the ack
 *
 * Set i2c_ack_type to suit your target CPU I2C driver
 */
extern enum i2c_ack_types {
	ACK_CLOCK,		/* gen ack when clock 1->0 */
	ACK_INPUT		/* gen ack when data -> input mode */
} i2c_ack_type;


#if 0
/* Not implemented yet */
extern void i2c_sim_set_opt P_((char *option, value));
extern int i2c_sim_get_opt P_((char *option));
#endif

#undef P_

#endif
