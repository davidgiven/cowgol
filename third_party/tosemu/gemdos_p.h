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

#ifndef GEMDOS_P_H
#define GEMDOS_P_H

#define GEMDOS_TRACE_CONTEXT
#include "config.h"

/* GEMDOS return values */

#define GEMDOS_E_OK    (0)

#define GEMDOS_EINVAL  (-25) /* Mint */

#define GEMDOS_EINVFN  (-32)
#define GEMDOS_EFILNF  (-33)
#define GEMDOS_EPTHNF  (-34)
#define GEMDOS_ENHNDL  (-35)
#define GEMDOS_EACCDN  (-36)
#define GEMDOS_EIHNDL  (-37)
#define GEMDOS_ENSMEM  (-39)
#define GEMDOS_EIMBA   (-40)
#define GEMDOS_EDRIVE  (-46)
#define GEMDOS_ECWD    (-47)
#define GEMDOS_ENSAME  (-48)
#define GEMDOS_ENMFIL  (-49)
#define GEMDOS_ELOCKED (-58)
#define GEMDOS_ENSLOCK (-59)
#define GEMDOS_ERANGE  (-64)
#define GEMDOS_EINTRN  (-65)
#define GEMDOS_EPLFMT  (-66)
#define GEMDOS_EGSBF   (-67)
#define GEMDOS_EBREAK  (-68)
#define GEMDOS_EXCPT   (-69)
#define GEMDOS_EPTHOV  (-70)
#define GEMDOS_ELOOP   (-80)
#define GEMDOS_EPIPE   (-81)

#endif /* GEMDOS_P_H */
