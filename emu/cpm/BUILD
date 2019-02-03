package(default_visibility = ["//visibility:public"])

load("//scripts:rules.bzl", "objectify", "pasmo")

cc_binary(
	name = "cpm",
	srcs = glob(["*.c", "*.h"]) + [
		":ccp",
		":bdos"
	],
	linkopts = [
		"-lz80ex",
		"-lz80ex_dasm",
		"-lreadline"
	],
	copts = ["-std=c99"],
)

pasmo(
	name = "ccp_img",
	src = "ccp.asm"
)

objectify(
	name = "ccp",
	src = ":ccp_img"
)

pasmo(
	name = "bdos_img",
	src = "bdos.asm"
)

objectify(
	name = "bdos",
	src = ":bdos_img"
)

