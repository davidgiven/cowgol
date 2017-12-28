#define _XOPEN_SOURCE 500
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <glob.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "globals.h"

#define FBASE 0xff80
#define CBASE (FBASE - (7*1024))
#define BDOS_ENTRY FBASE
#define BIOS_ENTRY (FBASE+1)
#define BIOS_SYSCALL(n) (BIOS_ENTRY + (n)*3)
#define CBIOS_SYSCALLS 22

static uint16_t dma;

struct fcb
{
	uint8_t drive;
	uint8_t name[8];
	uint8_t extension[3];
	uint8_t extent;
	uint8_t s1;
	uint8_t s2;
	uint8_t recordcount;
	uint8_t d[16];
	uint8_t currentrecord;
	uint8_t r[3];
};

static uint16_t get_de(void)
{
	return z80ex_get_reg(z80, regDE);
}

static uint8_t get_c(void)
{
	return z80ex_get_reg(z80, regBC);
}

static uint8_t get_e(void)
{
	return z80ex_get_reg(z80, regDE);
}

static void set_a(uint8_t a)
{
	uint16_t af = z80ex_get_reg(z80, regAF);
	af &= 0x00ff;
	af |= a << 8;
	z80ex_set_reg(z80, regAF, af);
}
	
static void set_result(uint16_t result)
{
	z80ex_set_reg(z80, regHL, result);

	uint16_t af = z80ex_get_reg(z80, regAF);
	af &= 0x00ff & ~(1<<6) & ~(1<<7);
	af |= result << 8;
	if (!result)
		af |= 1<<6;
	if (result & 0x80)
		af |= 1<<7;
	z80ex_set_reg(z80, regAF, af);

	uint16_t bc = z80ex_get_reg(z80, regBC);
	bc &= 0x00ff;
	bc |= result & 0xff00;
	z80ex_set_reg(z80, regBC, bc);
}

void bios_coldboot(void)
{
	memcpy(&ram[FBASE], bdos_data, bdos_len);
	z80ex_set_reg(z80, regPC, FBASE);
}

static void bios_warmboot(void)
{
	dma = 0x0080;

	memcpy(&ram[CBASE], ccp_data, ccp_len);
	z80ex_set_reg(z80, regPC, CBASE);
}

void bdos_readline(void)
{
	fflush(stdout);

	uint16_t de = z80ex_get_reg(z80, regDE);
	uint8_t maxcount = ram[de+0];
	int count = read(0, &ram[de+2], maxcount);
	if ((count > 0) && (ram[de+2+count-1] == '\n'))
		count--;
	ram[de+1] = count;
	set_result(count);
}

static struct fcb* find_fcb(void)
{
	uint16_t de = z80ex_get_reg(z80, regDE);
	struct fcb* fcb = (struct fcb*) &ram[de];

	uint8_t* p = &fcb->d[0];
	for (int i=0; i<8; i++)
	{
		uint8_t c = fcb->name[i];
		if (c != ' ')
			*p++ = tolower(c);
	}
	*p++ = '.';
	for (int i=0; i<3; i++)
	{
		uint8_t c = fcb->extension[i];
		if (c != ' ')
			*p++ = tolower(c);
	}
	*p++ = 0;

	return fcb;
}

static void open_fcb(struct fcb* fcb, int flags)
{
	glob_t globdata;
	if (glob(fcb->d, 0, NULL, &globdata) == 0)
	{
		strncpy(fcb->d, globdata.gl_pathv[0], sizeof(fcb->d));
		if (fcb->d[sizeof(fcb->d)-1] != 0)
			fatal("filename '%s' too long", globdata.gl_pathv[0]);
		if (flags == 0)
			fcb->s1 = 0;
		else
		{
			fcb->s1 = open(fcb->d, flags);
			if (fcb->s1 == 0xff)
				fcb->s1 = 0;
		}
	}
	else
		fcb->s1 = 0;
	globfree(&globdata);
}

static void bdos_openfile(void)
{
	struct fcb* fcb = find_fcb();
	open_fcb(fcb, O_RDWR);
	set_result((fcb->s1 == 0) ? 0xff : 0);
}

static void bdos_deletefile(void)
{
	uint16_t result = 0xff;
	struct fcb* fcb = find_fcb();
	glob_t globdata;
	if (glob(fcb->d, 0, NULL, &globdata) == 0)
	{
		for (int i=0; i<globdata.gl_pathc; i++)
		{
			printf("deleting %s\n", globdata.gl_pathv[i]);
			result = 0;
		}
	}
	globfree(&globdata);
	set_result(result);
}

static void bdos_readsequential(void)
{
	struct fcb* fcb = find_fcb();
	if (fcb->s1 == 0)
		fatal("file '%11s' not open", fcb->name);

	if (fcb->extent != 0)
		fatal("bad extent");

	memset(&ram[dma], 0, 128);
	int i = pread(fcb->s1, &ram[dma], 128, fcb->currentrecord*128);
	if (i == -1)
		set_result(0xff);
	else if (i == 0)
		set_result(1);
	else
		set_result(0);
	fcb->currentrecord++;
}

static void bdos_getsetuser(void)
{
	if (get_e() == 0xff)
		set_result(0);
}

static void bdos_entry(uint8_t bdos_call)
{
	switch (bdos_call)
	{
		case  2: putchar(get_e());      return;
		case 10: bdos_readline();       return;
		case 12: set_result(0x0022);    return; // get CP/M version
		case 13: set_result(0);         return; // reset disk system
		case 14: set_result(0);         return; // select disk
		case 15: bdos_openfile();       return;
		case 19: bdos_deletefile();     return;
		case 20: bdos_readsequential(); return;
		case 25: set_result(0);         return; // get current disk
		case 26: dma = get_de();        return; // set DMA
		case 32: bdos_getsetuser();     return;
	}

	fatal("unimplemented bdos entry %d", bdos_call);
}

static void bios_getchar(void)
{
	int c = getchar();
	if (c == '\n')
		c = '\r';
	set_a(c);
}

static void bios_entry(uint8_t bios_call)
{
	switch (bios_call)
	{
		case 0: bios_coldboot();  return;
		case 1: bios_warmboot();  return;
		case 2: set_a(0);         return; // const
		case 3: bios_getchar();   return; // conin
		case 4: putchar(get_c()); return; // conout
	}

	fatal("unimplemented bios entry %d", bios_call);
}

void biosbdos_entry(int syscall)
{
	if (syscall == 0xff)
		bdos_entry(z80ex_get_reg(z80, regBC));
	else
		bios_entry(syscall);
}

