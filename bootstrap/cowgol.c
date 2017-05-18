#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include "cowgol.h"

void global_printn(void) {
    printf("%d", global_printn_c);
}

void global_newline(void) {
    printf("\n");
}

int main(int argc, const char* argv[]) {
    global_main();
}
