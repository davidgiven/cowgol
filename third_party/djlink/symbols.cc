/* Copyright (C) 1997 DJ Delorie, see COPYING.DJ for details */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "symbols.h"
#include "segments.h"
#include "objs.h"
#include "stricmp.h"

SymTab symtab;
static int symbol_sequence=0;

Symbol::Symbol()
{
  name = 0;
  filename = 0;
  sequence = symbol_sequence++;
  absolute = 0;
  phys_addr = 0;
  frame = offset = 0;
  group = 0;
  segfrag = 0;
  frag_offset = 0;
}

SymTab::SymTab()
  : syms()
{
}

Symbol *
SymTab::get(char *name)
{
  for (int i=0; i<syms.count; i++)
  {
    Symbol *s = (Symbol *)syms.list[i];
    if (s->name == name)
      return s;
  }
  /* try case insensitive */
  for (int i=0; i<syms.count; i++)
  {
    Symbol *s = (Symbol *)syms.list[i];
    if (stricmp(s->name, name) == 0)
      return s;
  }
  return 0;
}

Symbol *
SymTab::add(char *name)
{
  Symbol *s = new Symbol;
  s->name = name;
  syms.add(s);
  return s;
}

void
relocate_symbols()
{
  for (int yi=0; yi<symtab.syms.count; yi++)
  {
    Symbol *y = (Symbol *)symtab.syms.list[yi];
    int base=0;
    if (y->group || y->segfrag)
    {
      if (y->segfrag->group->name[0])
	base = y->segfrag->group->phys_addr;
      else if (y->segfrag->segment)
	base = y->segfrag->segment->phys_addr;
      else
      {
	base = y->segfrag->frame * 16;
	y->absolute = 1;
      }
      y->offset = y->frag_offset + y->segfrag->phys_addr - base;
      y->frame = base / 16;
      y->phys_addr = y->frame*16 + y->offset;
    }
  }
}

static int resolve_errors = 0;

static void
include_symbols_from(Obj *o)
{
  if (o->gotsyms) return;
  o->gotsyms = 1;
  //printf("including symbols from %s\n", o->name);
  int yi;
  for (yi=1; yi<o->pubsyms.count; yi++)
  {
    Symbol *y = (Symbol *)o->pubsyms.list[yi];
    Symbol *other = symtab.get(y->name);
    if (other)
    {
      printf("Multiply defined symbol: %s (%s and %s)\n",
	     y->name, other->obj->name, o->name);
      resolve_errors++;
    }
    //printf(" - adding `%s'\n", y->name);
    symtab.syms.add(y);
  }
}

static void resolve_object(Obj *o);

static void
include_optional_object(Obj *o)
{
  //printf("including optional object %s\n", o->name);
  o->optional = 0;
  include_symbols_from(o);
  resolve_object(o);
}

static Symbol *
find_symbol_in_object(char *name)
{
  for (int oi=0; oi<objs.count; oi++)
  {
    Obj *o = (Obj *)objs.list[oi];
    if (o->gotsyms)
      continue;
    for (int yi=1; yi<o->pubsyms.count; yi++)
    {
      Symbol *y = (Symbol *)o->pubsyms.list[yi];
      if (y->name == name)
	return y;
    }
  }
  return 0;
}

static void
resolve_object(Obj *o)
{
  if (o->resolved) return;
  o->resolved = 1;
  //printf("resolving object %s\n", o->name);
  for (int ei=1; ei<o->extsyms.count; ei++)
  {
    ExtSymDef *ext = (ExtSymDef *)o->extsyms.list[ei];

    Symbol *y = symtab.get(ext->name);
    if (y)
      ext->symbol = y;
    else
    {
      Symbol *y2 = find_symbol_in_object(ext->name);
      if (y2)
      {
	include_optional_object(y2->obj);
	ext->symbol = y2;
      }
      else
	printf("Unresolved symbol: %s in %s\n", ext->name, o->name);
    }
  }
}

void
resolve_externs()
{
  for (int oi=0; oi<objs.count; oi++)
  {
    Obj *o = (Obj *)objs.list[oi];
    if (!o->optional)
      include_symbols_from(o);
  }

  for (int oi=0; oi<objs.count; oi++)
  {
    Obj *o = (Obj *)objs.list[oi];
    if (o->optional)
      continue;

    resolve_object(o);
  }
  if (resolve_errors)
  {
    printf("Unresolved symbols; exiting\n");
    exit(1);
  }
}
