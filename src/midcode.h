#ifndef MIDCODE_H
#define MIDCODE_H

struct midcode;

#include "midcodes.h"

/* Note: DESTROYS the tree passed in */
extern void generate(struct midnode* node);
extern void discard(struct midnode* node);

#define STATE_TYPE void*
typedef struct midnode* NODEPTR_TYPE;
typedef struct midnode* Tree;
#define LEFT_CHILD(p) ((p)->left)
#define RIGHT_CHILD(p) ((p)->right)
#define PANIC printf
#define STATE_LABEL(p) ((p)->iburg)
#define OP_LABEL(p) ((p)->op)

#endif
