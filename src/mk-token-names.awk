BEGIN {
    count = 1
}

/^[^#].*$/ {
    print "const TOKEN_" $2 " := " count ";"
    count = count + 1;
}
