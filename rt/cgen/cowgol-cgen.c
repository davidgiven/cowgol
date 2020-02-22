#include "cowgol-cgen.h"

static i1 ram[0x10000];

i8* __top = (i8*) ram;
i8* __himem = (i8*) (ram + sizeof(ram));

extern void cmain(void);
int main(int argc, const char* argv[])
{
    cmain();
    return 0;
}
