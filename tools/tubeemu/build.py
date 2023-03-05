from build.c import cprogram

cprogram(name="tubeemu", srcs=["./bbctube.c"], deps=["third_party/lib6502"])
