BEGIN {
    print "sub install_identifiers()"
}

/^[^ #].*$/ {
    text = $1
    name = $2
    type = "THING_TOKEN"
    flags = "0"
    i = 3
    while ($i != "") {
        if ($i ~ /[0-9]+/)
            flags = flags "|" $i
        else if ($i == "IDENTIFIER")
            type = "THING_IDENTIFIER"
        else if ($i == "UNARY")
            flags = flags "|TOKEN_FLAG_UNARY_OP"
        else if ($i == "BINARY")
            flags = flags "|TOKEN_FLAG_BINARY_OP"
        else if ($i == "COMPARISON")
            flags = flags "|TOKEN_FLAG_COMPARISON_OP"
        else if ($i == "ENDER")
            flags = flags "|TOKEN_FLAG_EXPR_ENDER"
        else {
            printf("unknown token flag %s\n", $i) > "/dev/stderr"
            exit(1);
        }
        i++;
    }
    printf "install_identifier(\"%s\", TOKEN_%s, %s, %s);\n", $1, $2, type, flags
}

END {
    print "end sub;"
}
