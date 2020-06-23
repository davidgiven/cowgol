/* <<<                                  */
/* Copyright (c) 1994-1996 Arne Riiber. */
/* All rights reserved.                 */
/* >>>                                  */
/*
 * $Id: i2c_sim.c,v 1.2 1997/06/05 20:14:07 arne Exp $
 */

#include <stdio.h>
#include "stddef.h"
#include "i2c_sim.h"

#if defined(__STDC__) || defined(__cplusplus)
# define P_(s) s
#else
# define P_(s) ()
#endif

#define READ_FROM_SLAVE 1
#define WRITE_TO_SLAVE  2

static enum i2c_sim_modes i2c_sim_mode = XICOR;
struct i2c_print i2c_print;
enum i2c_ack_types i2c_ack_type = ACK_INPUT;

/*
 * Generate I2C ack
 */
static void
i2c_ack ()
{
	i2c_input (0);
}


/*
 * Put a bit received on the I2C bus (reverse order) into a buffer
 */
static void
i2c_set_bit (data, bitno, value)
	u_char *data;
	u_int   bitno;
	bool    value;
{
	if (value) {
		data[bitno/8] |= (1 << (7 - (bitno % 8)));
	} else {
		data[bitno/8] &= ~(1 << (7 - (bitno % 8)));
	}
}

/*
 * Get a bit to be sent on the I2C bus (reverse order) from a buffer
 */
static bool
i2c_get_bit (data, bitno)
	u_char *data;
	u_int   bitno;
{
	return !! (data[bitno/8] & (1 << (7 - (bitno % 8))));
}

/*
 * Put a bit (normal order) into a buffer
 */
static void
set_bit (data, bitno, value)
	u_char *data;
	u_int   bitno;
	bool    value;
{
	if (value) {
		data[bitno/8] |= (1 << (bitno % 8));
	} else {
		data[bitno/8] &= ~(1 << (bitno % 8));
	}
}

/*
 * Add a byte to a bit stream buffer (host order)
 */
static void add_byte (u_char *data, u_char *bits, u_char  value)
//	u_char *data;		/* Buffer to add byte to */
//	u_int  *bits;		/* Number of bits in data */
//	u_char  value;		/* Byte value to add */
{
	u_char i;

	for (i = 0; i < 8; i++) {
		set_bit (data, (*bits)++, value & (1 << i));
	}
}


/*
 * Add ack to a bit stream buffer
 */
add_ack (u_char *data, u_char *bits)
{
	/* Ack must be given before clock 0->1 */

	if (i2c_ack_type == ACK_CLOCK) {
		printf ("add_ack: UNTESTED code!\n");
		/*
		 * Probably the most correct target I2C driver
		 */
		set_bit (data, (*bits)++, 0);
	} else if (i2c_ack_type == ACK_INPUT) {
		/*
		 * The I2C driver I use for the target CPU, sets up
		 * to input mode AFTER it has driven clock 1->0,
		 * so we have to generate ack immediately
		 */
		i2c_ack ();
	} else {
		printf ("add_ack: Invalid i2c_ack_type: %d\n", i2c_ack_type);
	}
}


/*
 * Called when a new bit has been added to the input bit stream of the chip
 *
 * - Detect when a command has arrived
 * - Generate response and ack as required
 */
#if defined(__STDC__) || defined(__cplusplus)
int x9241_read_write (
	u_char *cmd_data,	/* All data clocked out by master */
	u_char  cmd_bits,	/* Number of bits in cmd buf */
	u_char *resp_data,	/* Response */
	u_char *resp_bits	/* Number of bits in response */
	)
#else
int
x9241_read_write (cmd_data, cmd_bits, resp_data, resp_bits)
	u_char *cmd_data;	/* All data clocked out by master */
	u_char  cmd_bits;	/* Number of bits in cmd buf */
	u_char *resp_data;	/* Response */
	u_char *resp_bits;	/* Number of bits in response */
