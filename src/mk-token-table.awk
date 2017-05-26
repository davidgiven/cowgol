BEGIN {
    printf "var token_table: [int8] := \"";
}

/^[^#].*$/ {
    printf $1 "\\0"
}

END {
    printf "\";\n"
}
