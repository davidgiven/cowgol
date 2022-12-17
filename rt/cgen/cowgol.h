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

#define TRAMPOLINE_STACK_SIZE 128

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
	i2 i2[4];
	i1 i1[8];
	void* ptr;
};

/* Really we should only have 64kB of RAM, but cgen intptr is 8 bytes which
 * quickly gobbles through it (cowlink can't load the entire compiler at
 * once). So, use 256kB. */
static i8 ram[0x400000 / 8];

i8* __lomem = (i8*) ram;
i8* __himem = (i8*) ((i1*)ram + sizeof(ram));
i8* global_argv;


/* A rather thorny bit of logic controls how tail calls operate.
 * Trampoline frames allows for multiple levels of the passto statement.
 * The i1s are mark different states in the execution of the trampoline.
 * There's also a single i1 in each function called 'passer2normalcall'
 * to mark if a passer has called a normal function. It's a relatively
 * expensive system in total, but most of it is only incurred if the
 * passto statement is in use. */
typedef struct {
/*:The function called by the passto statement: */
	void(*destination)(void);
/*1 if a passto statement is in use, 0 otherwise: */
	i1 activated;
/*1 if passto-> trampoline, 0 if normal return->trampoline. */
	i1 passer2tramp;
/*1 if trampoline->function, 0 if function->function */
	i1 tramp2function;
} trampoline_frame;


trampoline_frame tframes[TRAMPOLINE_STACK_SIZE];
trampoline_frame* tframe_ptr = tframes;

/* The trampoline itself. It initializes a new frame, then calls the
 * first destination of the passto chain. Subsequent passto statements
 * in 'dest' return to it. A return statement without the use of TAILCALL
 * in 'dest' breaks out of the loop.*/
void trampoline(void(*dest)(void))
{
	tframe_ptr++;
	tframe_ptr->destination = dest;
	tframe_ptr->passer2tramp = 1;
	tframe_ptr->activated = 1;
	for(;;) {
		if (tframe_ptr->passer2tramp) {
			tframe_ptr->passer2tramp = 0;
			tframe_ptr->tramp2function = 1;
			tframe_ptr->destination();
		} else {
			tframe_ptr--;
			return;
		}
	}	
}

/* The return statement within serves two purposes. First, it acts as a way
 * to return to the trampoline. When the trampoline exits, it acts as
 * a normal return.*/
#define TAILCALL(dest)\
{\
	if (!(tframe_ptr->activated)) {\
		trampoline((dest));\
		if (passer2normalcall)\
			tframe_ptr->activated = 1;\
	} else {\
		tframe_ptr->passer2tramp = 1;\
		tframe_ptr->destination = (dest);\
	}\
	return;\
}


extern void cmain(void);
int main(int argc, const char* argv[])
{
	/* Remember that Cowgol is built for 64-bit systems, so we need
	 * to copy the argv array as we could be running on a 32-bit system. */
	memset(tframe_ptr, 0, sizeof(trampoline_frame));
	global_argv = calloc(argc+1, sizeof(i8));
	for (int i=0; i<argc; i++)
		global_argv[i] = (i8)(intptr_t)argv[i];

    cmain();
    return 0;
}

