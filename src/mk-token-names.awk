BEGIN {
    count = 1
    print "const TOKEN_MASK := 0xe000;"
    print "const TOKEN_IDENTIFIER := 0x0000;"
    print "const TOKEN_NUMBER := 0x2000;"
    print "const TOKEN_STRING := 0x4000;"
    print "const TOKEN_FILENAME := 0xc000;"
    print "const TOKEN_LINENO := 0xe000;"
}

/^[^#].*$/ {
    print "const TOKEN_" $2 " := " count ";"
    count = count + 1;
}
