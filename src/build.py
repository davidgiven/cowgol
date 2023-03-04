from build.ab2 import Rule, Target, Targets, installable
from build.c import cprogram


@Rule
def cgen(self, name, srcs: Targets() = []):
    cprogram(replaces=self, srcs=srcs + ["rt/cgen/cowgol.h"])


@Rule
def toolchain(
    self,
    name,
    id,
    cowfe: Target() = None,
    cowbe: Target() = None,
    cowlink: Target() = None,
    cowwrap: Target() = None,
):
    self.toolchain.cowfe = cowfe
    self.toolchain.cowbe = cowbe
    self.toolchain.cowlink = cowlink
    self.toolchain.cowwrap = cowwrap

    installable(
        replaces=self,
        items={
            "bin/cowfe-" + id: cowfe,
            "bin/cowbe-" + id: cowbe,
            "bin/cowlink-" + id: cowlink,
            "bin/cowwrap-" + id: cowwrap,
        },
    )
