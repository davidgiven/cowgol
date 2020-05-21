#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <endian.h>

#if BYTE_ORDER == BIG_ENDIAN
#error "Sorry, cowgol cgen doesn't work on big endian machines yet."
#endif

typedef uint8_t i1;
typedef uint16_t i2;
typedef uint32_t i4;
typedef uint64_t i8;

typedef int8_t s1;
typedef int16_t s2;
typedef int32_t s4;
typedef int64_t s8;

extern i8* __top;
extern i8* __himem;
extern i8* global_argv;

typedef union data data;
union data
{
	i8 i8;
	i4 i4[2];
	void* ptr;
};

/* Really we should only have 64kB of RAM, but cgen intptr is 8 bytes which
 * quickly gobbles through it (cowlink can't load the entire compiler at
 * once). So, use 256kB. */
static i8 ram[0x400000 / 8];

i8* __lomem = (i8*) ram;
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

