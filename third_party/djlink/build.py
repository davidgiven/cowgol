from build.c import cxxprogram
from build.ab2 import export

cxxprogram(
    name="objdump",
    srcs=["./objdump.cc"],
)

cxxprogram(
    name="bindiff",
    srcs=["./bindiff.cc"],
)

cxxprogram(
    name="djlink",
    srcs=[
        "./djlink.cc",
        "./fixups.cc",
        "./libs.cc",
        "./list.cc",
        "./map.cc",
        "./objs.cc",
        "./out.cc",
        "./quark.cc",
        "./segments.cc",
        "./stricmp.cc",
        "./symbols.cc",
        "./fixups.h",
        "./libs.h",
        "./link.h",
        "./list.h",
        "./map.h",
        "./objs.h",
        "./omf.h",
        "./out.h",
        "./quark.h",
        "./segments.h",
        "./stricmp.h",
        "./symbols.h",
        "./vars.h",
    ],
)

export(
    name="djlink-programs",
    items={
        "bin/objdump": "+objdump",
        "bin/bindiff": "+bindiff",
        "bin/djlink": "+djlink",
    },
)
