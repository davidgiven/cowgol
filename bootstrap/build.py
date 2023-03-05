from src.toolchains import cgen

cgen(name="cowfe", srcs=["./cowfe-cgen.bootstrap.c"])
cgen(name="cowbe", srcs=["./cowbe-cgen.bootstrap.c"])
cgen(name="cowlink", srcs=["./cowlink-cgen.bootstrap.c"])
cgen(name="cowwrap", srcs=["./cowwrap.bootstrap.c"])
