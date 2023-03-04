from build.c import cprogram

cprogram(
    name="mkadfs",
    srcs=["./mkadfs.c"],
)

cprogram(
    name="mkdfs",
    srcs=["./mkdfs.c"],
)
