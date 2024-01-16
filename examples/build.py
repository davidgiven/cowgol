from src.build import cowgol
from src.toolchains import TOOLCHAINS
from build.ab2 import export

PROGRAMS = [
    "argv",
    "file",
    "filetester",
    "helloworld",
    "icando",
    "mandel",
]

items = {}
for toolchain in TOOLCHAINS:
    toolchain.materialise()
    for prog in PROGRAMS:
        t = cowgol(
            name=prog + "-for-" + toolchain.localname,
            srcs="./" + prog + ".cow",
            toolchain=toolchain,
        )

        items[
            f"bin/examples/{prog}-for-{toolchain.localname}{toolchain.binext}"
        ] = t

export(name="examples", items=items)
