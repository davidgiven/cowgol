package(default_visibility = ["//visibility:public"])

load("//:config.bzl", "HOST_DATA", "TARGET_DATA")
load("//scripts:rules.bzl", "cowgol")

[
	cowgol(
		name = "{}_on_{}".format(target, host),
		srcs = td["globals"] + [
			"//src/utils:stringtable.cow",
			"//src/utils:things.cow",
			"//src/utils:types.cow",
			"//src/utils:iops.cow",
			"iopreader.cow",
			"iopshower.cow",
		],
		hd = hd
	)
	for (host, hd) in HOST_DATA.items()
	for (target, td) in TARGET_DATA.items()
]
