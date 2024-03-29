from build.c import cprogram
from build.ab import Rule, Target, Targets, normalrule, flatten, filenamesof

cprogram(
    name="mkadfs",
    srcs=["./mkadfs.c"],
)

cprogram(
    name="mkdfs",
    srcs=["./mkdfs.c"],
)


@Rule
def tocpm(self, name, src: Target = None):
    normalrule(
        replaces=self,
        ins=["tools/tocpm.lua", src],
        outs=[self.localname + ".txt"],
        commands=["lua {ins[0]} < {ins[1]} > {outs}"],
        label="TOCPM",
    )


@Rule
def mkdfs(self, name, flags=[]):
    srcs = []
    cmdline = ["{ins[0]}", "-O", "{outs}"]
    for f in flatten(flags):
        if isinstance(f, Target):
            srcs += [f.convert(self)]
            cmdline += filenamesof(f.convert(self))
        else:
            cmdline += [f]

    normalrule(
        replaces=self,
        ins=["tools+mkdfs"] + srcs,
        outs=[self.localname + ".ssd"],
        commands=[" ".join(cmdline)],
        label="MKDFS",
    )
