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

/* Enable and disable detailed tracing for the various sub-systems of tosemu */
/* #define ENABLE_GEMDOS_TRACE */
/* #define ENABLE_BIOS_TRACE */
/* #define ENABLE_XBIOS_TRACE */
/* #define ENABLE_AES_TRACE */
/* #define ENABLE_VDI_TRACE */

/* Tracing functions */

#if (defined(ENABLE_GEMDOS_TRACE) && defined(GEMDOS_TRACE_CONTEXT)) || \
    (defined(ENABLE_BIOS_TRACE) && defined(BIOS_TRACE_CONTEXT)) || \
    (defined(ENABLE_XBIOS_TRACE) && defined(XBIOS_TRACE_CONTEXT)) || \
    (defined(ENABLE_AES_TRACE) && defined(AES_TRACE_CONTEXT)) || \
    (defined(ENABLE_VDI_TRACE) && defined(VDI_TRACE_CONTEXT))
#define     FUNC_TRACE_ENTER      printf("Enter %s\n", __func__);
#define     FUNC_TRACE_ENTER_ARGS printf("Enter %s\n", __func__); if(1)
#else
#define     FUNC_TRACE_ENTER
#define     FUNC_TRACE_ENTER_ARGS if(0)
#endif
