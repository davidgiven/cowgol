vars.cflags = { "-g", "-Og" }
vars.ldflags = { "-lm", "-g" }

installable {
	name = "all",
	map = {
		["bin/cpmemu"] = "tools/cpmemu+cpmemu",
		["bin/tubeemu"] = "tools/tubeemu+tubeemu",
		["bin/zmac"] = "third_party/zmac+zmac",
		["bin/lemon"] = "third_party/lemon+lemon",
		["bin/lemon-cowgol"] = "third_party/lemon+lemon-cowgol",
		["bin/newgen"] = "tools/newgen+newgen",
		["bin/newgen-cowgol"] = "tools/newgen+newgen-cowgol",
	}
}

