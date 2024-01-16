from src.build import cowgol, export
from src.toolchains import TOOLCHAINS

items = {}
for toolchain in TOOLCHAINS:
    name = "cowwrap-with-" + toolchain.localname
    items["bin/" + name] = cowgol(
        name=name,
        toolchain=toolchain,
        srcs=[
            "include/coodecls.coh",
            "./main.cow",
            "./emitter.coh",
            "./reader.coh",
        ],
    )

export(name="cowwrap", items=items)
