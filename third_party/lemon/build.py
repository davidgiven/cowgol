from build.ab2 import Rule
from build.c import cprogram

cprogram(
    name="lemon",
    srcs=["./lemon.c"],
)

cprogram(
    name="lemon-cowgol",
    srcs=["./lemon-cowgol.c"],
)
