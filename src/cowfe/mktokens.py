tokens = [
    # Infix operators, with unary and diadic precedence.

    ("OPENPAREN", "(", 1, 1),
    ("CLOSEPAREN", ")", 1, 1),
    ("OPENSQ", "[", 0, 1),
    ("OPENSQ_TYPE", "[", 0, 1), # used when parsing array sizes
    ("CLOSESQ", "]", 0, 1),
    ("DOT", ".", 0, 1),
    ("NOT", "not", 2, 0),
    ("BYTESOF", "@bytesof", 2, 0),
    ("INDEXOF", "@indexof", 2, 0),
    ("SIZEOF", "@sizeof", 2, 0),
    ("NEXT", "@next", 2, 0),
    ("PREV", "@prev", 2, 0),
    ("AS", "as", 0, 2),
    ("TILDE", "~", 2, 0),
    ("STAR", "*", 0, 3),
    ("PERCENT", "%", 0, 3),
    ("SLASH", "/", 0, 3),
    ("PLUS", "+", 2, 4),
    ("MINUS", "-", 2, 4),
    ("LSHIFT", "<<", 0, 5),
    ("RSHIFT", ">>", 0, 5),
    ("LEOP", "<=", 0, 6),
    ("LTOP", "<", 0, 6),
    ("GEOP", ">=", 0, 6),
    ("GTOP", ">", 0, 6),
    ("EQOP", "==", 0, 7),
    ("NEOP", "!=", 0, 7),
    ("AMPERSAND", "&", 2, 8),
    ("CARET", "^", 0, 9),
    ("PIPE", "|", 0, 10),
    ("AND", "and", 0, 11),
    ("OR", "or", 0, 12),
    ("COMMA", ",", 0, 15),

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
    print(f'\t{(p[0]<<4) | p[1]},')
print("};")
