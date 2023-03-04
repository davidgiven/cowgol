from build.ab2 import Rule, Targets, normalrule, filenamesof, filenameof, stripext, debug, flatten
from os.path import *


def cfileimpl(self, name, srcs, deps, suffix, commands, label, kind, flags):
    if not name:
        name = filenamesof(srcs)[1]

    headers = [filenamesof(d.clibrary.hdrs) for d in deps if d.clibrary]
    headers = set(["-I"+dirname(f) for f in flatten(headers)])

    outleaf = stripext(basename(name)) + suffix

    return normalrule(
        name=name + "/" + kind,
        ins=srcs,
        deps=deps,
        outleaves=[outleaf],
        label=label,
        commands=commands,
        vars={
            "+"+flags: flatten(headers)
        }
    )


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
    return cfileimpl(self, name, srcs, deps, suffix, commands, label, "cfile", "cflags")


@Rule
def cxxfile(self,
            name,
            srcs: Targets() = [],
            deps: Targets() = [],
            suffix=".o",
            commands=[
                "$(CXX) -c -o {outs[0]} {ins[0]} {vars.cxxflags}"
            ],
            label="CXX"):
    return cfileimpl(self, name, srcs, deps, suffix, commands, label, "cxxfile", "cxxflags")


def findsources(name, srcs, deps):
    ins = []
    for i in srcs:
        f = filenameof(i)
        if f.endswith(".c") or f.endswith(".cc"):
            ins += [
                cfile(
                    name=name+"/"+basename(filenamesof(f)[0]),
                    srcs=[f],
                    deps=deps
                )
            ]
    return ins

    
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

    r = normalrule(
        name=name+"/clibrary",
        ins=findsources(name, srcs, deps),
        outleaves=[basename(name) + ".a"],
        label=label,
        commands=commands)
    r.materialise()

    self.ins = [r]
    self.outs = r.outs
    self.clibrary.hdrs = hdrs


def programimpl(self, name, srcs, deps, commands, label, filerule, kind):
    libraries = [d.outs for d in deps if d.clibrary]

    return normalrule(
        name=name+"/"+kind,
        ins=findsources(name, srcs, deps),
        outleaves=[basename(name)],
        label=label,
        commands=commands,
        vars={
            "+ldflags": libraries
        })


@Rule
def cprogram(self,
             name,
             srcs: Targets() = [],
             deps: Targets() = [],
             commands=[
                 "$(CC) -o {outs[0]} {ins} {vars.ldflags}"
             ],
             label="CLINK"):
    return programimpl(self, name, srcs, deps, commands, label, cfile, "cprogram")


@Rule
def cxxprogram(self,
               name,
               srcs: Targets() = [],
               deps: Targets() = [],
               commands=[
                   "$(CXX) -o {outs[0]} {ins} {vars.ldflags}"
               ],
               label="CXXLINK"):
    return programimpl(self, name, srcs, deps, commands, label, cxxfile, "cxxprogram")
