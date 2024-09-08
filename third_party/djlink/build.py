from build.c import cxxprogram
from build.ab import export, Rule, Targets, simplerule

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
        "bin/objdump": ".+objdump",
        "bin/bindiff": ".+bindiff",
        "bin/djlink": ".+djlink",
    },
)


@Rule
def djlink(self, name, srcs: Targets = []):
    simplerule(
        replaces=self,
        ins=["third_party/djlink"] + srcs,
        outs=[f"={self.localname}.bin"],
        commands=["{ins[0]} -o {outs} {ins[1]} > /dev/null"],
        label="DJLINK",
    )
