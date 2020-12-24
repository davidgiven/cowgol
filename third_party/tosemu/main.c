/*
 * TOSEMU - an emulated environment for TOS applications
 * Copyright (C) 2014 Johan Thelin <e8johan@gmail.com>
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <sys/mman.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#include "cpu.h"
#include "m68k.h"

#include "tossystem.h"

int verbose;

void cpu_instr_callback()
{
    static char buff[100];
    static unsigned int pc;

    if (verbose)
    {
        pc = m68k_get_reg(NULL, M68K_REG_PC);
        m68k_disassemble(buff, pc, M68K_CPU_TYPE_68000);
        printf("E %03x: %s\n", pc, buff);
#if 0 /* Dump all regs */
        printf("    D0       D1       D2       D3       D4       D5       D6       D7\n");
        printf("    %08x %08x %08x %08x %08x %08x %08x %08x\n"
            , m68k_get_reg(0, M68K_REG_D0)
            , m68k_get_reg(0, M68K_REG_D1)
            , m68k_get_reg(0, M68K_REG_D2)
            , m68k_get_reg(0, M68K_REG_D3)
            , m68k_get_reg(0, M68K_REG_D4)
            , m68k_get_reg(0, M68K_REG_D5)
            , m68k_get_reg(0, M68K_REG_D6)
            , m68k_get_reg(0, M68K_REG_D7));
        printf("    A0       A1       A2       A3       A4       A5       A6       A7\n");
        printf("    %08x %08x %08x %08x %08x %08x %08x %08x\n"
            , m68k_get_reg(0, M68K_REG_A0)
            , m68k_get_reg(0, M68K_REG_A1)
            , m68k_get_reg(0, M68K_REG_A2)
            , m68k_get_reg(0, M68K_REG_A3)
            , m68k_get_reg(0, M68K_REG_A4)
            , m68k_get_reg(0, M68K_REG_A5)
            , m68k_get_reg(0, M68K_REG_A6)
            , m68k_get_reg(0, M68K_REG_A7));
#endif
        fflush(stdout);
    }
}

extern int keepongoing;
    
int main(int argc, char **argv)
{
    int binary_file;
    void *binary_data;
    struct stat sb;
    struct tos_environment te;
    int argb = 1;
    
    verbose = 0;
    
    /* Program usage */
    if (argc < 2)
    {
        printf("Usage: tosemu [-v] <binary> [<args>]\n\n\t<binary> name of binary to execute\n");
        return -1;
    }
    
    /* Check if we want to be verbose */
    if (argc >= 3 && strcmp("-v", argv[1]) == 0)
    {
        verbose = -1;
        argb++;
    }

    /* Open the provided file */
    binary_file = open(argv[argb], O_RDONLY);
    if (binary_file == -1)
    {
        printf("Error: failed to open '%s'\n", argv[argb]);
        return -1;
    }
    
    /* Determine the file size */
    fstat(binary_file, &sb);
    
    /* Mmap the file into memory */
    binary_data = mmap(NULL, sb.st_size, PROT_READ | PROT_WRITE, MAP_PRIVATE, binary_file, 0);
    if (!binary_data)
    {
        printf("Error: failed to mmap '%s'\n", argv[argb]);
        close(binary_file);
        return -1;
    }
    
    /* Check that the binary starts with the magix 0x601a sequence */
    if( ((char*)binary_data)[0] != 0x60 || ((char*)binary_data)[1] != 0x1a)
    {
        printf("Error: invalid magic in '%s'\n", argv[argb]);
        close(binary_file);
        return -1;
    }
    
    argb++;
    argv += argb;
    argc -= argb;

    /* Setup a TOS environment for the binary */
    if (init_tos_environment(&te, binary_data, sb.st_size, argc, argv))
    {
        printf("Error: failed to initialize TOS environment\n");
        close(binary_file);
        return -1;
    }
    
    /* Close the binary file */
    close(binary_file);

    /* Start execution */

    /* TODO init cpu */
    m68k_init();
    m68k_set_cpu_type(M68K_CPU_TYPE_68000);
    m68k_pulse_reset();

    /* TODO is this really correct, or should it be the MSP? If so, why does that not work? */
    m68k_set_reg(M68K_REG_ISP, 0x600); /* supervisor stack pointer */
    m68k_set_reg(M68K_REG_USP, te.size-4); /* user stack pointer */
    m68k_write_memory_32(te.size, 0x800); /* big endian 0x800 */
    m68k_set_reg(M68K_REG_PC, 0x900); /* Set PC to the binary entry point */
    disable_supervisor_mode();
    
    /* TODO exec */
    while (keepongoing) {
        m68k_execute(1);
    }
  
    /* Clean up */
    free_tos_environment(&te);
    
    return 0; 
}
