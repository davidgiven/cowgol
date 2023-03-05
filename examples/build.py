from src.build import TOOLCHAINS, cowgol
from build.ab2 import export

PROGRAMS = [
    "argv",
    "cowcalc",
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
