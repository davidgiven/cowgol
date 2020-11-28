/* Copyright (C) 1997 DJ Delorie, see COPYING.DJ for details */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

#include "fixups.h"
#include "objs.h"
#include "segments.h"
#include "symbols.h"
#include "out.h"

int print = 0;

struct Thread {
  int method;
  int index;
};

static Thread target_threads[4];
static Thread frame_threads[4];

static int fsize[] = { 1, 2, 2, 4, 2, 2, 0, 0, 0, 4, 0, 6, 0, 4, 0, 0, 0 };

unsigned char *
fixup_info(unsigned char *rd, FixupInfo *fi, Obj *o, SegFrag *segfrag)
{
  int fix_data = *rd++;

  int frame_method, frame_index=0;
  if (fix_data & 0x80)
  {
    frame_method = (fix_data & 0x30) >> 4;
    frame_index = frame_threads[frame_method].index;
    frame_method = frame_threads[frame_method].method;
  }
  else
  {
    frame_method = (fix_data & 0x70) >> 4;
    if (frame_method < 4)
      frame_index = *rd++;
  }

  int target_method, target_index=0;
  if (fix_data & 0x08)
  {
    target_method = fix_data & 0x03;
    target_index = target_threads[target_method].index;
    target_method = (fix_data & 0x04) + target_threads[target_method].method;
  }
  else
  {
    target_method = fix_data & 0x07;
    target_index = *rd++;
  }

  int target_displacement = 0;
  if (target_method < 4)
  {
    target_displacement = rd[0] + 256*rd[1];
    rd += 2;
  }

  if (print)
    printf("f=%d:%d t=%d:%d d=%x\n", frame_method, frame_index, target_method, target_index, target_displacement);

  SegFrag *f;
  fi->symbol_used=0;
  int frame_base = 0;
  switch (frame_method)
  {
  case 0:
    f = ((SegFrag *)o->segfrags.list[frame_index]);
    if (f->alignment == 0)
      frame_base = f->frame * 16;
    else
      frame_base = f->segment->phys_addr;
    break;
  case 1:
    frame_base = ((Group *)o->grouprefs.list[frame_index])->phys_addr;
    break;
  case 2:
    fi->symbol_used = ((ExtSymDef *)o->extsyms.list[frame_index])->symbol;
    if (fi->symbol_used == 0)
    {
      printf("Error: fixup refers to undefined symbol %s\n", ((ExtSymDef *)o->extsyms.list[target_index])->name);
      exit(1);
    }
    frame_base = fi->symbol_used->segfrag->group->phys_addr;
    break;
  case 4:
    frame_base = segfrag->segment->phys_addr;
    break;
  case 5:
    switch (target_method & 0x03)
    {
    case 0:
      f = ((SegFrag *)o->segfrags.list[target_index]);
      if (f->alignment == 0)
	frame_base = f->frame * 16;
      else
	frame_base = f->segment->phys_addr;
      break;
    case 1:
      frame_base = ((Group *)o->grouprefs.list[target_index])->phys_addr;
      break;
    case 2:
      fi->symbol_used = ((ExtSymDef *)o->extsyms.list[target_index])->symbol;
      if (fi->symbol_used == 0)
      {
	printf("Error: fixup to undefined symbol %s\n", ((ExtSymDef *)o->extsyms.list[target_index])->name);
	exit(1);
      }
      frame_base = fi->symbol_used->segfrag->group->phys_addr;
    }
    break;
  }

  int target_offset = 0;
  switch (target_method & 0x03)
  {
  case 0:
    target_offset = ((SegFrag *)o->segfrags.list[target_index])->phys_addr;
    break;
  case 1:
    target_offset = ((Group *)o->grouprefs.list[target_index])->phys_addr;
    break;
  case 2:
    fi->symbol_used = ((ExtSymDef *)o->extsyms.list[target_index])->symbol;
    if (!fi->symbol_used)
    {
      printf("Error: fixup targets undefined symbol %s\n", ((ExtSymDef *)o->extsyms.list[target_index])->name);
      exit(1);
    }
    target_offset = fi->symbol_used->phys_addr;
    break;
  }
  target_offset += target_displacement;

  fi->frame_addr = frame_base;
  fi->target_addr = target_offset;
  return rd;
}


