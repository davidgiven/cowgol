from build.c import clibrary

clibrary(name="rc2014emu", srcs=["./6800.c"], hdrs={"6800.h":"./6800.h"})
