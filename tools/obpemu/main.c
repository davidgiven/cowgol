#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdarg.h>
#include <getopt.h>
#include <ctype.h>
#include "globals.h"

bool flag_enter_debugger = false;
static const char* binary_filename;

void fatal(const char* message, ...)
{
	va_list ap;
	va_start(ap, message);
	fprintf(stderr, "fatal: ");
	vfprintf(stderr, message, ap);
	fprintf(stderr, "\n");
	exit(1);
}

static void syntax(void)
{
	printf("oao3emu [<flags>] [binary.img]:\n");
	printf("  -h             this help\n");
	printf("  -d             enter debugger on startup\n");
	exit(1);
}

static void parse_options(int argc, char* const* argv)
{
	for (;;)
	{
		switch (getopt(argc, argv, "hd"))
		{
			case -1:
				goto end_of_flags;

			case 'd':
				flag_enter_debugger = true;
				break;

			default:
				syntax();
		}
	}

end_of_flags:
	binary_filename = argv[optind];
	if (!binary_filename || argv[optind+1])
		syntax();
}

int main(int argc, char* const* argv)
{
	parse_options(argc, argv);

	emulator_init(binary_filename);
	for (;;)
		emulator_run();

	return 0;
}


