| TOSEMU - an emulated environment for TOS applications
| Copyright (C) 2014 Johan Thelin <e8johan@gmail.com>
| 
| This program is free software; you can redistribute it and/or
| modify it under the terms of the GNU General Public License
| as published by the Free Software Foundation; either version 2
| of the License, or (at your option) any later version.
|
| This program is distributed in the hope that it will be useful,
| but WITHOUT ANY WARRANTY; without even the implied warranty of
| MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
| GNU General Public License for more details.
|
| You should have received a copy of the GNU General Public License
| along with this program; if not, write to the Free Software
| Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.

XDEF _start

.text
_start:
        move.l  4(sp), a0
        lea     msg, a1

l0:
        clr.l   d0
        move.b  (a1)+, d0
        beq     l1
        
        move.w  d0,-(sp)
        move.w  #2,-(sp)        | call Cconout
        trap    #1
        addq.l   #4,sp
        bra     l0

l1:        
        move.w  #0, -(sp)       | call Pterm0
        trap    #1

.data

msg:    .ascii  "Hello World!\n\0"
