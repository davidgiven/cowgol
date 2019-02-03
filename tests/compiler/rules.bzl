load("//:config.bzl", "HOST_DATA")
load("//scripts:rules.bzl", "cowgol", "diff_test")

def bootstrap_test(name, srcs, deps=[]):
    cowgol(
        name = "{}-exe".format(name),
        srcs = srcs,
        hd = HOST_DATA["native"],
        deps = deps
    )

    native.genrule(
        name = "{}-out".format(name),
        srcs = deps,
        tools = ["{}-exe".format(name)],
        outs = ["{}-out.txt".format(name)],
        cmd = "p=$$PWD; cd $(@D) && $$p/$(location {}-exe) > $$p/$@".format(name)
    )

    diff_test(
        name = "{}-test".format(name),
        input = ":{}-out".format(name),
        good = "{}.good".format(name)
    )

