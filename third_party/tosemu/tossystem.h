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

#ifndef TOSSYSTEM_H
#define TOSSYSTEM_H

#include <stdint.h>

struct basepage;

struct tos_environment {
    uint64_t size;
    void *appmem;
    void *supermem;
    void *staticmem0;
    void *staticmem1;
    
    uint32_t tsize, 
             dsize, 
             bsize, 
             ssize;

    struct basepage *bp;

    char *base_path;
};

int init_tos_environment(struct tos_environment *te, void *binary,
                         uint64_t binary_size, int argc, char **argv);
void free_tos_environment(struct tos_environment *te);

void halt_execution();

#endif /* TOSSYSTEM_H */
