BEGIN {
    count = 1
    print "const TOKEN_TYPE_MASK := 0xe000;"
    print "const TOKEN_VALUE_MASK := 0x1fff;"
    print "const TOKEN_TYPE_FILENAME := 0xc000;"
    print "const TOKEN_TYPE_LINENO := 0xe000;"
}

/^[^ #].*$/ {
    print "const TOKEN_" $2 " := " count ";"
    count = count + 4;
}

/^ .*$/ {
    print "const TOKEN_" $1 " := " count ";"
}
