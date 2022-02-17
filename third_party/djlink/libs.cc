#include <stdio.h>

#include "quark.h"
#include "libs.h"
#include "objs.h"

void
load_library(char *name, unsigned char *bytes, int len)
{
  //  printf("library: %s bytes %8p len %08x\n", name, bytes, len);

  char *obj_name=0;
  int rt, rl, obj_start=0;
  int page_size = bytes[1] + bytes[2]*256 + 3;

  for (int ri=0; ri<len;)
  {
    unsigned char *rd = bytes+ri;
    rt = rd[0];
    rl = rd[1] + rd[2] * 256;

    if (rt == THEADR || rt == LHEADR)
    {
      obj_name = quark(rd+4, rd[3]);
      //      printf("  obj %s at %08x\n", obj_name, ri);
      obj_start = ri;
    }

    if (rt == MODEND)
    {
      //      printf("  obj %05x len %05x\n", obj_start, ri-obj_start+rl+3);
      Obj *o = new Obj(obj_name, bytes+obj_start, ri-obj_start+rl+3);
      objs.add(o);
      o->optional = 1;
    }

    ri += rl+3;
    if (rt == MODEND) ri = (ri+page_size-1) & ~(page_size-1);
  }
}
