#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include "cowgol.h"

static int8_t memory[64*1024];
int8_t* lomem = memory;
int8_t* himem = memory + sizeof(memory);

void cowgol_print(void) { fputs(extern_p8, stdout); }
void cowgol_print_char(void) { putchar(extern_i8); }
void cowgol_print_i8(void) { printf("%d", extern_i8); }
void cowgol_print_i16(void) { printf("%d", extern_i16); }
void cowgol_print_hex_i8(void) { printf("%x", extern_i8); }
void cowgol_print_hex_i16(void) { printf("%x", extern_i16); }
void cowgol_print_newline(void) { printf("\n"); }

int main(int argc, const char* argv[]) {
    compiled_main();
}
