#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdarg.h>
#include "globals.h"

void fatal(const char* message, ...)
{
	va_list ap;
	va_start(ap, message);
	fprintf(stderr, "fatal: ");
	vfprintf(stderr, message, ap);
	fprintf(stderr, "\n");
	exit(1);
}

int main(int argc, const char* argv[])
{
	emulator_init();
	bios_coldboot();
	
	for (;;)
	{
		emulator_run();
	}

	return 0;
}

