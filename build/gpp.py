from build.ab2 import Rule, normalrule, Targets, filenamesof
from os.path import *


@Rule
def gpp(self, name, srcs: Targets() = []):
    hdrs = set(["-I" + dirname(f) for f in filenamesof(srcs)])

    normalrule(
        replaces=self,
        ins=srcs,
        outleaves=[self.localname + ".i"],
        commands=[
            "gpp --nostdinc -U '' '' '(' ',' ')' '(' ')' '$$' '' -M '$$' '\\n' ' ' ' ' '\\n' '(' ')' "
            + (" ".join(hdrs))
            + " -o {outs} {ins[0]}"
        ],
    )
