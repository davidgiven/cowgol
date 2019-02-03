package(default_visibility = ["//visibility:public"])

load("//:config.bzl", "HOST_DATA", "TARGET_DATA")
load("//tests/compiler:rules.bzl", "bootstrap_test")

bootstrap_test(
    name = "registers",
    srcs = [
        "//tests/bootstrap:_test.cow",
        "//src:token_names",
        "registers.test.cow"
    ],
    deps = [
        "//src/arch/bbc:globals.cow",
        "//src/utils:stringtable.cow",
        "//src/utils:things.cow",
        "//src/utils:types.cow",
        "//src/utils:iops.cow",
        "//src/utils:symbols.cow",
        "//src/codegen:registers.cow",
        ":testfiles",
    ]
)

genrule(
    name = "testfiles",
    tools = ["//src/init:bbc_on_native"],
    outs = ["things.dat", "strings.dat", "iops.dat"],
    cmd = "p=$$PWD; cd $(@D) && $$p/$(location //src/init:bbc_on_native)"
)
