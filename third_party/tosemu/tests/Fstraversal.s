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
        move.w  #47,-(sp)       | call Fgetdta
        trap    #1
        addq.l  #2,sp
        
        lea     olddta, a1      | store the old DTA in olddta
        move.l  d0, (a1)
        
        pea     dtabuf
        move.w  #26,-(sp)       | call Fsetdta
        trap    #1
        addq.l  #6,sp

        move.w  #0xff,-(sp)
        pea     wildcard
        move.w  #78,-(sp)       | call Fsfirst
        trap    #1
        addq.l  #6,sp

loop:
        tst     d0
        bne     done
        
        lea     dtabuf, a1
        adda.l  #30, a1         | offset to filename
        move.l  a1, -(sp)
        move.w  #9,-(sp)        | call Cconws
        trap    #1
        addq.l  #6,sp

        move.w  #10,-(sp)       | line break
        move.w  #2,-(sp)        | call Cconout
        trap    #1
        addq.l   #4,sp
    
        move.w  #79,-(sp)       | call Fsnext
        trap    #1
        addq.l  #2,sp
        
        bra     loop
        
done:        
        lea     olddta, a1      | load olddta to restore the old DTA
        move.l  (a1), d0
        move.l  d0, -(sp)
        move.w    #26,-(sp)     | call Fsetdta
        trap      #1
        addq.l    #6,sp
        
        move.w  #0, -(sp)       | call Pterm0
        trap    #1

.data

wildcard:    .ascii  "*\0"
olddta:      .word   0
dtabuf:      ds.l    44
