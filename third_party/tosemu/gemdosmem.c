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

#include "gemdosmem_p.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "cpu.h"

#include "gemdos_p.h"

/* Memory management functions ***********************************************/

/* The memory areas are stored in a sorted order by base */
struct mem_area;
struct mem_area {
    uint32_t base, len;
    struct mem_area *next;
};
struct mem_area *mem_list;
static uint32_t mem_allocatable_top;

static struct mem_area * find_mem_area(uint32_t base, struct mem_area **prevptr)
{
    struct mem_area *ptr = mem_list;
    if (prevptr)
        *prevptr = 0;
    while (ptr)
    {
        if (ptr->base == base)
            break;
        if (prevptr)
            *prevptr = ptr;
        ptr = ptr->next;
    }
    
    return ptr;
}

uint32_t GEMDOS_Mshrink()
{
    struct mem_area *ma;
    
    uint32_t newsiz = peek_u32(8);
    uint32_t block = peek_u32(4);
    
    FUNC_TRACE_ENTER_ARGS {
        printf("    ns: 0x%x, b: 0x%x\n", newsiz, block);
    }
    
    ma = find_mem_area(block, 0);
    if (!ma)
        return GEMDOS_EIMBA;
    if (ma->len < newsiz)
        return GEMDOS_EGSBF;
    
    ma->len = newsiz;

    return 0;
}

uint32_t GEMDOS_Malloc()
{
    /* This is the tricky mem function, stay safe if changing it.
     * 
     * - Managed memory starts from 0x800 to mem_allocatable_top.
     * - Memory between 0x800 - 0x900 cannot be deallocated [1].
     * - Memory can be allocated from 0x900 to the end of managed memory.
     * - mem_area structures are sorted by base address and never overlap.
     * 
     *  [1] Mfree and Mshrink does not care.
     * 
     * The algorithm works like this:
     * 
     * - Iterate current mem_area structures, look for gaps of the right size.
     * - If no gaps, look for space at the end of allocated memory.
     * - When memory is found:
     *   - Create a new mem_area
     *   - Insert in the correct place in the mem_list linked mem_list
     *   - Return new base
     * - Else:
     *   - Return error
     * 
     * TODO room for improvement, to avoid fragmentation, use the smallest gap
     *      suitable when allocating, right now the first suitable gap is used.
     */
    
    struct mem_area *prev, *ptr, *n;
    uint32_t prev_top, max_free;
    
    int32_t newsiz = peek_s32(2);
    
    if (newsiz == -1)
    {
        /* Simply locate largest gap */
        
        max_free = 0;

        prev = mem_list;
        if (prev)
            ptr = mem_list->next;
        else
            ptr = 0;
        
        while (ptr)
        {
            prev_top = prev->base + prev->len;
            if (max_free < ptr->base - prev_top)
                max_free = ptr->base - prev_top;

            prev = ptr;
            ptr = ptr->next;
        }
        
        /* Look at the gap at the end */
        if (prev)
            prev_top = prev->base + prev->len;
        else
            prev_top = 0x900;
        
        if (max_free < mem_allocatable_top - prev_top)
            max_free = mem_allocatable_top - prev_top;
        
        return max_free;
    }
    else
    {    
        prev = mem_list;
        if (prev)
            ptr = mem_list->next;
        else
            ptr = 0;
        
        while (ptr)
        {
            prev_top = prev->base + prev->len;
            if (ptr->base - prev_top > newsiz)
            {
                /* Large enough gap found */
                
                /* Allocate new area */
                n = malloc(sizeof(struct mem_area));
                memset(n, 0, sizeof(struct mem_area));
                
                /* Set base and len */
                n->base = prev_top;
                n->len = newsiz;
                
                /* Insert into list */
                n->next = ptr;
                prev->next = n;
                
                /* Return new base */
                return n->base;
            }
            
            prev = ptr;
            ptr = ptr->next;
        }
        
        if (prev)
            prev_top = prev->base + prev->len;
        else
            prev_top = 0x900;
        
        if (newsiz < mem_allocatable_top - prev_top)
        {
            /* Large enough gap found at the end (which can be the start) */
            
            /* Allocate new area */
            n = malloc(sizeof(struct mem_area));
            memset(n, 0, sizeof(struct mem_area));
            
            /* Set base and len */
            n->base = prev_top;
            n->len = newsiz;
            
            /* Insert into list */
            if (prev)
                prev->next = n;
            else
                mem_list = n;
            
            /* Return new base */
            return n->base;
        }
        
        return 0; /* NULL pointer, indicating no new memory allocated */
    }
}

uint32_t GEMDOS_Mfree()
{
    struct mem_area *ma, *prev;
    
    uint32_t block = peek_u32(2);
    
    FUNC_TRACE_ENTER_ARGS {
        printf("    0x%x\n", block);
    }
    
    ma = find_mem_area(block, &prev);
    
    if (!ma)
        return GEMDOS_EIMBA;
    
    if (prev)
        prev->next = ma->next;
    else
        mem_list = ma->next;
    
    free(ma);
    
    return 0;
}


void gemdos_mem_init(struct tos_environment *te)
{
    struct mem_area *ma = malloc(sizeof(struct mem_area));
    memset(ma, 0, sizeof(struct mem_area));
    
    /* The initial area is by convention and relates to the binary loading and
     * base page setup from tossystem */
    ma->base = 0x800; 
    ma->len = te->size + 0x100; /* Size + basepage */
    mem_allocatable_top = ma->len;
    
    mem_list = ma;
}

void gemdos_mem_free()
{
    while (mem_list)
    {
        struct mem_area *n = mem_list->next;
        free(mem_list);
        mem_list = n;
    }
}
