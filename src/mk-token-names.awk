BEGIN {
    count = 1
    print "const TOKEN_TYPE_MASK := 0xe000;"
    print "const TOKEN_VALUE_MASK := 0x1fff;"
    print "const TOKEN_TYPE_NORMAL := 0x0000;"
    print "const TOKEN_TYPE_IDENTIFIER := 0x2000;"
    print "const TOKEN_TYPE_NUMBER := 0x4000;"
    print "const TOKEN_TYPE_STRING := 0x6000;"
    print "const TOKEN_TYPE_FILENAME := 0xc000;"
    print "const TOKEN_TYPE_LINENO := 0xe000;"
}

/^[^#].*$/ {
    print "const TOKEN_" $2 " := " count ";"
    count = count + 1;
}
