cprogram {
	ins = { "third_party/lemon/lemon.c" },
	outs = { "bin/lemon" }
}

cprogram {
	ins = { "third_party/lemon/lemon-cowgol.c" },
	outs = { "bin/lemon-cowgol" }
}

function lemon(e)
	local dir = e.outs[1]:gsub("/[^/]*$", "").."/tmp"
	rule {
		ins = concat {
			"bin/lemon",
			"third_party/lemon/lempar.c",
			e.ins,
		},
		outs = e.outs,
		cmd = "mkdir -p "..dir.." && @1 -T@2 -d"..dir.." @3"
			.." && mv "..dir.."/parser.c &1"
			.." && mv "..dir.."/parser.h &2"
	}
end

function lemoncowgol(e)
	local dir = e.outs[1]:gsub("/[^/]*$", "").."/tmp"
	rule {
		ins = concat {
			"bin/lemon-cowgol",
			"src/cowcom/lempar.coh",
			e.ins,
		},
		outs = e.outs,
		cmd = "mkdir -p "..dir.." && @1 -T@2 -d"..dir.." @3"
			.." && mv "..dir.."/parser.c &1"
			.." && mv "..dir.."/parser.h &2"
	}
end

