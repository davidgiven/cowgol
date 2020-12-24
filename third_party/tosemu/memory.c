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

#include "memory.h"

#include <stdio.h>
#include <stdlib.h>

#include "tossystem.h"
#include "cpu.h"
#include "m68k.h"

/* Memory area linked list head */
static struct _memarea *head = 0;

/* Support functions */
static uint8_t ptr_read(struct _memarea *area, uint32_t address)
{
    return ((uint8_t *)area->ptr)[address - area->base];
}

static void ptr_write(struct _memarea *area, uint32_t address, uint8_t value)
{
    ((uint8_t *)area->ptr)[address - area->base] = value;
}

int add_ptr_memory_area(char *name, uint8_t flags, uint32_t base, uint32_t len, void *ptr)
{
    return add_fnct_memory_area(name, flags, base, len, ptr, ptr_read, ptr_write);
}

int add_fnct_memory_area(char *name, uint8_t flags, uint32_t base, uint32_t len, void *ptr, uint8_t (*read)(struct _memarea*, uint32_t), void (*write)(struct _memarea*, uint32_t, uint8_t))
{
    struct _memarea *area;
    
    /* TODO ensure that we do not have memory area collisions */
    
    area = malloc(sizeof(struct _memarea));
    if (!area) {
        printf("Failed to allocate memory area for 0x%x\n", base);
        return 1;
    }
    
    area->base = base;
    area->len = len;
    area->read = read;
    area->write = write;
    area->ptr = ptr;
    area->flags = flags;
    area->next = head;
    head = area;
        
    return 0;
}

int remove_memory_area(uint32_t base)
{
    struct _memarea *ptr = head;
    struct _memarea *prev = 0;
    
    while (ptr)
    {
        if (ptr->base == base) {
            if (prev)
                prev->next = ptr->next;
            else
                head = ptr->next;
            
            free(ptr);
            return 0;
        }
        
        prev = ptr;
    }
    
    printf("Failed to remove memory area at 0x%x\n", base);
    return 1;
}

void reset_memory()
{
    while (head)
        remove_memory_area(head->base);
}

struct _memarea *find_memarea(uint32_t address)
{
    struct _memarea *area = head;
    
    while(area)
    {
        if (address >= area->base && address < area->base + area->len)
            break;

        area = area->next;
    }
    
    return area;
}

void *tos_mem_to_host_mem(uint32_t address)
{
    struct _memarea *area = find_memarea(address);
    
    if (!area) {
        halt_execution();
        printf("Attempted to get direct access to non-existing memory at 0x%x\n", address);
        return 0;
    }
    
    if (area->write != ptr_write || area->read != ptr_read)
    {
        halt_execution();
        printf("Attempted to get direct access to non-mapped memory at 0x%x\n", address);
        return 0;
    }
    
    return &(((uint8_t *)area->ptr)[address - area->base]);
}


/* These are the real read/write functions */

uint8_t tos_read(uint32_t address)
{
    struct _memarea *area = find_memarea(address);
    uint8_t mask;
    
    if (!area) {
        halt_execution();
        printf("Attempted to read non-existing memory at 0x%x\n", address);
        return 0;
    }
    
    /* Is the CPU in supervisor mode? */
    if (is_supervisor_mode_enabled())
        mask = MEMORY_READ | MEMORY_SUPERREAD;
    else
        mask = MEMORY_READ;
    
    if ((area->flags & mask) != 0)
        return area->read(area, address);
    else {
        halt_execution();
        printf("Attempted to read non-readable memory at 0x%x\n", address);
        return 0;
    }
}

void tos_write(uint32_t address, uint8_t value)
{
    struct _memarea *area = find_memarea(address);
    uint8_t mask;
    
    if (!area) {
        halt_execution();
        printf("Attempted to write to non-existing memory at 0x%x\n", address);
        return;
    }
    
    /* Is the CPU in supervisor mode? */
    if (is_supervisor_mode_enabled())
        mask = MEMORY_WRITE | MEMORY_SUPERWRITE;
    else
        mask = MEMORY_WRITE;
    
    if ((area->flags & mask) != 0)
        area->write(area, address, value);
    else {
        halt_execution();
        printf("Attempted to write to non-writeable memory at 0x%x\n", address);
    }
}

/* These are the read/write functions used by Musashi */

unsigned int  m68k_read_disassembler_8(unsigned int address)
{
    return tos_read(address);
}
unsigned int  m68k_read_disassembler_16(unsigned int address)
{
    unsigned int res = 0;
    int i;
    
    for(i=0; i<2; ++i) {
        res = res << 8;
        res |= tos_read(address+i);
    }
    
    return res;
}
unsigned int  m68k_read_disassembler_32(unsigned int address)
{
    unsigned int res = 0;
    int i;
    
    for(i=0; i<4; ++i) {
        res = res << 8;
        res |= tos_read(address+i);
    }
    
    return res;
}

unsigned int  m68k_read_memory_8(unsigned int address)
{
    return m68k_read_disassembler_8(address);
}
unsigned int  m68k_read_memory_16(unsigned int address)
{
    return m68k_read_disassembler_16(address);
}
unsigned int  m68k_read_memory_32(unsigned int address)
{
    return m68k_read_disassembler_32(address);
}

void m68k_write_memory_8(unsigned int address, unsigned int value)
{
    tos_write(address, value);
}
void m68k_write_memory_16(unsigned int address, unsigned int value)
{
    int i;
    
    for(i=0; i<2; ++i) {
        tos_write(address+1-i, value&0xff);
        value = value >> 8;
    }
}
void m68k_write_memory_32(unsigned int address, unsigned int value)
{
    int i;
    
    for(i=0; i<4; ++i) {
        tos_write(address+3-i, value&0xff);
        value = value >> 8;
    }
}
