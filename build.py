from build.ab2 import Rule, installable
from os.path import *
from src.build import toolchain

toolchains = [
    toolchain(
        name="ncgen",
        id="ncgen",
        cowfe="bootstrap+cowfe",
        cowbe="bootstrap+cowbe",
        cowlink="bootstrap+cowlink",
        cowwrap="bootstrap+cowwrap",
    ),
    toolchain(
        name="nncgen",
        id="nncgen",
        cowfe="bootstrap+cowfe",
        cowbe="bootstrap+cowbe",
        cowlink="bootstrap+cowlink",
        cowwrap="bootstrap+cowwrap",
    ),
]

installable(
    name="all",
    items={
        "bin/bbctube": "tools/tubeemu+bbctube",
        "bin/obpemu": "tools/obpemu",
        "bin/mkadfs": "tools+mkadfs",
        "bin/mkdfs": "tools+mkdfs",
        "bin/apout": "third_party/apout",
        "bin/emu2": "third_party/emu2",
        "bin/zmac": "third_party/zmac",
        "bin/cpmemu": "tools/cpmemu",
        "bin/ataritosemu": "tools/ataritosemu",
        "bin/lx68kemu": "tools/lx68kemu",
        "bin/fuzix6303emu": "tools/fuzix6303emu",
    },
    deps=["third_party/djlink+djlink-programs"] + toolchains,
)