#endif
{
	/*
	 * 16 x X9241 devices of 4 outputs each
	 */
	static struct x9241 {
		u_char state;
		struct pot {
			u_char wiper;	 /* output value */
			u_char nvreg[4]; /* NonVolatile SRAM register */
		} pot[4];
	} x9241[16];

/* Commands */
#define RESTORE_WIPERS	1	/* Transfer R to wiper for all potmeters */
#define INC_DEC_WIPER	2	/* Inc/dec wiper for potmeter P */
#define STORE_WIPERS	8	/* Transfer wiper to R for all potmeters */
#define READ_WIPER	9	/* Read wiper for potmeter P */
#define WRITE_WIPER	10	/* Write wiper for potmeter P */
#define READ_STORE	11	/* Read reg R for potmeter P */
#define WRITE_STORE	12	/* Write reg R for potmeter P */
#define RESTORE_WIPER	13	/* Transfer R->P */
#define STORE_WIPER	14	/* Transfer P->R */

	u_char type =  cmd_data[0] >> 4;
	u_char inst =  cmd_data[0] & 0x0f;
	u_char cmd  =  cmd_data[1] >> 4;
	u_char pot  = (cmd_data[1] >> 2) & 3;
	u_char reg  =  cmd_data[1] & 3;

	if (cmd_bits == 8) {
		/*
		 * Validate device type
		 */
		if (type == X9241_ID) {
			if (i2c_print.device) {
				printf ("x9241: Device type X9241, instance\n",
					inst);
			}
			add_ack (resp_data, resp_bits);
		} else {
			printf ("x9241: Error: called to simulate device %d\n",
				type);
		}
	} else if (cmd_bits == 16) {
		/*
		 * Determine command
		 */
		switch (cmd) {
		case READ_WIPER:
			/* Next byte to send is our value */
			if (i2c_print.device) {
				printf ("x9241(%d): READ_WIPER(%d) = %d\n",
					inst, pot, x9241[inst].pot[pot].wiper);
			}
			add_ack (resp_data, resp_bits);
			add_byte (resp_data, resp_bits, x9241[inst].pot[pot].wiper);
			break;
		case WRITE_WIPER:
			/* Next byte to receive is our value */
			if (i2c_print.device) {
				printf ("x9241(%d): WRITE_WIPER(%d)...\n",
					inst, pot);
			}
			add_ack (resp_data, resp_bits);
			break;
		case RESTORE_WIPERS:
		case INC_DEC_WIPER:
		case STORE_WIPERS:
		case READ_STORE:
		case WRITE_STORE:
		case RESTORE_WIPER:
		case STORE_WIPER:
			printf ("x9241: unimplemented command: %d\n", cmd);
			break;
		default:
			printf ("x9241: unknown command: %d\n", cmd);
		}
	} else if (cmd_bits == 24) {
		switch (cmd) {
		case WRITE_WIPER:
			if (i2c_print.device) {
				printf ("x9241(%d): WRITE_WIPER(%d,%d)\n",
					inst, pot, cmd_data[2]);
			}
			x9241[inst].pot[pot].wiper = cmd_data[2];
			add_ack (resp_data, resp_bits);
			break;
		default:
			printf ("x9241: unexpected command: %d\n", cmd);
		}
	}
}

/*
 * This routine traps devices that are not simulated
 */
#if defined(__STDC__) || defined(__cplusplus)
int unknown_read_write (
	u_char *cmd_data,	/* All data clocked out by master */
	u_char  cmd_bits,	/* Number of bits in cmd buf */
	u_char *resp_data,	/* Response */
	u_char *resp_bits	/* Number of bits in response */
	)
#else
int unknown_read_write (cmd_data, cmd_bits, resp_data, resp_bits)
	u_char *cmd_data;	/* All data clocked out by master */
	u_char  cmd_bits;	/* Number of bits in cmd buf */
	u_char *resp_data;	/* Response */
	u_char *resp_bits;	/* Number of bits in response */
