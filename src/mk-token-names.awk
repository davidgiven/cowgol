BEGIN {
    count = 1
    print "const TOKEN_TYPE_MASK := 0xe000;"
    print "const TOKEN_VALUE_MASK := 0x1fff;"
    print "const TOKEN_TYPE_FILENAME := 0xc000;"
    print "const TOKEN_TYPE_LINENO := 0xe000;"
    print ""
    print "const TOKEN_FLAG_PRECEDENCE_MASK := 0b0000_1111;"
    print "const TOKEN_FLAG_BINARY_OP       := 0b0001_0000;"
    print "const TOKEN_FLAG_UNARY_OP        := 0b0010_0000;"
    print "const TOKEN_FLAG_EXPR_ENDER      := 0b0100_0000;"
    print "const TOKEN_FLAG_COMPARISON_OP   := 0b1000_0000;"
    print ""
}

/^[^ #].*$/ {
    print "const TOKEN_" $2 " := " count ";"
    if ($3 == "IDENTIFIER")
        count += 4
    else
        count += 5
}

/^ .*$/ {
    print "const TOKEN_" $1 " := " count ";"
}
