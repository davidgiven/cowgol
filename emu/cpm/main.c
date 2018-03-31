#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdarg.h>
#include <getopt.h>
#include "globals.h"

bool flag_enter_debugger = false;
const char* flag_startup_program = NULL;

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
	printf("cpm [<flags>] [command]:\n");
	printf("  -h      this help\n");
	printf("  -d      enter debugger on startup\n");
	exit(1);
}

static void parse_options(int argc, char* const* argv)
{
	for (;;)
	{
		switch(getopt(argc, argv, "hd"))
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
	flag_startup_program = argv[optind];
}

int main(int argc, char* const* argv)
{
	parse_options(argc, argv);

	emulator_init();
	files_init();
	bios_coldboot();
	
	for (;;)
	{
		emulator_run();
	}

	return 0;
}