#endif
{
	u_char slave_type = cmd_data[0] >> 4;

	printf ("Trap: Device type %d is not simulated\n", slave_type);
	printf ("Look at x9241_read_write() for an example\n");
}

/*
 * xicor_sim_frame - same conditions for call as i2c_sim_frame
 */
static void 
xicor_sim_frame (data, flags)
	bool data;
	int  flags;
{

#define DEVICE_TYPES_MAX 16

	/* Array of function pointers to simulate commands/responses */
	static struct xicor_device {
		char name[8];
		int (*read_write) P_((u_char *slave_data,
				   u_char  slave_bits,
				   u_char *master_data,
				   u_char *master_bits));

	} xicor_devices[DEVICE_TYPES_MAX] = {
		{"?", unknown_read_write},	/* 0 */
		{"?", unknown_read_write},	/* 1 */
		{"?", unknown_read_write},	/* 2 */
		{"?", unknown_read_write},	/* 3 */
		{"?", unknown_read_write},	/* 4 */
		{"x9241", x9241_read_write},	/* 5 */
		{"?", unknown_read_write},	/* 6 */
		{"?", unknown_read_write},	/* 7 */
		{"?", unknown_read_write},	/* 8 */
		{"?", unknown_read_write},	/* 9 */
		{"?", unknown_read_write},	/* a */
		{"?", unknown_read_write},	/* b */
		{"?", unknown_read_write},	/* c */
		{"?", unknown_read_write},	/* d */
		{"?", unknown_read_write},	/* e */
		{"?", unknown_read_write}	/* f */
	};

	/* Terminology:
	 *   Output (from master)
	 *   Input  (from slave)
	 */
	static u_char out_buf[256];	/* Output data buffer */
	static u_int  out_bits;		/* Number of bits in output buffer */
	static u_char in_buf[256];	/* Response buffer */
	static u_char in_bits;		/* Number of bits in response buf */
	static u_int  in_bits_sent;	/* Number of bits sent in response */

	static u_char device_type;


	if (flags & I2C_STOP) {
		return;
	}

	if (flags & I2C_START) {
		/*
		 * Clear I2C buffer, make ready for receiving slave address 
		 */
		out_bits = 0;
		in_bits = 0;
		in_bits_sent = 0;
		return;
	}

	/*
	 * x9241 does not use the I2C protocol addressing (as of 1989),
	 * but has R/W as part of the second byte after the slave address.
	 *
	 * It also allows inc/dec sequences for non-multiple of 8 bits
	 * To simulate x9241 accurately, each bit must passed to it
	 */
	if ((flags & I2C_DATA_OUTPUT) && (flags & I2C_CLOCK_0_1)) {
		/*
		 * Latch data on SDA output pin
		 */
		if (i2c_print.command_bit) {
			printf ("Xicor command bit %3d: %d\n", out_bits, data);
		}
		i2c_set_bit (out_buf, out_bits, data);
		++out_bits;
		if ((out_bits % 8) == 0) {
			if (i2c_print.command_byte) {
				printf ("Xicor byte: %02x\n",
					out_buf[out_bits/8 - 1]);
			}
		}
		if (out_bits == 8) {
			/*
			 * Set the slave type, to which all further
			 * data will be routed until a STOP or new
			 * START condition is detected
			 */
			u_char slave_addr = out_buf[0];
			device_type = slave_addr >> 4;
			if (i2c_print.command_device) {
				printf ("Xicor: Setting device to %s\n",
					xicor_devices[device_type].name);
			}
			/*
			 * Xicor addressing different from I2C:
			 * transfer direction set in next byte
			 * => device simulator must generate ack
			 */
		}

		if (out_bits >= 8) {
			/*
			 * Simulate device command, pass slave ACK in
			 * buffer 'in_buf'
			 */
			xicor_devices[device_type].read_write (
				out_buf,
				out_bits,
				in_buf,
				&in_bits);
		}
	} else if ((flags & I2C_DATA_INPUT) && (flags & I2C_CLOCK_1_0)) {
		/*
		 * Input a bit to SDA data pin
		 *
		 * We are here if slave has generated response
		 * and expect to finish before next response
		 */
		if (in_bits_sent < in_bits) {
			bool bit = i2c_get_bit (in_buf, in_bits_sent);
			if (i2c_print.response_bit) {
				printf ("Xicor: response bit %d: %d\n",
					in_bits_sent, bit);
			}
			i2c_input (bit);
			if (++in_bits_sent >= in_bits) {
				in_bits_sent = 0;
				in_bits      = 0;
				if (i2c_print.response_done) {
					printf ("Xicor: response done\n");
				}
			}
		} else {
			if (i2c_print.response_none) {
				printf ("Xicor: no response to send\n");
			}
		}
	}
}


