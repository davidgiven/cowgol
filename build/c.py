from build.ab2 import (
    Rule,
    Targets,
    normalrule,
    filenamesof,
    filenameof,
    stripext,
    flatten,
)
from os.path import *


def cfileimpl(self, name, srcs, deps, suffix, commands, label, kind, flags):
    if not name:
        name = filenamesof(srcs)[1]

    dirs = []
    for d in deps:
        for f in filenamesof(d):
            if f.endswith(".h"):
                dirs += [dirname(f)]
        try:
            dirs += d.clibrary.dirs
        except:
            pass

    includeflags = set(["-I" + f for f in filenamesof(dirs)])

    outleaf = stripext(basename(name)) + suffix

    normalrule(
        replaces=self,
        ins=srcs,
        deps=deps,
        outs=[outleaf],
        label=label,
        commands=commands,
        vars={"+" + flags: flatten(includeflags)},
    )


@Rule
def cfile(
    self,
    name,
    srcs: Targets() = [],
    deps: Targets() = [],
    suffix=".o",
    commands=["$(CC) -c -o {outs[0]} {ins[0]} {vars.cflags}"],
    label="CC",
):
    cfileimpl(
        self, name, srcs, deps, suffix, commands, label, "cfile", "cflags"
    )


@Rule
def cxxfile(
    self,
    name,
    srcs: Targets() = [],
    deps: Targets() = [],
    suffix=".o",
    commands=["$(CXX) -c -o {outs[0]} {ins[0]} {vars.cxxflags}"],
    label="CXX",
):
    cfileimpl(
        self, name, srcs, deps, suffix, commands, label, "cxxfile", "cxxflags"
    )


def findsources(name, srcs, deps):
    ins = []
    for f in filenamesof(srcs):
        if f.endswith(".c") or f.endswith(".cc") or f.endswith(".cpp"):
            ins += [
                cfile(
                    name=name + "/" + basename(filenamesof(f)[0]),
                    srcs=[f],
                    deps=deps,
                )
            ]
    return ins


@Rule
def clibrary(
    self,
    name,
    srcs: Targets() = [],
    deps: Targets() = [],
    hdrs: Targets() = [],
    commands=["$(AR) cqs {outs[0]} {ins}"],
    label="AR",
):
    for f in filenamesof(srcs):
        if f.endswith(".h"):
            deps += [f]

    normalrule(
        replaces=self,
        ins=findsources(name, srcs, deps),
        outs=[basename(name) + ".a"],
        label=label,
        commands=commands,
    )

    dirs = set([dirname(f) for f in filenamesof(hdrs)])

    self.clibrary.hdrs = hdrs
    self.clibrary.dirs = dirs


def programimpl(self, name, srcs, deps, commands, label, filerule, kind):
    libraries = [d.outs for d in deps if hasattr(d, "clibrary")]

    for f in filenamesof(srcs):
        if f.endswith(".h"):
            deps += [f]

    normalrule(
        replaces=self,
        ins=findsources(name, srcs, deps),
        outs=[basename(name)],
        label=label,
        commands=commands,
        vars={"+ldflags": libraries},
    )


@Rule
def cprogram(
    self,
    name,
    srcs: Targets() = [],
    deps: Targets() = [],
    commands=["$(CC) -o {outs[0]} {ins} {vars.ldflags}"],
    label="CLINK",
):
    programimpl(self, name, srcs, deps, commands, label, cfile, "cprogram")


@Rule
def cxxprogram(
    self,
    name,
    srcs: Targets() = [],
    deps: Targets() = [],
    commands=["$(CXX) -o {outs[0]} {ins} {vars.ldflags}"],
    label="CXXLINK",
):
    programimpl(self, name, srcs, deps, commands, label, cxxfile, "cxxprogram")
