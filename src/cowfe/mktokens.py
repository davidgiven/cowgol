tokens = [
    # Infix operators, with precendence.

    ("OPENPAREN", "(", 1),
    ("CLOSEPAREN", ")", 1),
    ("OPENSQ", "[", 1),
    ("CLOSESQ", "]", 1),
    ("DOT", ".", 1),
    ("NOT", "not", "PREFIX_OP|2"),
    ("BYTESOF", "@bytesof", "PREFIX_OP|2"),
    ("INDEXOF", "@indexof", "PREFIX_OP|2"),
    ("SIZEOF", "@sizeof", "PREFIX_OP|2"),
    ("NEXT", "@next", "PREFIX_OP|2"),
    ("PREV", "@prev", "PREFIX_OP|2"),
    ("AS", "as", 2),
    ("TILDE", "~", "PREFIX_OP|2"),
    ("STAR", "*", "INFIX_OP|3"),
    ("PERCENT", "%", "INFIX_OP|3"),
    ("SLASH", "/", "INFIX_OP|3"),
    ("PLUS", "+", "INFIX_OP|4"),
    ("MINUS", "-", "INFIX_OP|4"),
    ("LSHIFT", "<<", "INFIX_OP|5"),
    ("RSHIFT", ">>", "INFIX_OP|5"),
    ("LEOP", "<=", 6),
    ("LTOP", "<", 6),
    ("GEOP", ">=", 6),
    ("GTOP", ">", 6),
    ("EQOP", "==", 7),
    ("NEOP", "!=", 7),
    ("AMPERSAND", "&", "INFIX_OP|8"),
    ("CARET", "^", "INFIX_OP|9"),
    ("PIPE", "|", "INFIX_OP|10"),
    ("AND", "and", 11),
    ("OR", "or", 12),
    ("COMMA", ",", 15),

    # Other tokens, without precedence.

    ("ID", " identifier"),
    ("STRING", " string"),
    ("NUMBER", " number"),
    ("TYPE", " type"),
    ("SEMICOLON", ";"),
    ("OPENBR", "{"),
    ("CLOSEBR", "}"),
    ("ASSIGN", ":="),
    ("COLON", ":"),
    ("ALIAS", "@alias"),
    ("ASM", "@asm"),
    ("AT", "@at"),
    ("DECL", "@decl"),
    ("IMPL", "@impl"),
    ("BREAK", "break"),
    ("CASE", "case"),
    ("CONST", "const"),
    ("CONTINUE", "continue"),
    ("ELSE", "else"),
    ("ELSEIF", "elseif"),
    ("END", "end"),
    ("EXTERN", "extern"),
    ("IF", "if"),
    ("IS", "is"),
    ("INT", "int"),
    ("INTERFACE", "interface"),
    ("IMPLEMENTS", "implements"),
    ("LOOP", "loop"),
    ("RECORD", "record"),
    ("RETURN", "return"),
    ("SUB", "sub"),
    ("THEN", "then"),
    ("TYPEDEF", "typedef"),
    ("VAR", "var"),
    ("WHEN", "when"),
    ("WHILE", "while"),
    ("INCLUDE", "include"),
    ("EOF", " EOF"),
]

id = 0
for n, r, *unused in tokens:
    print(f"const {n} := {id};")
    id = id + 1

print("var token_names: string[] := {")
for n, r, *unused in tokens:
    print(f'\t"{r}",')
print("};")

print("var token_flags: uint8[] := {")
for n, r, *p in tokens:
    if len(p) == 0:
        break
    print(f'\t{p[0]},')
print("};")
