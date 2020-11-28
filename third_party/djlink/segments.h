/* Copyright (C) 1997 DJ Delorie, see COPYING.DJ for details */
struct Obj;
struct SegClass;
struct Segment;
struct Group;

#define COMBINE_PRIVATE	1
#define COMBINE_PUBLIC	2
#define COMBINE_STACK	3
#define COMBINE_COMMON	4

struct GSCF {
  GSCF();
  char *name;
  int alignment;
  int size;
  int phys_addr;
  int done;
  int print_depth;
  List parts;
  int sequence;
  void dump();
};

struct SegFrag : public GSCF {
  SegFrag();
  Obj *obj;
  unsigned char *record;
  int acbp;
  int combine;
  int frame;		// if absolute
  Segment *segment;
  Group *group;
};

struct Segment : public GSCF {
  Segment();
  SegClass *segclass;
};

struct SegClass : public GSCF {
  SegClass();
};

extern List segclasses;

struct Group : public GSCF {
  Group();
};

extern List groups;

GSCF *segment_ctor();
GSCF *segclass_ctor();
GSCF *group_ctor();

GSCF *find(char *name, List &list);
GSCF *add(char *qname, List &l, GSCF *(ctor)());
void add(List &l, GSCF *gscf);

void roll_up_alignments();
void place_segments();
void create_filler_groups();
void define_groups();
