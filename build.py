from build.ab2 import Rule, export
from os.path import *

export(
    name="all",
    items={
        "bin/tubeemu": "tools/tubeemu",
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
    deps=["third_party/djlink+djlink-programs", "examples", "tests"],
)
