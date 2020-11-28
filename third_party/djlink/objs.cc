/* Copyright (C) 1997 DJ Delorie, see COPYING.DJ for details */
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>

#include "quark.h"
#include "objs.h"
#include "libs.h"
#include "segments.h"
#include "symbols.h"

List objs;

static int align_types[] = {
  0, 1, 2, 16, 256, 4, 1, 1
};

static int combine_types[] = {
  COMBINE_PRIVATE,
  COMBINE_COMMON,
  COMBINE_PUBLIC,
  COMBINE_PRIVATE,
  COMBINE_PUBLIC,
  COMBINE_STACK,
  COMBINE_COMMON,
  COMBINE_PUBLIC
};

static void
_bad_obj(char *name, int line)
{
  printf("Error: %s does not appear to be an object module, or is corrupt (%d).\n", name, line);
  exit(1);
}

#define bad_obj(n) _bad_obj(n, __LINE__)

void
load_object(char *filename)
{

  struct stat s;
  if (stat(filename, &s) < 0) {
    printf("Unable to read file %s\n", filename);
    perror("The error was");
    exit(1);
  }

  int len = s.st_size;
  unsigned char *bytes = new unsigned char[len];
  
  FILE *f = fopen(filename, "rb");
  if (fread(bytes, 1, len, f) != (size_t)len)
    bad_obj(filename);
  fclose(f);

  if (bytes[0] == 0xf0)
  {
    load_library(filename, bytes, len);
    return;
  }

  Obj *o = new Obj(filename, bytes, len);
  objs.add(o);
}

Obj::Obj(char *Pname, unsigned char *Pbytes, int Plen)
  : names(), grouprefs(), segfrags(), extsyms(), pubsyms()
{
  name = Pname;
  bytes = Pbytes;
  len = Plen;

  optional = 0;
  resolved = 0;
  gotsyms = 0;

  // Sanity checking
  if (bytes[0] != THEADR && bytes[0] != LHEADR)
    bad_obj(name);

  int i=0;
  int num_records = 0;
  while (i<len && bytes[i] != MODEND && bytes[i] != MODEND32) {
    num_records++;
    if (bytes[i] < 0x80)
      bad_obj(name);
    int reclen = bytes[i+1] + bytes[i+2]*256;
#if 0
    // Turbo-C creates records greater than 1024.  Sigh.
    if (reclen > 1024 || reclen < 1)
#else
    if (reclen > 1034 || reclen < 1)
#endif
    {
      printf("reclen is %d\n", reclen);
      bad_obj(name);
    }
    i += reclen + 3;
    if (i > len)
    {
      printf("i=%d len=%d\n", i, len);
      bad_obj(name);
    }
  }

  records = new unsigned char *[num_records+2];
  i=0;
  num_records = 0;
  while (i<len && bytes[i] != MODEND && bytes[i] != MODEND32) {
    records[num_records] = bytes+i;
    num_records++;
    i += bytes[i+1] + bytes[i+2]*256 + 3;
  }
  records[num_records++] = bytes+i;
  records[num_records] = 0;

  if (i + bytes[i+1] + bytes[i+2]*256 + 3 > len)
    bad_obj(name);

  /* Gather names, segments, symbols, etc */

  // These all start with index 1
  names.add((void *)"");
  grouprefs.add(0);
  segfrags.add(0);
  extsyms.add(0);
  pubsyms.add(0);

  int n, r;
  for (r=0; records[r]; r++)
  {
    int rt = records[r][0];
    int rl = records[r][1] + records[r][2] * 256;
    unsigned char *rd = records[r] + 3;

    switch (rt)
    {
    case THEADR:
      {
	name = quark(rd+1, rd[0]);
	break;
      }

    case LNAMES:
      {
	for (n=0; n<rl-1; n+=rd[n]+1)
	  names.add(quark(rd+n+1, rd[n]));
	break;
      }

    case PUBDEF:
      {
	int group, segfrag, frame=0, i=2;
	group = rd[0];
	segfrag = rd[1];
	if (group == 0 && segfrag == 0)
	{
	  frame = rd[2] + rd[3]*256;
	  i += 2;
	}
	while (i < rl-1)
	{
	  char *name = quark(rd+i+1, rd[i]);
	  i += rd[i]+4;
	  Symbol *sym = new Symbol;
	  sym->obj = this;
	  sym->name = name;

	  sym->filename = name;

	  pubsyms.add(sym);
	}
	break;
      }

    case EXTDEF:
    case LEXTDEF:
      {
	i = 0;
	while (i < rl-1)
	{
	  ExtSymDef *esd = new ExtSymDef;
	  esd->name = quark(rd+i+1, rd[i]);
	  i += rd[i]+2;
	  esd->size = 0;
	  esd->symbol = 0;
	  extsyms.add(esd);
	}
	break;
      }

    case COMDEF:
    case LCOMDEF:
      {
	i = 0;
	while (i < rl-1)
	{
	  ExtSymDef *esd = new ExtSymDef;
	  esd->name = quark(rd+i+1, rd[i]);
	  i += rd[i]+1;
	  esd->size = 0;
	  i++; // type index
	  int dt = rd[i++]; // data type
	  int words=1, prod=1;
	  if (dt == 0x61) words=2;
	  while (words--)
	  {
	    if (rd[i] < 128) prod *= rd[i];
	    else if (rd[i] == 0x81) { prod *= rd[i+1] + (rd[i+2]<<8); i += 2; }
	    else if (rd[i] == 0x84) { prod *= rd[i+1] + (rd[i+2]<<8) + (rd[i+3]<<16); i += 3; }
	    else if (rd[i] == 0x88) { prod *= rd[i+1] + (rd[i+2]<<8) + (rd[i+3]<<16) + (rd[i+4]<<24); i += 4; }
	    i++;
	  }
	  esd->size = prod;
	  extsyms.add(esd);
	}
	break;
      }

    // These are handled elsewhere
    case GRPDEF:
    case SEGDEF:
    case LEDATA:
    case LIDATA:
    case FIXUPP:
    case MODEND:
      break;

    // These we ignore
    case COMENT:
    case LINNUM:
      break;

    default:
      {
	printf("Unimplemented Object Record %02x\n", rt);
	exit(1);
      }
    }
  }
}

