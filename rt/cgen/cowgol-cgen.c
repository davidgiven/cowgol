#include "cowgol-cgen.h"

static i8 ram[0x10000 / 8];

i8* __top = (i8*) ram;
i8* __himem = (i8*) ((i1*)ram + sizeof(ram));
i8* global_argv;

extern void cmain(void);
int main(int argc, const char* argv[])
{
	/* Remember that Cowgol is built for 64-bit systems, so we need
	 * to copy the argv array as we could be running on a 32-bit system. */

	global_argv = calloc(argc+1, 8);
	for (int i=0; i<argc; i++)
		global_argv[i] = (i8)(intptr_t)argv[i];

    cmain();
    return 0;
}
