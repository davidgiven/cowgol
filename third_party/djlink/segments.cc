/* Copyright (C) 1997 DJ Delorie, see COPYING.DJ for details */
#include <stdio.h>
#include <stdlib.h>

#include "quark.h"
#include "list.h"
#include "objs.h"
#include "segments.h"

List segclasses;
List groups;

static int gscf_sequence=0;

GSCF::GSCF() : parts()
{
  name = 0;
  alignment = 1;
  size = 0;
  phys_addr = 0;
  done = 0;
  sequence = gscf_sequence++;
}

void
GSCF::dump()
{
  if (name[0])
    printf("%05x %05x %04x%*c%s\n",
	   phys_addr, size, alignment, print_depth*4-3, ' ', name);
}

SegFrag::SegFrag() : GSCF()
{
  combine = COMBINE_PRIVATE;
  frame = 0;
  group = 0;
  segment = 0;
  print_depth = 4;
}

Segment::Segment() : GSCF()
{
  alignment = 16;
  segclass = 0;
  print_depth = 3;
}

SegClass::SegClass() : GSCF()
{
  print_depth = 2;
}

Group::Group() : GSCF()
{
  alignment = 16;
  print_depth = 1;
}

GSCF *segment_ctor() { return new Segment(); }
GSCF *segclass_ctor() { return new SegClass(); }
GSCF *group_ctor() { return new Group(); }

GSCF *
find(char *name, List &list)
{
  for (int s=0; s<list.count; s++)
    if (((GSCF *)list.list[s])->name == name)
      return (GSCF *)list.list[s];
  return 0;
}

void
add(List &list, GSCF *gscf)
{
  for (int s=0; s<list.count; s++)
    if ((GSCF *)list.list[s] == gscf)
      return;
  list.add(gscf);
}

GSCF *
add(char *qname, List &l, GSCF *(ctor)())
{
  GSCF *g = find(qname, l);
  if (!g)
  {
    g = ctor();
    g->name = qname;
    l.add(g);
  }
  return g;
}

void
create_filler_groups()
{
  for (int ci = 0; ci < segclasses.count; ci++)
  {
    SegClass *c = (SegClass *)segclasses.list[ci];

    for (int si = 0; si < c->parts.count; si++)
    {
      Segment *s = (Segment *)c->parts.list[si];

      for (int fi = 0; fi < s->parts.count; fi++)
      {
	SegFrag *f = (SegFrag *)s->parts.list[fi];
	if (!f->group)
	{
	  f->group = new Group;
	  f->group->name = "";
	  f->group->parts.add(f);
	  f->group->phys_addr = f->segment->phys_addr;
	}
      }
    }
  }
}

void
define_groups()
{
  for (int gi=0; gi<groups.count; gi++)
  {
    Group *g = (Group *)groups.list[gi];

    //printf("Group %s:\n", g->name);
    for (int fi=0; fi<g->parts.count; fi++)
    {
      SegFrag *f = (SegFrag *)g->parts.list[fi];
      //printf("  0x%05x %s\n", f->phys_addr, f->name);
      if (fi==0 || g->phys_addr > f->phys_addr)
      {
	//printf("  0x%05x %s TAKEN\n", f->phys_addr, f->name);
	g->phys_addr = f->phys_addr;
      }
    }
    //printf("  0x%05x group addr\n", g->phys_addr);
  }
}

void
roll_up_alignments()
{
  for (int ci = 0; ci < segclasses.count; ci++)
  {
    SegClass *c = (SegClass *)segclasses.list[ci];

    for (int si = 0; si < c->parts.count; si++)
    {
      Segment *s = (Segment *)c->parts.list[si];

      for (int fi = 0; fi < c->parts.count; fi++)
      {
	SegFrag *f = (SegFrag *)c->parts.list[fi];

	if (f->combine == COMBINE_COMMON
	    && s->alignment < f->alignment)
	  s->alignment = f->alignment;
      }
    }
  }
}

void
zerop(GSCF *gscf)
{
  if (gscf->parts.count == 0)
  {
    printf("GSCF %s has no parts!\n", gscf->name);
    exit(1);
  }
}

#define ALIGN(x,b) (x) = ((x) + ((b)-1)) & ~((b)-1)

void
place_segments()
{
  int final = 0;

  for (int ci = 0; ci < segclasses.count; ci++)
  {
    SegClass *c = (SegClass *)segclasses.list[ci];
    zerop(c);
    //printf("placing segclass `%s'\n", c->name);

    for (int si = 0; si < c->parts.count; si++)
    {
      Segment *s = (Segment *)c->parts.list[si];
      zerop(s);
      //printf("  placing segment `%s'\n", s->name);
      int common_base = final;

      for (int fi = 0; fi < s->parts.count; fi++)
      {
	SegFrag *f = (SegFrag *)s->parts.list[fi];
	if (f->alignment == 0)
	{
	  f->phys_addr = f->frame * 16;
	  continue;
	}

	ALIGN(final, f->alignment);
	ALIGN(common_base, f->alignment);
	f->phys_addr = final;

	if (f->combine == COMBINE_COMMON)
	{
	  if (final < common_base + f->size)
	    final = common_base + f->size;
	}
	else
	{
	  f->phys_addr = final;
	  final += f->size;
	}

	//printf("    segfrag %8p addr %05x size %05x\n", f, f->phys_addr, f->size);
      }
      s->phys_addr = ((GSCF *)s->parts.list[0])->phys_addr;
      s->phys_addr = s->phys_addr & ~(s->alignment-1);
      s->size = final - s->phys_addr;
      //printf("    addr=%05x size=%05x\n", s->phys_addr, s->size);
    }
    c->phys_addr = ((GSCF *)c->parts.list[0])->phys_addr;
    c->size = final - c->phys_addr;
    //printf("  addr=%05x size=%05x\n", c->phys_addr, c->size);
  }
}
