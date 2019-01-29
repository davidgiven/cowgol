def objectify(name, src):
    native.genrule(
        name = name,
        srcs = [src],
        outs = ["{}.c".format(name)],
        tools = ["//scripts:objectify"],
        cmd = "$(location //scripts:objectify) %s < $< > $@" % name
    )

def pasmo(name, src):
    native.genrule(
        name = name,
        srcs = [src],
        outs = ["{}.img".format(name)],
        cmd = "pasmo $< $@"
    )

def lexify(name, src):
    native.genrule(
        name = name,
        srcs = [src],
        outs = ["{}.cow".format(name)],
        tools = ["//scripts:lexify.awk"],
        cmd = "flex -8 -Cem -B -t $< | gawk -f $(location //scripts:lexify.awk) > $@"
    )

# Note that this uses the terminology of the compiler; the host is the machine the
# resulting binary is supposed to run on (whereas the target is the machine the
# resulting binary is supposed to generate code for when run).
def cowgol(name, srcs, hd):
    host = hd["host"]
    if hd["host"] == "native":
        native.genrule(
            name = "{}_src".format(name),
            srcs = hd["libs"] + srcs,
            outs = ["{}.c".format(name)],
            tools = ["//bootstrap:bootstrap.lua"],
            cmd = "lua $(location //bootstrap:bootstrap.lua) $(SRCS) > $@"
        )

        native.cc_binary(
            name = name,
            srcs = [":{}_src".format(name)],
            deps = ["//bootstrap:cowgol_lib"],
            copts = ["-std=c1x", "-fms-extensions", "-ffunction-sections", "-fdata-sections"],
        )
    else:
        tools = ["init", "tokeniser2", "parser", "typechecker", "blockifier", "backendify",
            "classifier", "codegen", "placer", "emitter"]
        paths = ["//src/{}:{}_on_native".format(tool, host) for tool in tools]
        envs = ["COWGOL_{}=$(location //src/{}:{}_on_native)".format(tool.upper(), tool, host)
            for tool in tools]

        native.genrule(
            name = name,
            srcs = hd["libs"] + srcs,
            outs = ["{}{}".format(name, hd["extension"])],
            tools = ["//scripts:cowgol"] + paths,
            cmd = " ".join(envs +
                ["COWGOL_TOKENISER=$$COWGOL_TOKENISER2"] +
                ["$(location //scripts:cowgol) -a {}_on_native -o $@ $(SRCS)".format(host)]
            ),
        )

# vim: set expandtab:ts=2
