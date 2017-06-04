BEGIN {
    print "sub install_identifiers()"
}

/^[^ #].*$/ {
    type = $3
    if (type == "")
        type = "THING_TOKEN";
    printf "install_identifier(\"%s\", TOKEN_%s, %s);\n", $1, $2, type
}

END {
    print "end sub;"
}
