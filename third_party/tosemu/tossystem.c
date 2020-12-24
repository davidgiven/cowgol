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
#include "tossystem.h"

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <inttypes.h>

#include "memory.h"
#include "utils.h"
#include "gemdos.h"
#include "xbios.h"
#include "bios.h"

#include "m68k.h"

/* Basepage, as defined here:
 * http://www.yardley.cc/atari/compendium/atari-compendium-chapter-2-GEMDOS.htm#gdprocess
 * 
 * bigendian
 */
#pragma pack(push,2)
struct basepage {
    uint32_t p_lowtpa;
    uint32_t p_hitpa;
    uint32_t p_tbase, p_tlen;
    uint32_t p_dbase, p_dlen;
    uint32_t p_bbase, p_blen;
    uint32_t p_dta;
    uint32_t p_parent;
    uint32_t p_reserved;
    uint32_t p_env;
    uint8_t p_undef[80];
    uint8_t p_cmdlin[128];
};
#pragma pack(pop)

/* Header of executable, as defined here: 
 * http://www.yardley.cc/atari/compendium/atari-compendium-chapter-2-GEMDOS.htm#gdprocess 
 * 
 * big endian
 */
#pragma pack(push,2)
struct exec_header {
    uint16_t magic;
    uint32_t tsize, 
             dsize, 
             bsize, 
             ssize;
    uint32_t res;
    uint32_t flags;
    uint16_t absflag;
};
#pragma pack(pop)

#define SUPERMEMSIZE (512)

int keepongoing;

static void copy_cmdlin(char *dest, int argc, char **argv)
{
    char *start = dest;
    int i, n = 0;

    for (i = 0; i < argc; i++)
    {
        dest[n] = ' ';
        n++;
        strcpy(dest+n, argv[i]);
        n += strlen(argv[i]);
    }

    *start = n-1;
}

