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

#include "utils.h"

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

uint16_t endianize_16(uint16_t in)
{
    uint16_t out;
    int i;
    
    for(i=0; i<2; ++i)
    {
        out = out << 8;
        out = out | (0xff&in);
        in = in >> 8;
    }
    
    return out;
}

uint32_t endianize_32(uint32_t in)
{
    uint32_t out;
    int i;
    
    for(i=0; i<4; ++i)
    {
        out = out << 8;
        out = out | (0xff&in);
        in = in >> 8;
    }
    
    return out;
}

/* Checks if the console has available input
 * http://stackoverflow.com/questions/717572/how-do-you-do-non-blocking-console-i-o-on-linux-in-c
 */
int console_input_available()
{
    struct timeval tv;
    fd_set fds;

    tv.tv_sec = 0;
    tv.tv_usec = 0;

    FD_ZERO(&fds);
    FD_SET(STDIN_FILENO, &fds);

    select(STDIN_FILENO+1, &fds, NULL, NULL, &tv);

    return (FD_ISSET(0, &fds));
}
