from build.ab2 import Rule, installable
from os.path import *

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
    },
    deps=[
        "third_party/djlink+djlink-programs"
    ])
