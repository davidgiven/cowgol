#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include <poll.h>
#include <errno.h>
#include <fcntl.h>
#include "sim.h"
#include "m68k.h"
#include "fileio.h"

static uint32_t dma = 0x480;
static int exitcode = 0;

struct fcb
{
	cpm_filename_t filename; /* includes drive */
	uint8_t extent;
	uint8_t s1;
	uint8_t s2;
	uint8_t recordcount;
	uint8_t d[16];
	uint8_t currentrecord;
	uint8_t r[3];
};

void set_result(uint32_t result)
{
	m68k_set_reg(M68K_REG_D0, result);
}

static struct fcb* fcb_at(uint32_t address)
{
	struct fcb* fcb = (struct fcb*) &g_ram[address];

	fcb->filename.drive = 1; /* select always A: drive */

	return fcb;
}

static struct fcb* find_fcb(void)
{
	return fcb_at(m68k_get_reg(NULL, M68K_REG_D1));
}

static void set_current_record(struct fcb* fcb, uint32_t record, uint32_t total)
{
	uint32_t extents = (total >> 7);

	fcb->extent = (uint8_t) (record >> 7) & 0x1f;
	fcb->s2 = (uint8_t) (record >> 12);
	
	if ((record>>7) < extents)
		fcb->recordcount = 128;
	else
		fcb->recordcount = (uint8_t) total & 0x7f;
	fcb->currentrecord = (uint8_t) record & 0x7f;
}

typedef int readwrite_cb(struct file* f, uint8_t* ptr, uint32_t record);

static void read_write_random_file(readwrite_cb* readwrite)
{
	struct fcb* fcb = find_fcb();
	uint32_t record = (fcb->r[0]<<16) + (fcb->r[1]<<8) + fcb->r[2];
	struct file* f = file_open(&fcb->filename);
	int i = readwrite(f, &g_ram[dma], record);
	// set_current_record(fcb, record, file_getrecordcount(f));
	if (i == -1)
		set_result(0xff);
	else if (i == 0)
		set_result(1);
	else
		set_result(0);
}


void bdos_syscall(void)
{
	uint32_t syscall = m68k_get_reg(NULL, M68K_REG_D0) & 0xffff;
	switch (syscall)
	{
		case 0: /* system reset */
			exit(0);

		case 1: /* console input */
		{
			char c = 0;
			(void) read(0, &c, 1);
			if (c == '\n')
				c = '\r';
			m68k_set_reg(M68K_REG_D0, c);
			break;
		}

		case 2: /* console output */
		{
			putchar((char) (m68k_get_reg(NULL, M68K_REG_D1)&0xff));
			break;
		}

		case 9: /* print string */
		{
			uint32_t addr = m68k_get_reg(NULL, M68K_REG_D1);
			char c;
			while ((c = g_ram[addr++]))
			{
				if (c == '$')
					break;
				putchar(c);
			}
			break;
		}

		case 11: /* get console status */
		{
			struct pollfd pollfd = { 0, POLLIN, 0 };
			poll(&pollfd, 1, 0);
			set_result((pollfd.revents & POLLIN) ? 0xff : 0);
			break;
		}

		case 15: /* open file */
		{
			struct fcb* fcb = find_fcb();
			struct file* f = file_open(&fcb->filename);
			if (f)
			{
				// set_current_record(fcb, 0, file_getrecordcount(f));
				set_result(0);
			}
			else
				set_result(0xff);
			break;
		}

		case 16: /* close file */
		{
			struct fcb* fcb = find_fcb();
			struct file* f = file_open(&fcb->filename);
			/*
			if (file_getrecordcount(f) < 128)
				file_setrecordcount(f, fcb->recordcount);
			*/
			int result = file_close(&fcb->filename);
			set_result(result ? 0xff : 0);
			break;
		}

		case 19: /* delete file */
		{
			struct fcb* fcb = find_fcb();
			int result = file_delete(&fcb->filename);
			set_result(result ? 0xff : 0);
			break;
		}

		case 22: /* make file */
		{
			struct fcb* fcb = find_fcb();
			struct file* f = file_create(&fcb->filename);
			if (f)
			{
				// set_current_record(fcb, 0, 0);
				set_result(0);
			}
			else
				set_result(0xff);
			break;
		}

		case 26: /* set dma */
		{
			dma = m68k_get_reg(NULL, M68K_REG_D1);
			break;
		}

		case 33: /* read random */
		{
			read_write_random_file(file_read);
			break;
		}

		case 34: /* write random */
		{
			read_write_random_file(file_write);
			break;
		}

		case 35: /* compute file size */
		{
			struct fcb* fcb = find_fcb();
			struct file* f = file_open(&fcb->filename);

			int length = file_getrecordcount(f);
			fcb->r[0] = (uint8_t) (length>>16);
			fcb->r[1] = (uint8_t) ((length>>8)&0xff);
			fcb->r[2] = (uint8_t) (length&0xff);
			break;
		}

		default:
			exit_error("unimplemented BDOS syscall 0x%x", syscall);
	}
}