/*
 * i2c_sim_frame
 *
 * Called when one of the following events has occured:
 *   - start condition
 *   - stop condition
 *   - clock transition for data out, `data' is latched data bit to slave
 *   - clock transition for data in, `data' not used
 */
static void
i2c_sim_frame (data, flags)
	bool data;
	int  flags;
{
	/*
	 * Array of function pointers to simulate I2C commands/responses
	 *
	 * I2C chips suffers from deviation in addressing formats
	 * i.e. the number of bits for chip type (the "fixed" address part)
	 * and instance (the "programmable" address part) vary.
	 * In the worst case there would be 7 bits for chip type and the
	 * array below would have to have 128 entries.
	 *
	 * Code needs some more work here to make it useable.
	 */
	static struct device {
		/*
		 * The functions below are called when it's time
		 * to simulate read from or write to device
		 */
		int (*read)  (u_char *buf, u_char *len);
		int (*write) (u_char *buf, u_char len);
	} devices[DEVICE_TYPES_MAX]; /* 16 */

	/* Terminology:
	 *   Output (from master)
	 *   Input  (from slave)
	 */
	static u_char out_buf[256];	/* Output data buffer */
	static u_int  out_bits;		/* Number of bits in output buffer */
	static u_char in_buf[256];	/* Response buffer */
	static u_int  in_bits;		/* Current bit to send in response */
	static u_char in_len;		/* Number of bytes in response buf */
	static u_char device_type;
	static u_char slave_rw;

	if (i2c_sim_mode == XICOR) {
		xicor_sim_frame (data, flags);
		return;
	} else {
		printf ("Warning - you are running untested code\n");
	}

	if (flags & I2C_STOP) {
		if (slave_rw == WRITE_TO_SLAVE) {
			/*
			 * Master has finished a data transfer to slave,
			 * schedule it in rear of simulated time
			 */
			if (out_bits <= 8) {
				printf ("I2C: No data in command\n");
			} else {
				devices[device_type].write (
					out_buf,
					out_bits);
			}
		}
		return;
	}

	if (flags & I2C_START) {
		/* Clear I2C buffer, make ready for receiving slave address */
		out_bits = 0;
		in_bits = 0; /* ??? */
		return;
	}

	if ((flags & I2C_DATA_OUTPUT) && (flags & I2C_CLOCK_0_1)) {
		/*
		 * Assemble a byte and pass it to i2c_sim_device when done
		 */
		if (i2c_print.command_bit) {
			printf ("I2C command bit %d: %d\n", out_bits, data);
		}
		i2c_set_bit (out_buf, out_bits, data);
		++out_bits;
		if (out_bits % 8 == 0) {
			/*
			 * Decode command, gen response here 
			 * Response is a sequence of bytes that
			 * should be returned as a 0 or 1
			 * for each valid clock 0->1 transition
			 */
			if (i2c_print.command_byte) {
				printf ("I2C command byte: %02x\n",
					out_buf[out_bits/8 - 1]);
			}
			if (out_bits == 8) {
				/*
				 * Set the slave type, to which all further
				 * data will be routed until a STOP or new
				 * START condition is detected
				 */
				u_char slave_addr = out_buf[0];
				/* 
				 * The address format below is not valid for
				 * all I2C devices
				 */
				device_type = slave_addr >> 4;
				slave_rw   = slave_addr & 1;

				/* I2C: After the slave address is defined,
				 * the direction for the next transfer
				 * is also defined (R/W~ bit).
				 *
				 * The number of bytes received or sent by
				 * the slave is still variable,
				 * but complete (assume master
				 * cannot generate STOP in the middle)
				 */
			} else {
				/*
				 * Master has now written a number of bytes
				 * to the slave.
				 */
				if (slave_rw == READ_FROM_SLAVE) {
					/*
					 * Let slave pass data to master.
					 * Master will enter read mode
					 * and accept the data we wil
					 * pass it in 'in_buf' later.
					 */
					devices[device_type].read (
						in_buf,
						&in_len);
				} else {
					/* Accumulate the next byte,
					 * send it to slave when STOP
					 * or new START is detected
					 */
					if (i2c_print.response_ack) {
						printf ("I2C: generating ack\n");
					}
					i2c_ack ();
				}
			}
		}
	} else if ((flags & I2C_DATA_INPUT) && (flags & I2C_CLOCK_1_0)) {
		/*
		 * Input a bit to I2C data pin
		 */

		/*
		 * We are here if i2c_sim_dev() generated response
		 * and expect to finish before i2c_sim_dev() is called
		 * again
		 */
		if (in_len > 0) {
			bool bit = i2c_get_bit (in_buf, in_bits);
			if (i2c_print.response_bit) {
				printf ("I2C: response bit %d: %d\n",
					in_bits, bit);
			}
			i2c_input (bit);
			if ((++in_bits / 8) >= in_len) {
				in_len = 0;
				in_bits = 0;
				if (i2c_print.response_done) {
					printf ("I2C: response done\n");
				}
			}
		} else {
			if (i2c_print.response_none) {
				printf ("I2C: no response to send\n");
			}
		}
	}
}


