
#ifndef REPT_IRPC__H
#define REPT_IRPC__H

#include "stream2.h"


#ifndef REPT_IRPC__C
extern STREAM_VTBL rept_stream_vtbl;
extern STREAM_VTBL irp_stream_vtbl;
extern STREAM_VTBL irpc_stream_vtbl;
#endif

STREAM         *expand_rept(
    STACK *stack,
    char *cp);

STREAM         *expand_irp(
    STACK *stack,
    char *cp);

STREAM         *expand_irpc(
    STACK *stack,
    char *cp);

#endif