void
gather_used_objects()
{
  for (int oi=0; oi<objs.count; oi++)
  {
    Obj *o = (Obj *)objs.list[oi];

    if (o->optional)
      continue;

    int pubsym_index = 1;

    int r;
    for (r=0; o->records[r]; r++)
    {
      int rt = o->records[r][0];
      int rl = o->records[r][1] + o->records[r][2] * 256;
      unsigned char *rd = o->records[r] + 3;

      switch (rt)
      {
      case GRPDEF:
	{
	  if (rd[0] < 1 || rd[0] >= o->names.count) bad_obj(o->name);
	  char *groupname = (char *)o->names.list[rd[0]];
	  Group *group = (Group *)add(groupname, groups, group_ctor);
	  o->grouprefs.add(group);

	  int i;
	  for (i=1; i<rl-1; i+=2)
	  {
	    SegFrag *f = (SegFrag *)o->segfrags.list[rd[i+1]];
	    if (f->group && f->group != group)
	      printf("Warning: segment %s in %s in group %s and group %s\n",
		     f->segment->name, o->name, f->group->name, groupname);
	    if (! f->group)
	    {
	      f->group = group;
	      group->parts.add(f);
	    }
	  }
	  break;
	}

      case SEGDEF:
	{
	  SegFrag *sf = new SegFrag();
	  o->segfrags.add(sf);
	  int attrs = rd[0];
	  sf->obj = o;
	  sf->record = o->records[r];
	  sf->acbp = attrs;
	  sf->alignment = align_types[(attrs & 0xe0) >> 5];
	  if (sf->alignment == 0)
	  {
	    sf->frame = rd[1] + rd[2]*256;
	    sf->phys_addr = sf->frame * 16;
	    rd += 3;
	  }
	  sf->combine = combine_types[(attrs & 0x1c) >> 2];
	  sf->size = rd[1] + rd[2]*256;
	  //printf("frag %08x size %05x\n", sf, sf->size);
	  if (attrs & 2 && sf->size == 0) sf->size = 65536;
	  if (rd[3] >= o->names.count) bad_obj(o->name);
	  if (rd[4] >= o->names.count) bad_obj(o->name);
	  char *segclassname = (char *)o->names.list[rd[4]];
	  char *segname = (char *)o->names.list[rd[3]];
	  sf->name = o->name;
	  //sf->name = segname;

	  if (sf->alignment) // else it's an absolute segment, and we don't store it
	  {
	    SegClass *segclass = (SegClass *)add(segclassname, segclasses, segclass_ctor);

	    Segment *segment = (Segment *)add(segname, segclass->parts, segment_ctor);
	    segment->segclass = segclass;

	    segment->parts.add(sf);
	    sf->segment = segment;
	  }
	  break;
	}

      case PUBDEF:
	{
	  int group, segfrag, frame=0, i=2;
	  group = rd[0];
	  segfrag = rd[1];
	  if (group == 0 && segfrag == 0)
	  {
	    frame = rd[2] + rd[3]*256;
	    i += 2;
	  }
	  while (i < rl-1)
	  {
	    i += rd[i]+1;
	    Symbol *sym = (Symbol *)o->pubsyms.list[pubsym_index++];
	    int frag_offset = rd[i] + rd[i+1]*256;
	    i += 3;

	    if (group >= o->names.count) bad_obj(o->name);
	    if (group)
	      sym->group = (Group *)o->grouprefs.list[group];
	    if (segfrag >= o->names.count) bad_obj(o->name);
	    if (segfrag)
	      sym->segfrag = (SegFrag *)o->segfrags.list[segfrag];
	    if (!group && !segfrag)
	    {
	      sym->phys_addr = frame * 16 + frag_offset;
	      sym->frame = frame;
	      sym->offset = frag_offset;
	      sym->absolute = 1;
	    }
	    sym->frag_offset = frag_offset;
	  }
	  break;
	}
      }
    }
  }
}
