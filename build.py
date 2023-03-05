from build.ab2 import Rule, installable
from os.path import *

installable(
    name="all",
    items={
        "bbctube": "tools/tubeemu+bbctube",
    })
