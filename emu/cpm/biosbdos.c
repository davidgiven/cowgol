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
#include <poll.h>
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

static void bios_getchar(void);

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

static uint8_t get_a(void)
{
	return z80ex_get_reg(z80, regAF) >> 8;
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

static void bios_const(void)
{
	struct pollfd pollfd = { 0, POLLIN, 0 };
	poll(&pollfd, 1, 0);
	set_a((pollfd.revents & POLLIN) ? 0xff : 0);
}

static void bios_getchar(void)
{
	char c = 0;
	(void) read(0, &c, 1);
	if (c == '\n')
		c = '\r';
	set_a(c);
}

static void bios_putchar(void)
{
	char c = get_c();
	(void) write(1, &c, 1);
}

static void bios_entry(uint8_t bios_call)
{
	switch (bios_call)
	{
		case 0: bios_coldboot();  return;
		case 1: bios_warmboot();  return;
		case 2: bios_const();     return; // const
		case 3: bios_getchar();   return; // conin
		case 4: bios_putchar();   return; // conout
	}

	showregs();
	fatal("unimplemented bios entry %d", bios_call);
}

static void bdos_putchar(void)
{
	uint8_t c = get_e();
	(void) write(1, &c, 1);
}

static void bdos_consoleio(void)
{
	uint8_t c = get_e();
	if (c == 0xff)
	{
		bios_const();
		if (get_a() == 0xff)
			bios_getchar();
	}
	else
		bdos_putchar();
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

static void bdos_makefile(void)
{
	struct fcb* fcb = find_fcb();
	if (fcb->s1)
		set_result(0xff);
	else
	{
		fcb->s1 = open(fcb->d, O_RDWR|O_CREAT, 0666);
		set_result((fcb->s1 == 0xff) ? 0xff : 0);
	}
}

static void bdos_closefile(void)
{
	struct fcb* fcb = find_fcb();
	if (fcb->s1)
	{
		close(fcb->s1);
		set_result(0);
	}
	else
		set_result(0xff);
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
			unlink(globdata.gl_pathv[i]);
			result = 0;
		}
	}
	globfree(&globdata);
	set_result(result);
}

typedef ssize_t readwrite_cb(int fd, void* ptr, size_t size, off_t offset);

static void bdos_readwritesequential(readwrite_cb* readwrite)
{
	struct fcb* fcb = find_fcb();
	if (fcb->s1 == 0)
		fatal("file '%11s' not open", fcb->name);

	if (fcb->extent != 0)
		fatal("bad extent");

	int i = readwrite(fcb->s1, &ram[dma], 128, fcb->currentrecord*128);
	if (i == -1)
		set_result(0xff);
	else if (i == 0)
		set_result(1);
	else
		set_result(0);
	fcb->currentrecord++;
}

static void bdos_readwriterandom(readwrite_cb* readwrite)
{
	struct fcb* fcb = find_fcb();
	if (fcb->s1 == 0)
		fatal("file '%11s' not open", fcb->name);

	off_t record = fcb->r[0] + (fcb->r[1]<<8);

	int i = readwrite(fcb->s1, &ram[dma], 128, record*128);
	if (i == -1)
		set_result(0xff);
	else if (i == 0)
		set_result(1);
	else
		set_result(0);
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
		case  2: bdos_putchar();     return;
		case  6: bdos_consoleio();   return;
		case 10: bdos_readline();    return;
		case 12: set_result(0x0022); return; // get CP/M version
		case 13: set_result(0);      return; // reset disk system
		case 14: set_result(0);      return; // select disk
		case 15: bdos_openfile();    return;
		case 16: bdos_closefile();   return;
		case 19: bdos_deletefile();  return;
		case 20: bdos_readwritesequential((readwrite_cb*) pread);  return;
		case 21: bdos_readwritesequential((readwrite_cb*) pwrite); return;
		case 22: bdos_makefile();    return;
		case 25: set_result(0);      return; // get current disk
		case 26: dma = get_de();     return; // set DMA
		case 32: bdos_getsetuser();  return;
		case 33: bdos_readwriterandom((readwrite_cb*) pread);  return;
		case 34: bdos_readwriterandom((readwrite_cb*) pwrite); return;
		case 40: bdos_readwriterandom((readwrite_cb*) pwrite); return;
		case 45:                     return; // set hardware error action
	}

	showregs();
	fatal("unimplemented bdos entry %d", bdos_call);
}

void biosbdos_entry(int syscall)
{
	if (syscall == 0xff)
		bdos_entry(z80ex_get_reg(z80, regBC));
	else
		bios_entry(syscall);
}

