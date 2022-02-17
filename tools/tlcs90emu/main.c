#define _XOPEN_SOURCE
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdarg.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "tlcs90.h"

static uint8_t ram[0x10000];

uint8_t RM8(uint32_t address)
{
	return ram[address];
}

void WM8(uint32_t address, uint8_t value)
{
	ram[address] = value;
}

uint16_t read16(uint16_t address)
{
	return (uint16_t)ram[address+0]
		| ((uint16_t)ram[address+1] << 8);
}

uint32_t read32(uint16_t address)
{
	return (uint32_t)ram[address+0]
		| ((uint32_t)ram[address+1] << 8)
		| ((uint32_t)ram[address+2] << 16)
		| ((uint32_t)ram[address+3] << 24);
}

void write32(uint16_t address, uint32_t value)
{
	ram[address+0] = value;
	ram[address+1] = value >> 8;
	ram[address+2] = value >> 16;
	ram[address+3] = value >> 24;
}

void fatal(const char* message, ...)
{
	va_list ap;
	va_start(ap, message);
	fprintf(stderr, "Fatal: ");
	vfprintf(stderr, message, ap);
	fprintf(stderr, "\n");
	va_end(ap);
	exit(1);
}

int main(int argc, char* const argv[])
{
	uint16_t load_address = 0x0100;
	uint16_t exec_address = load_address;

	memset(ram, 0x55, sizeof(ram));

	for (;;)
	{
		int opt = getopt(argc, argv, "l:e:f:");
		switch (opt)
		{
			case -1:
				goto end_of_opts;

			case 'l':
				load_address = strtoul(optarg, NULL, 0);
				break;

			case 'e':
				exec_address = strtoul(optarg, NULL, 0);
				break;

			case 'f':
			{
				int fd = open(optarg, O_RDONLY);
				if (read(fd, ram+load_address, 0x10000-load_address) == -1)
				{
					perror("failed to read file");
					exit(1);
				}
				close(fd);
				break;
			}
		}
	}
end_of_opts:
	if (optind < argc)
	{
		printf("error: non-option arguments received\n");
		exit(1);
	}

	tlcs90_init();
	w16(REG_PC, exec_address);
	for (;;)
		tlcs90_step();
}

