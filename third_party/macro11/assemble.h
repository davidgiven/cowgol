
#ifndef ASSEMBLE__H
#define ASSEMBLE__H


#include "stream2.h"
#include "object.h"



#define DOT (current_pc->value)        /* Handy reference to the current location */

int             assemble_stack(
    STACK *stack,
    TEXT_RLD *tr);

#endif
