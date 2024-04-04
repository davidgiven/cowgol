tokens = [
    # Infix operators, with precendence.

    ("NOT", "not", 2),
    ("STAR", "*", 3),
    ("PERCENT", "%", 3),
    ("SLASH", "/", 3),
    ("PLUS", "+", 4),
    ("MINUS", "-", 4),
    ("LSHIFT", "<<", 5),
    ("RSHIFT", ">>", 5),
    ("AMPERSAND", "&", 8),
    ("CARET", "^", 9),
    ("PIPE", "|", 10),

    ("OPENPAREN", "(", 1),
    ("CLOSEPAREN", ")", 1),
    ("OPENSQ", "[", 1),
    ("CLOSESQ", "]", 1),
    ("DOT", ".", 1),
    ("BYTESOF", "@bytesof", 2),
    ("INDEXOF", "@indexof", 2),
    ("SIZEOF", "@sizeof", 2),
    ("NEXT", "@next", 2),
    ("PREV", "@prev", 2),
    ("AS", "as", 2),
    ("TILDE", "~", 2),
    ("LEOP", "<=", 6),
    ("LTOP", "<", 6),
    ("GEOP", ">=", 6),
    ("GTOP", ">", 6),
    ("EQOP", "==", 7),
    ("NEOP", "!=", 7),
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

print("var token_precedence: uint8[] := {")
for n, r, *p in tokens:
    if len(p) == 0:
        break
    print(f'\t{p[0]},')
print("};")
