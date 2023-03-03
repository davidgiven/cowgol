from build.ab2 import Rule, Targets, normalrule, filenamesof, stripext, debug, flatten
from os.path import *


@Rule
def cfile(self,
          name,
          srcs: Targets() = [],
          deps: Targets() = [],
          suffix=".o",
          commands=[
              "$(CC) -c -o {outs[0]} {ins[0]} {vars.cflags}"
          ],
          label="CC"):
    if not name:
        name = filenamesof(srcs)[1]

    headers = [filenamesof(d.clibrary.hdrs) for d in deps if d.clibrary]
    headers = set(["-I"+dirname(f) for f in flatten(headers)])

    outleaf = stripext(basename(name)) + suffix

    return normalrule(
        name=name + "/cfile",
        ins=srcs,
        deps=deps,
        outleaves=[outleaf],
        label=label,
        commands=commands,
            vars={
                "+cflags": flatten(headers)
            }
        )


@Rule
def clibrary(self,
             name,
             srcs: Targets() = [],
             deps: Targets() = [],
             hdrs: Targets() = [],
             commands=[
                 "$(AR) cqs {outs[0]} {ins}"
             ],
             label="AR"):

    ins = [
        cfile(
            name=name+"/"+basename(filenamesof(f)[0]),
            srcs=[f],
            deps=deps
        )
        for f in srcs
    ]

    r = normalrule(
        name=name+"/clibrary",
        ins=ins,
        outleaves=[basename(name) + ".a"],
        label=label,
        commands=commands)
    r.materialise()

    self.ins = [r]
    self.outs = r.outs
    self.clibrary.hdrs = hdrs


@Rule
def cprogram(self,
             name,
             srcs: Targets() = [],
             deps: Targets() = [],
             commands=[
                 "$(CC) -o {outs[0]} {ins} {vars.libraries}"
             ],
             label="CLINK"):
    libraries = [d.outs for d in deps if d.clibrary]

    ins = [
        cfile(
            name=name+"/"+basename(filenamesof(f)[0]),
            srcs=[f],
            deps=deps,
        )
        for f in srcs
    ]

    return normalrule(
        name=name+"/cprogram",
        ins=ins,
        outleaves=[basename(name)],
        label=label,
        commands=commands,
        vars={
            "+libraries": libraries
        })
