HOST_DATA = {
	"native": {
		"host": "native",
		"libs": [
            "//src/arch/bootstrap:host.cow",
			"//src:string_lib.cow",
			"//src/arch/bootstrap:fcb.cow",
            "//src/utils:names.cow"
        ],
		"extension": "",
		"testscript": None,
		"testbin": None
	},

	"bbc": {
        "host": "bbc",
		"libs": [
            "//src/arch/bbc:host.cow",
            "//src/arch/bbc/lib:mos.cow",
            "//src/arch/6502/lib:runtime.cow",
            "//src/arch/bbc/lib:runtime.cow",
            "//src/arch/common/lib:runtime.cow",
			"//src:string_lib.cow",
            "//src/arch/bbc/lib:fcb.cow",
            "//src/arch/bbc/lib:fileio.cow",
            "//src/arch/bbc/lib:argv.cow",
            "//src/arch/bbc:names.cow",
        ],
		"extension": ".bbc",
		"testscript": "//scripts/bbc:bbctube_test",
		"testbin": "//bin:bbctube",
	},

	"cpmz": {
        "host": "cpmz",
		"libs": [
            "//src/arch/cpmz:host.cow",
            "//src/arch/cpmz/lib:runtime.cow",
            "//src/arch/z80/lib:runtime.cow",
            "//src/arch/common/lib:runtime.cow",
			"//src:string_lib.cow",
            "//src/arch/cpmz/lib:fcb.cow",
            "//src/arch/common/lib:fileio.cow",
            "//src/arch/cpmz/lib:argv.cow",
            "//src/arch/cpmz:names.cow",
        ],
		"extension": ".cpmz",
		"testscript": "//scripts/cpmz:cpmz_test",
		"testbin": "//bin:cpmz",
	},

	"fuzixz80": {
        "host": "fuzixz80",
		"libs": [
            "//src/arch/fuzixz80:host.cow",
            "//src/arch/fuzixz80/lib:runtime.cow",
            "//src/arch/z80/lib:runtime.cow",
            "//src/arch/common/lib:runtime.cow",
            "//src/arch/fuzixz80/lib:syscalls.cow",
            "//src/arch/fuzixz80/lib:wrappedsys.cow",
			"//src:string_lib.cow",
            "//src/arch/fuzixz80/lib:fcb.cow",
            "//src/arch/common/lib:fileio.cow",
            "//src/arch/fuzixz80/lib:argv.cow",
            "//src/arch/fuzixz80:names.cow",
        ],
		"extension": ".fuzixz80",
		"testscript": None,
		"testbin": "//bin:fuzixz80",
	},
}

TARGET_DATA = {
	"bbc": {
		"target": "bbc",
		"globals": ["//src/arch/bbc:globals.cow"],
		"classifier": ["//src/arch/6502:classifier.cow"],
		"simplifier": ["//src/arch/6502:simplifier.cow"],
		"placer": ["//src/arch/6502:placer.cow"],
		"emitter": [
			"//src/arch/6502:emitter.cow",
			"//src/arch/bbc:emitter.cow",
		],
		"codegen": [
            "//src/arch/6502:codegen0.cow",
            "//src/arch/6502:codegen1.cow",
            "//src/arch/6502:codegen2_8bit.cow",
            "//src/arch/6502:codegen2_wide.cow",
            "//src/arch/6502:codegen2.cow",
        ]
	},

    "c64": {
        "target": "c64",
        "globals": ["//src/arch/c64:globals.cow"],
		"classifier": ["//src/arch/6502:classifier.cow"],
		"simplifier": ["//src/arch/6502:simplifier.cow"],
		"placer": ["//src/arch/6502:placer.cow"],
		"emitter": [
			"//src/arch/6502:emitter.cow",
			"//src/arch/c64:emitter.cow",
		],
		"codegen": [
            "//src/arch/6502:codegen0.cow",
            "//src/arch/6502:codegen1.cow",
            "//src/arch/6502:codegen2_8bit.cow",
            "//src/arch/6502:codegen2_wide.cow",
            "//src/arch/6502:codegen2.cow",
        ]
	},

    "cpmz": {
        "target": "cpmz",
        "globals": ["//src/arch/cpmz:globals.cow"],
		"classifier": ["//src/arch/z80:classifier.cow"],
		"simplifier": ["//src/arch/z80:simplifier.cow"],
		"placer": ["//src/arch/z80:placer.cow"],
		"emitter": [
			"//src/arch/z80:emitter.cow",
			"//src/arch/cpmz:emitter.cow",
		],
		"codegen": [
            "//src/arch/z80:codegen0.cow",
			"//src/codegen:registers.cow",
            "//src/arch/z80:codegen1.cow",
            "//src/arch/z80:codegen2_8bit.cow",
            "//src/arch/z80:codegen2_16bit.cow",
            "//src/arch/z80:codegen2_wide.cow",
            "//src/arch/z80:codegen2_helper.cow",
            "//src/arch/z80:codegen2.cow",
        ]
	},

    "fuzixz80": {
        "target": "fuzixz80",
        "globals": ["//src/arch/fuzixz80:globals.cow"],
		"classifier": ["//src/arch/z80:classifier.cow"],
		"simplifier": ["//src/arch/z80:simplifier.cow"],
		"placer": ["//src/arch/z80:placer.cow"],
		"emitter": [
			"//src/arch/z80:emitter.cow",
			"//src/arch/fuzixz80:emitter.cow",
		],
		"codegen": [
            "//src/arch/z80:codegen0.cow",
			"//src/codegen:registers.cow",
            "//src/arch/z80:codegen1.cow",
            "//src/arch/z80:codegen2_8bit.cow",
            "//src/arch/z80:codegen2_16bit.cow",
            "//src/arch/z80:codegen2_wide.cow",
            "//src/arch/z80:codegen2_helper.cow",
            "//src/arch/z80:codegen2.cow",
        ]
	},

    "spectrum": {
        "target": "spectrum",
        "globals": ["//src/arch/spectrum:globals.cow"],
		"classifier": ["//src/arch/z80:classifier.cow"],
		"simplifier": ["//src/arch/z80:simplifier.cow"],
		"placer": ["//src/arch/z80:placer.cow"],
		"emitter": [
			"//src/arch/z80:emitter.cow",
			"//src/arch/spectrum:emitter.cow",
		],
		"codegen": [
            "//src/arch/z80:codegen0.cow",
			"//src/codegen:registers.cow",
            "//src/arch/z80:codegen1.cow",
            "//src/arch/z80:codegen2_8bit.cow",
            "//src/arch/z80:codegen2_16bit.cow",
            "//src/arch/z80:codegen2_wide.cow",
            "//src/arch/z80:codegen2_helper.cow",
            "//src/arch/z80:codegen2.cow",
        ]
	}

}

