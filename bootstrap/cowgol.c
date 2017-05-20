#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <assert.h>
#include "cowgol.h"

static int8_t memory[64*1024];
int8_t* lomem = memory;
int8_t* himem = memory + sizeof(memory);

#define FILE_COUNT 16
static FILE* filetab[FILE_COUNT];

void cowgol_print(void) { fputs(extern_p8, stdout); }
void cowgol_print_char(void) { putchar(extern_i8); }
void cowgol_print_i8(void) { printf("%d", extern_i8); }
void cowgol_print_i16(void) { printf("%d", extern_i16); }
void cowgol_print_hex_i8(void) { printf("%x", extern_i8); }
void cowgol_print_hex_i16(void) { printf("%x", extern_i16); }
void cowgol_print_newline(void) { printf("\n"); }

static int find_fd(FILE* fp) {
    assert(fp);
    for (int i=0; i<FILE_COUNT; i++) {
        if (!filetab[i]) {
            filetab[i] = fp;
            return i;
        }
    }
    abort();
}

void cowgol_file_openin(void) {
    char* filename = extern_p8;
    extern_i8 = find_fd(fopen(filename, "rb"));
}

void cowgol_file_openout(void) {
    char* filename = extern_p8;
    extern_i8 = find_fd(fopen(filename, "wb"));
}

void cowgol_file_openup(void) {
    char* filename = extern_p8;
    extern_i8 = find_fd(fopen(filename, "w+b"));
}

void cowgol_file_getchar(void) {
    extern_i8 = fgetc(filetab[extern_i8]);
}

void cowgol_file_putchar(void) {
    fputc(extern_i8_2, filetab[extern_i8]);
}

void cowgol_file_getblock(void) {
    fread(extern_p8, 1, extern_u32, filetab[extern_i8]);
}

void cowgol_file_putblock(void) {
    fwrite(extern_p8, 1, extern_u32, filetab[extern_i8]);
}

void cowgol_file_seek(void) {
    fseek(filetab[extern_i8], extern_u32, SEEK_SET);
}

void cowgol_file_tell(void) {
    extern_u32 = ftell(filetab[extern_i8]);
}

void cowgol_file_ext(void) {
    FILE* fp = filetab[extern_i8];
    long old = ftell(fp);
    fseek(fp, 0, SEEK_END);
    extern_u32 = ftell(fp);
    fseek(fp, old, SEEK_SET);
}

void cowgol_file_close(void) {
    fclose(filetab[extern_i8]);
    filetab[extern_i8] = NULL;
}

void cowgol_exit(void) {
    exit(extern_i8);
}

int main(int argc, const char* argv[]) {
    compiled_main();
    return 0;
}
