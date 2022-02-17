/* Copyright (C) 1997 DJ Delorie, see COPYING.DJ for details */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#include "objs.h"
#include "segments.h"
#include "out.h"
#include "stricmp.h"
#include "fixups.h"

List segment_fixups;

static unsigned char *lidest;
static unsigned char *libase;

static unsigned char *
store_lidata(unsigned char *li)
{
  int repeat_count = li[0] + 256*li[1];
  int block_count = li[2] + 256*li[3];
  unsigned char *rv=li;
  //  printf("lidata at %08x repeat %d block %d\n",
  //     li-libase, repeat_count, block_count);
  if (repeat_count == 0)
  {
    printf("Error: LIDATA with zero repeat count\n");
    exit(1);
  }
  for (int r=0; r<repeat_count; r++)
  {
    if (block_count == 0)
    {
      int count = li[4];
      //      printf("  count %d\n", count);
      memcpy(lidest, li+5, count);
      lidest += count;
      rv = li+5+count;
    }
    else
    {
      unsigned char *tli = li+4;
      for (int block=0; block<block_count; block++)
        tli = store_lidata(tli);
      rv = tli;
    }
  }
  return rv;
}

int start_seg=0, start_ofs=0;

void
find_start_address(void)
{
  for (int oi=0; oi<objs.count; oi++)
  {
    Obj *o = (Obj *)objs.list[oi];
    if (o->optional)
      continue;
    for (int ri=0; o->records[ri]; ri++)
    {
      int rt = o->records[ri][0];
      if (rt == MODEND)
      {
        unsigned char *rd = o->records[ri]+3;

        if (rd[0] & 0x40)
        {
          FixupInfo fi;
          fixup_info(rd+1, &fi, o, 0);
          start_seg = fi.frame_addr / 16;
          start_ofs = fi.target_addr - fi.frame_addr;
        }
      }
    }
  }
}


void
write_output(char *filename)
{
  int final_size = 0;
  int is_exe=0, is_com=0;

  if (stricmp(filename+strlen(filename)-4, ".com") == 0)
    is_com = 1;
  else
    is_exe = 1;

  // Pass 1 - figure out the address of the last byte we have data for

  int stack_ofs = 0;
  int stack_seg = 0;
  int stack_addr = 0;

  for (int si=0; si<segclasses.count; si++)
  {
    SegClass *c = (SegClass *)segclasses.list[si];
    if (final_size < c->phys_addr + c->size)
      final_size = c->phys_addr + c->size;
  }

  unsigned char *final_data = (unsigned char *)malloc(final_size);
  int max_real_data=0;

  memset(final_data, 0, final_size);

  // Pass 2 - transfer raw bytes to output image

  for (int oi=0; oi<objs.count; oi++)
  {
    Obj *o = (Obj *)objs.list[oi];
    //printf("storing obj %s\n", o->name);

    if (o->optional)
      continue;

    for (int fi=1; fi<o->segfrags.count; fi++)
    {
      SegFrag *f = (SegFrag *)o->segfrags.list[fi];
      if (f->combine == COMBINE_STACK
          && stack_addr < f->size + f->phys_addr)
      {
        stack_addr = f->size + f->phys_addr;
        stack_seg = f->group->phys_addr / 16;
        stack_ofs = stack_addr - stack_seg * 16;
      }
    }

    for (int ri=0; o->records[ri]; ri++)
    {
      int rt = o->records[ri][0];
      int rl = o->records[ri][1] + 256*o->records[ri][2];
      unsigned char *rd = o->records[ri]+3;

      SegFrag *sf;
      int frag_offset;

      switch (rt)
      {
      case LEDATA:
        sf = (SegFrag *)o->segfrags.list[rd[0]];
        frag_offset = rd[1] + 256*rd[2];
        //printf("LEDATA at 0x%05x to 0x%05x\n", sf->phys_addr+frag_offset, sf->phys_addr+frag_offset+rl-4);
        memcpy(final_data+sf->phys_addr+frag_offset, rd+3, rl-4);
        if (max_real_data < sf->phys_addr+frag_offset+rl-4)
          max_real_data = sf->phys_addr+frag_offset+rl-4;
        break;

      case LIDATA:
        sf = (SegFrag *)o->segfrags.list[rd[0]];
        frag_offset = rd[1] + 256*rd[2];
        unsigned char *re = rd + rl - 1;
        libase = rd;

        lidest = final_data+sf->phys_addr+frag_offset;
        //printf("LIDATA at 0x%05x", sf->phys_addr+frag_offset);
        rd += 3;
        while (rd < re)
          rd = store_lidata(rd);
        if (max_real_data < lidest-final_data)
          max_real_data = lidest-final_data;
        //printf(" to 0x%05x\n", lidest-final_data);
        break;
      }
    }
  }

  //  printf("final_size is %05x but max_real_data is %05x\n",
  //     final_size, max_real_data);
  //  printf("stack is at %05x %04x:%04x\n", stack_addr, stack_seg, stack_ofs);

  FILE *f = fopen(filename, "wb");
  int written_size=0;

  if (is_exe)
  {
    unsigned char exe_header[512];
    memset(exe_header, 0, 512);
    #define PUTW(i,v) exe_header[i] = (v)&0xff; exe_header[i+1] = (v)>>8

    int bytes_of_header = (0x22 + segment_fixups.count*4 + 511) & ~511;

    PUTW(0x00, 0x5a4d);
    PUTW(0x02, max_real_data & 0x1ff);
    PUTW(0x04, (max_real_data+511+bytes_of_header)/512);
    PUTW(0x06, segment_fixups.count);
    PUTW(0x08, bytes_of_header/16);
    PUTW(0x0a, (final_size+15)/16 - max_real_data/16);
    PUTW(0x0c, 0xffff);
    PUTW(0x0e, stack_seg); // SS
    PUTW(0x10, stack_ofs); // SP
    PUTW(0x12, 0); // checksum
    PUTW(0x14, start_ofs); // IP
    PUTW(0x16, start_seg); // CS
    PUTW(0x18, 0x22); // offset of segment fixups
    PUTW(0x1a, 0);

    PUTW(0x1c, 0x0001);
    PUTW(0x1e, 0x20fb);
    PUTW(0x20, 0x6a72);

    int fixup_offset = 0x22; // TLINK compatible
    for (int i=0; i<segment_fixups.count; i++)
    {
      if (fixup_offset >= 0x200)
      {
        fwrite(exe_header, 1, 512, f);
        written_size += 512;
        memset(exe_header, 0, 512);
        fixup_offset = 0;
      }
      PUTW(fixup_offset, (int)(intptr_t)segment_fixups.list[i] & 0xffff);
      fixup_offset += 2;
      if (fixup_offset >= 0x200)
      {
        fwrite(exe_header, 1, 512, f);
        written_size += 512;
        memset(exe_header, 0, 512);
        fixup_offset = 0;
      }
      PUTW(fixup_offset, (int)(intptr_t)segment_fixups.list[i] >> 16);
      fixup_offset += 2;
    }
    fwrite(exe_header, 1, 512, f);
    written_size += 512;
    fwrite(final_data, 1, max_real_data, f);
    written_size += max_real_data;
  }
  else
  {
    fwrite(final_data+0x100, 1, max_real_data-0x100, f);
    written_size += max_real_data-0x100;
  }
  fclose(f);

  printf("%s = %d bytes\n", filename, written_size);
}
