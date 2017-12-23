#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdarg.h>
#include "globals.h"

Z80EX_CONTEXT* z80;
uint8_t ram[0x10000];

void fatal(const char* message, ...)
{
	va_list ap;
	va_start(ap, message);
	fprintf(stderr, "fatal: ");
	vfprintf(stderr, message, ap);
	fprintf(stderr, "\n");
	exit(1);
}

static uint8_t read_cb(Z80EX_CONTEXT* z80, uint16_t addr, int m1_state, void* data)
{
	return ram[addr];
}

static void write_cb(Z80EX_CONTEXT* z80, uint16_t addr, uint8_t value, void* data)
{
	ram[addr] = value;
}

static uint8_t ioread_cb(Z80EX_CONTEXT* z80, uint16_t addr, void* data)
{
	return 0;
}

static void iowrite_cb(Z80EX_CONTEXT* z80, uint16_t addr, uint8_t value, void* data)
{
}

static uint8_t irqread_cb(Z80EX_CONTEXT* z80, void* user)
{
	return 0;
}

int main(int argc, const char* argv[])
{
	z80 = z80ex_create(
		read_cb, NULL,
		write_cb, NULL,
		ioread_cb, NULL,
		iowrite_cb, NULL,
		irqread_cb, NULL);

	bios_coldboot();
	
	for (;;)
	{
		z80ex_step(z80);

		if (z80ex_get_reg(z80, regPC) >= 0xff00)
			biosbdos_entry();
	}

	z80ex_destroy(z80);
	return 0;
}

