/* Copyright (C) 1997 DJ Delorie, see COPYING.DJ for details */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "objs.h"
#include "segments.h"
#include "symbols.h"
#include "map.h"
#include "stricmp.h"
#include "out.h"

static void
print_symbols(FILE *map)
{
  for (int yi=0; yi<symtab.syms.count; yi++)
  {
    Symbol *y = (Symbol *)symtab.syms.list[yi];
    fprintf(map, " %04X:%04X  %s  %s\n",
	   y->frame, y->offset, y->absolute?"Abs":"   ", y->name);
  }
}

static int
sort_syms_byaddr(const void *va, const void *vb)
{
  Symbol *a = *(Symbol **)va;
  Symbol *b = *(Symbol **)vb;
  int rv;
  rv = b->absolute - a->absolute;
  if (rv == 0) rv = a->phys_addr - b->phys_addr;
  if (rv == 0) rv = a->frame - b->frame;
  if (rv == 0) rv = stricmp(a->name, b->name);
  return rv;
}

static int
sort_syms_byname(const void *va, const void *vb)
{
  Symbol *a = *(Symbol **)va;
  Symbol *b = *(Symbol **)vb;
  return stricmp(a->name, b->name);
}

void
print_map(char *mapfile)
{
  FILE *map = fopen(mapfile, "w");

  if (!map)
  {
    printf("Cannot open map file %s\n", mapfile);
    perror("The error was");
    return;
  }

  fprintf(map, "\n Start  Stop   Length Name               Class\n\n");

  for (int ci=0; ci<segclasses.count; ci++)
  {
    SegClass *c = (SegClass *)segclasses.list[ci];
    for (int si=0; si<c->parts.count; si++)
    {
      Segment *s = (Segment *)c->parts.list[si];
      int phys_addr = s->phys_addr;
      if (s->parts.count > 0)
	phys_addr = ((SegFrag *)(s->parts.list[0]))->phys_addr;
      int end = s->phys_addr+s->size-1;
      if (end < phys_addr)
	fprintf(map, " %05XH %05XH %05XH %-19s%s\n",
		phys_addr, phys_addr, 0,
		s->name, s->segclass->name);
      else
	fprintf(map, " %05XH %05XH %05XH %-19s%s\n",
		phys_addr, end, s->size ? end-phys_addr+1 : 0,
		s->name, s->segclass->name);
    }
  }
  fprintf(map, "\nDetailed map of segments\n\n");

  for (int ci=0; ci<segclasses.count; ci++)
  {
    SegClass *c = (SegClass *)segclasses.list[ci];
    for (int si=0; si<c->parts.count; si++)
    {
      Segment *s = (Segment *)c->parts.list[si];
      for (int fi=0; fi<s->parts.count; fi++)
      {
	SegFrag *f = (SegFrag *)s->parts.list[fi];
	fprintf(map, "%04X:%04X %04X C=%s S=%s G=%s M=%s ACBP=%02x\n",
		f->segment->phys_addr / 16,
		f->phys_addr - f->segment->phys_addr,
		f->size, f->segment->segclass->name, f->segment->name,
		f->group->name[0] ? f->group->name : "(none)",
		f->obj->name, f->acbp);
      }
    }
  }

  fprintf(map, "\n  Address         Publics by Name\n\n");
  qsort(symtab.syms.list, symtab.syms.count, sizeof(symtab.syms.list[0]), sort_syms_byname);
  print_symbols(map);

  fprintf(map, "\n  Address         Publics by Value\n\n");
  qsort(symtab.syms.list, symtab.syms.count, sizeof(symtab.syms.list[0]), sort_syms_byaddr);
  print_symbols(map);

  fprintf(map, "\nProgram entry point at %04X:%04X\n\n", start_seg, start_ofs);

  fclose(map);
}
