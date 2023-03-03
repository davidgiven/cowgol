from build.c import cprogram

cprogram(
    name="bbctube",
    srcs=["./bbctube.c"],
    deps=[
        "third_party/lib6502"
    ]
)
