function yacc(e)
	rule {
		ins = e.ins,
		outs = e.outs,
		cmd = "yacc -t -o &1 --defines=&2 @1"
	}
end

function flex(e)
	rule {
		ins = e.ins,
		outs = e.outs,
		cmd = "flex -8 -Cem -s -t @1 > &1"
	}
end

