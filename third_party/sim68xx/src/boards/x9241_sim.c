/* <<<                                  */
/* Copyright (c) 1994-1996 Arne Riiber. */
/* All rights reserved.                 */
/* >>>                                  */
#if 0			
				/*
				 * Master has now written a number of bytes
				 * to the slave.
				 */
				if (out_bits == 16) {
					/*
					 * If a 2 byte command, we are done.
					 * If a 3 byte command, next byte
					 * follows (to or from slave)
					 */

#endif
/*
 * Given 
 */
static void
x9241_sim (b, response_buf, response_len)
	u_char b;
	u_char *response_buf;
	u_int  *response_len;
{
	static u_char buf[256];
	static u_char len;
	static u_char major;
	static u_char minor;

	static struct x9241 {
		u_char state;
		u_char wiper[4];
	} x9241[16]; /* 16 devices of 4 outputs each */

	switch (event) {
	case I2C_START:
		cmd_bit_num = 0;
		return;
	case I2C_STOP:			/* end/abort */
		return;
 	case I2C_INPUT:
	case I2C_OUTPUT:
		switch (state) {
		case AWAIT_ID: /* Initial */
		case AWAIT_CMD:
		case GEN_RESP:
		}
	}

	if (len == 1) {
		/* Determine who will get the rest of the message */

		major = buf[0] >> 4;
		minor = buf[0] & 0x0f;

		switch (major) {
		case X9241_ID:
			printf ("major=x9241, minor=%d\n", major, minor);
			/* Generate ACK */
			i2c_ack ();
			break;
		default:
			printf ("Unknown device id: %02x\n", major);
			return;
		}
	} else {
		/* Route byte to receiving device */

		switch (major) {
		case X9241_ID:
			if (len == 2) {
				/* Determine command */
				u_char cmd = buf[1] >> 4;

				switch (cmd) {
				case X9241_READ:
					/* Next byte to send is our value */
					response_buf[0] = x9241[minor].wiper;
					*response_len = 1;
					/**********************************
					*** The above will not work!!!  ***
					*** need better buffer handling ***
					***********************************/
				case X9241_WRITE:
					/* Next byte to receive is our value */
				default:
					x9241[minor].state = cmd;
					printf ("Unimplemented: %02x\n", cmd);
					i2c_ack ();
				}
			} else if (len == 3) {
				switch (x9241[minor].state) {
				case X9241_WRITE:
					x9241[minor].wiper = buf[2];
				default:
					x9241[minor].state = 0; /* undefined */
					i2c_ack ();
				}
			}
			break;
		default:
			printf ("Byte discarded: %02x\n", b);
		}
	}
}
