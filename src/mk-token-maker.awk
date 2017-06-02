BEGIN {
    print "sub install_identifiers()"
}

/^[^#].*$/ {
    printf "install_identifier(\"%s\", TOKEN_%s);\n", $1, $2
}

END {
    print "end sub;"
}