void
do_fixups()
{

  for (int oi=0; oi<objs.count; oi++)
  {
    Obj *o = (Obj *)objs.list[oi];
    if (o->optional)
      continue;

    if (print)
      printf("\nFixing %s\n", o->name);

    memset(target_threads, 0, sizeof(target_threads));
    memset(frame_threads, 0, sizeof(frame_threads));

    unsigned char *data = 0;
    SegFrag *segfrag = 0;
    int frag_offset = 0;

    for (int ri=0; o->records[ri]; ri++)
    {
      int rt = o->records[ri][0];
      int rl = o->records[ri][1] + o->records[ri][2] * 256;
      unsigned char *rd = o->records[ri] + 3;
      unsigned char *re = rd + rl-1;

      switch (rt)
      {
      case LIDATA:
      case LEDATA:
	segfrag = (SegFrag *)o->segfrags.list[rd[0]];
	data = rd + 3;
	frag_offset = rd[1] + rd[2]*256;
	break;

      case FIXUPP:
	while (rd < re)
	{
	  if (*rd & 0x80)
	  {
	    // Fixup

	    int mode = (*rd & 0x40);
	    int location_type = (*rd & 0x3c) >> 2;
	    int data_offset = (*rd & 0x03) * 256 + rd[1];
	    int sf_seg, sf_ofs;
	    rd += 2;

	    FixupInfo fi;
	    rd = fixup_info(rd, &fi, o, segfrag);

	    int fixup_offset = segfrag->phys_addr + frag_offset + data_offset;

	    if (print)
	    {
	      printf("\nframe_base=0x%05x  target_offset=0x%05x  fixup_offset=0x%05x  data=0x",
		     fi.frame_addr, fi.target_addr, fixup_offset);
	      for (int i=0; i<fsize[location_type]; i++)
		printf("%02x", data[data_offset+i]);
	      if (fi.symbol_used)
		printf(" (%s)", fi.symbol_used->name);
	      printf("\n");
	    }

	    int fixup_amount, val;
	    if (mode)
	      fixup_amount = fi.target_addr - fi.frame_addr;
	    else
	      fixup_amount = fi.target_addr - fixup_offset;

	    switch (location_type)
	    {
	    case 0: // 8-bit displacement
	      if (!mode) fixup_amount -= 1;
	      if (fixup_amount < -128 || fixup_amount > 127)
	      {
		printf("Error: 8-bit displacement exceeds 8 bits!\n");
		exit(1);
	      }
	      if (print) printf("  8bit was %02x  add %02x", data[data_offset], fixup_amount);
	      data[data_offset] += fixup_amount;
	      if (print) printf("  now %02x\n\n", data[data_offset]);
	      break;

	    case 1:
	      if (!mode) fixup_amount -= 2;
	      val = data[data_offset] + 256*data[data_offset+1];
	      if (print) printf(" 16bit was %04x  add %04x", val, fixup_amount);
	      val += fixup_amount;
	      if (print) printf("  now %04x\n\n", val);
	      data[data_offset] = val & 0xff;
	      data[data_offset+1] = val >> 8;
	      break;

	    case 2:
	      val = data[data_offset] + 256*data[data_offset+1];
	      if (print) printf(" 16seg was %04x  add %04x", val, fi.frame_addr/16);
	      val += fi.frame_addr/16;
	      if (print) printf("  now %04x\n\n", val);
	      data[data_offset] = val & 0xff;
	      data[data_offset+1] = val >> 8;
	      sf_seg = segfrag->segment->phys_addr / 16;
	      sf_ofs = fixup_offset - sf_seg*16;
	      segment_fixups.add((void *)(intptr_t)((sf_seg<<16)|sf_ofs));
	      break;

	    case 3:
	      if (!mode) fixup_amount -= 2;
	      val = data[data_offset] + 256*data[data_offset+1];
	      if (print) printf(" 16:16 was %04x  add %04x", val, fixup_amount);
	      val += fixup_amount;
	      if (print) printf("  now %04x (ofs)\n", val);
	      data[data_offset] = val & 0xff;
	      data[data_offset+1] = val >> 8;

	      val = data[data_offset+2] + 256*data[data_offset+3];
	      if (print) printf(" 16:16 was %04x  add %04x", val, fi.frame_addr/16);
	      val += fi.frame_addr/16;
	      if (print) printf("  now %04x (seg)\n\n", val);
	      data[data_offset+2] = val & 0xff;
	      data[data_offset+3] = val >> 8;
	      sf_seg = segfrag->segment->phys_addr / 16;
	      sf_ofs = fixup_offset+2 - sf_seg*16;
	      segment_fixups.add((void *)(intptr_t)((sf_seg<<16)|sf_ofs));
	      break;

	    default:
	      printf("Unimplemented fixup type %d\n", location_type);
	      exit(1);
	    }

	  }
	  else
	  {
	    // Thread
	    int method = (*rd & 0x1c) >> 2;
	    int thread = *rd & 0x03;
	    int is_frame_thread = *rd & 0x40;
	    rd++;

	    if (is_frame_thread)
	    {
	      frame_threads[thread].method = method;
	      if (method < 4)
		frame_threads[thread].index = *rd++;
	    }
	    else
	    {
	      target_threads[thread].method = method & 0x03;
	      target_threads[thread].index = *rd++;
	    }
	  }
	}
	break;
      }
    }
  }
}
