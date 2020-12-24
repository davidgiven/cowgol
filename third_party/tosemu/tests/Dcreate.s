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
        pea     name
        move.w  #57,-(sp)       | call Dcreate
        trap    #1
        addq.l  #6,sp
        
        tst.w   d0              | check success
        bmi.s   fail
        
        pea     name
        move.w  #57,-(sp)       | call Dcreate
        trap    #1
        addq.l  #6,sp
        
        tst.w   d0              | check failure
        beq.s   fail
        
        clr.w   -(sp)           | call Pterm0
        trap    #1
        
fail:   move.w  #1,-(sp)
        move.w  #0x4c,-(sp)     | call Pterm
        trap    #1

name:   .ascii  "DNAME\0"