int init_tos_environment(struct tos_environment *te, void *binary, uint64_t size,
                         int argc, char **argv)
{
    struct exec_header *header;
    uint8_t *ptr = 0;
    uint32_t *ptr32 = 0;
    uint32_t adr = 0;
    char *path;
    
    /* Ensure that binary is large enough to hold a header */
    if (size < sizeof(struct exec_header))
    {
        printf("Error: Too small binary\n");
        return -1;
    }
    
    /* Setup "static" data areas */
    te->staticmem0 = malloc(0x200);       /* 0x0 - 0x1ff */
    te->staticmem1 = malloc(0x600-0x380); /* 0x380 - 0x5ff */
    
    /* Create supervisor memory for a stack */
    te->supermem = malloc(SUPERMEMSIZE);
    
    /* Setup a maximum size user RAM */
    te->size = 0xF9FFFF -0x000900;
    te->appmem = malloc(te->size);
    
    /* Copy segment sizes from header */
    header = (struct exec_header*)binary;
    te->tsize = endianize_32(header->tsize);
    te->dsize = endianize_32(header->dsize); 
    te->bsize = endianize_32(header->bsize); 
    te->ssize = endianize_32(header->ssize);
    
    /* Copy segments into app memory */
    memcpy(te->appmem, ((uint8_t*)binary) + sizeof(struct exec_header), te->tsize + te->dsize + te->ssize);
        
    /* Allocate basepage */
    te->bp = malloc(sizeof(struct basepage));
    
    /* Prepare basepage according to memory map from ATARI ST/STE Hårdfakta, page 290
     * 
     * Accessible from user mode
     * 
     * 0xFFFFFF - 0xFF8000 I/O-AREA
     * 0xFEFFFF - 0xFC0000 OS ROM
     * 0xFBFFFF - 0xFA0000 CARTRIDGE ROM
     * 0x0FFFFF - 0x000800 USER RAM
     * 0x0007FF - 0x000000 OS RAM
     * 
     * Lay out data like this in USER RAM:
     * 
     * High addresses     HEAP
     * 
     *                   STACK
     * 
     *                    BSS
     * 
     *                    DATA
     * 
     *                    TEXT
     * 
     * Low addresses       BP
     *
     */

    memset(te->bp, 0, sizeof(struct basepage));
    te->bp->p_lowtpa = endianize_32(0x000800);
    te->bp->p_hitpa = endianize_32(te->size + 0x900);
    te->bp->p_tbase = endianize_32(0x000900);
    te->bp->p_tlen = endianize_32(te->tsize);
    te->bp->p_dbase = endianize_32(endianize_32(te->bp->p_tbase) + endianize_32(te->bp->p_tlen));
    te->bp->p_dlen = endianize_32(te->dsize);
    te->bp->p_bbase = endianize_32(endianize_32(te->bp->p_dbase) + endianize_32(te->bp->p_dlen));
    te->bp->p_blen = endianize_32(te->bsize);
    /* TODO, Disk Transfer Address, http://www.yardley.cc/atarsi/compendium/atari-compendium-chapter-2-GEMDOS.htm#filesystem
     * te->bp->p_dta; */
    te->bp->p_parent = 0;
    te->bp->p_env = endianize_32(0x000830); /* TODO, this is cheating, pointing at the undefined, zeroed, memory */
    te->bp->p_dta = 0x800 + offsetof(struct basepage, p_cmdlin);
    copy_cmdlin((void *)te->bp->p_cmdlin, argc, argv);
        
    reset_memory();
    add_ptr_memory_area("staticmem0", MEMORY_READWRITE | MEMORY_SUPERWRITE, 0x0, 0x1ff, te->staticmem0);
    add_fnct_memory_area("magicmem0", MEMORY_SUPERREAD, 0x200, 0x2, 0, magic_xbios_supexec_read, magic_xbios_supexec_write);
    add_ptr_memory_area("staticmem1", MEMORY_SUPERREAD | MEMORY_SUPERWRITE, 0x380, 0x600-0x380, te->staticmem1); /* TODO this will probably have to be read using a custom function */
    add_ptr_memory_area("basepage", MEMORY_READWRITE, 0x800, 0x100, te->bp);
    add_ptr_memory_area("userram", MEMORY_READWRITE, 0x900, te->size, te->appmem);
    add_ptr_memory_area("superram", MEMORY_SUPERREAD | MEMORY_SUPERWRITE, 0x600, SUPERMEMSIZE, te->supermem);
    
    /* Relocating the loaded binary, must take place after the "userram" has 
    * been registered, as it takes place in the memory of the tos machine */
    if (!header->absflag) {
        /* Move ptr to the start of the relocation data */
        ptr = binary;                       /* start of file contents */
        ptr += sizeof(struct exec_header);  /* skip header */
        ptr += te->tsize;                   /* skip text segment */
        ptr += te->dsize;                   /* skip data segment */
        ptr += te->ssize;                   /* skip symbol table */
        ptr32 = (uint32_t*)ptr;             /* address of initial offet */
        ptr += 4;                           /* skip to start of relocation table */
        /* first relocation address in the tos memory space */
        adr = 0x900 + endianize_32(*ptr32);
        
        if (adr != 0x900) {
            m68k_write_memory_32(adr, m68k_read_memory_32(adr) + 0x900);
            while(*ptr)
            {
                switch(*ptr)
                {
                case 0:
                    break;
                case 1:
                    adr += 0xfe;
                    ptr ++;
                    break;
                default:
                    adr += *ptr;
                    ptr ++;
                    m68k_write_memory_32(adr, m68k_read_memory_32(adr) + 0x900);

                    break;
                }
            }
        }
    }

    path = getenv("TOS_BASE_PATH");
    if (path == NULL)
        te->base_path = "";
    else
    {
        int n = strlen(path);
        te->base_path = malloc(n + 2);
        if (te->base_path == NULL)
        {
            exit(1);
        }
        strcpy(te->base_path, path);
        te->base_path[n] = '/';
        te->base_path[n+1] = 0;
    }
    
    /* TODO Move into CPU initialization */
    keepongoing = 1;

    /* Initialize sub-systems */
    gemdos_init(te);
    /* TODO initialization other sub-systems here as well */
    
    return 0;
}

void free_tos_environment(struct tos_environment *te)
{
    /* Clean up sub-systems */
    gemdos_free();
    /* TODO clean up after other sub-systems here as well */

    free(te->bp);
    te->bp = 0;
    
    free(te->appmem);
    te->appmem = 0;
    
    free(te->supermem);
    te->supermem = 0;
    
    reset_memory();
}

/* Invoked upon trap instructions */

void m68k_trap(unsigned int vector)
{
    switch(vector)
    {
        case 0x21: /* trap #$1, GEMDOS */
            gemdos_trap();
            break;
        case 0x22: /* trap #$2, AES / VDI */
            halt_execution();
            printf("AES / VDI not yet implemented\n");
            break;
        case 0x2d: /* trap #$d, BIOS */
            bios_trap();
            break;
        case 0x2e: /* trap #$e, XBIOS */
            xbios_trap();
            break;
        default:
            halt_execution();
            printf("Invoked unsupported trap 0x%x, this should never happen!\n", vector);
            break;
    }
}

void halt_execution()
{
    keepongoing = 0;
}
