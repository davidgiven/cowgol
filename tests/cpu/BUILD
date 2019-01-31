package(default_visibility = ["//visibility:public"])

load("//:config.bzl", "HOST_DATA")
load("//scripts:rules.bzl", "cowgol", "simple_test")

[
    [
        cowgol(
            name = "{}-{}".format(test[0:-9], host),
            srcs = [test],
            hd = hd
        ),
        
        simple_test(
            name = "{}-{}-test".format(test[0:-9], host),
            srcs = [
                hd["testscript"],
                ":{}-{}".format(test[0:-9], host),
                "{}.good".format(test[0:-9]),
            ],
        )
    ]
    for (host, hd) in HOST_DATA.items() if hd["testscript"]
    for test in glob(["*.test.cow"])
]