/*
 * i2c_sim - simulate I2C slave devices
 *
 * i2c_sim responsibilities:
 *
 * - Detect start and stop conditions
 * - Detect data clocked out
 * - Generate ack (not implemented yet)
 * - Respond to I2C commands (not implemented yet)
 *
 * This routine can be called at any time. It will detect
 * changes on I2C clock and data lines and decode START and STOP
 * events.
 */
void
i2c_sim (clock, data, flags)
	bool clock;		/* New clock */
	bool data;		/* New data */
	int  flags;		/* Input/output */
{
	static bool inside_frame = 0;
	static bool clock_last = 0; /* Last clock of clock */
	static bool data_last  = 0; /* Last value of data */

	/*
	 * Start: Data 1->0 while clock is 1 
	 * Stop:  Data 0->1 while clock is 1 
	 */
	if (clock_last && clock) {
		if (data_last && !data) {
			if (i2c_print.start_stop) {
				printf ("I2C start condition detected\n");
			}
			if (inside_frame) {
				/* Not allowed by I2C spec */
				printf ("Error: %s\n",
					"Start condition inside I2C frame");
			}
			inside_frame = TRUE;
			i2c_sim_frame (data, I2C_START);
		} else if (!data_last && data) {
			if (i2c_print.start_stop) {
				printf ("I2C stop condition detected\n");
			}
			inside_frame = FALSE;
			i2c_sim_frame (data, I2C_STOP);
		}
	} else if (!clock_last && clock || clock_last && !clock) {
		if (i2c_print.clock) {
			printf ("I2C clock: %d -> %d\n", clock_last, clock);
		}
		if (inside_frame) {
			if (!clock_last && clock) {
				/* Clock transition 0->1 - latch output data */
				i2c_sim_frame (data, flags|I2C_CLOCK_0_1);
			} else if (clock_last && !clock) {
				/* Clock transition 1->0 - set input data */
				i2c_sim_frame (data, flags|I2C_CLOCK_1_0);
			}
		}
	}
	clock_last = clock;
	data_last  = data;
}

