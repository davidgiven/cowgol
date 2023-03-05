from build.ab2 import Rule, export
from os.path import *
import config

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
        "bin/cowdis-tlcs90": "src/cowdis+cowdis-for-tlcs90-with-nncgen",
        "bin/cowbdmp": "src/cowbdmp+cowbdmp-with-nncgen",
        "bin/basicify": "src/misc+basicify-with-nncgen",
    },
    deps=[
        "third_party/djlink+djlink-programs",
        "examples",
        "tests",
        "dist/cpmz",
        "dist/cpm",
    ]
    + (["dist/msdos"] if config.has_msdos else [])
    + (["dist/ataritos"] if config.has_ataritos else [])
    + (["dist/bbct"] if config.has_bbct else []),
)
