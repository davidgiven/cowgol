from build.ab import Rule, export
from os.path import *
import config

export(
    name="all",
    items={
        "bin/amigacpmemu": "tools/amigacpmemu",
        "bin/apout": "third_party/apout",
        "bin/ataritosemu": "tools/ataritosemu",
        "bin/basicify": "src/misc+basicify-with-nncgen",
        "bin/cowbdmp": "src/cowbdmp+cowbdmp-with-nncgen",
        "bin/cowdis-tlcs90": "src/cowdis+cowdis-for-tlcs90-with-nncgen",
        "bin/cpmemu": "tools/cpmemu",
        "bin/emu2": "third_party/emu2",
        "bin/fuzix6303emu": "tools/fuzix6303emu",
        "bin/lx68kemu": "tools/lx68kemu",
        "bin/mkadfs": "tools+mkadfs",
        "bin/mkdfs": "tools+mkdfs",
        "bin/obpemu": "tools/obpemu",
        "bin/tubeemu": "tools/tubeemu",
        "bin/zmac": "third_party/zmac",
    },
    deps=[
        "dist/cpm",
        "dist/cpmz",
        "examples",
        "src/cowasm",
        "src/cowbe",
        "src/cowfe",
        "src/cowlink",
        "src/cowwrap",
        "tests",
        "third_party/djlink+djlink-programs",
    ]
    + (["dist/msdos"] if config.has_msdos else [])
    + (["dist/ataritos"] if config.has_ataritos else [])
    + (["dist/amigacpm"] if config.has_amigacpm else [])
    + (["dist/bbct"] if config.has_bbct else []),
)
