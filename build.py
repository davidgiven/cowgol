simplerule(
    name="main",
    ins=["README.md"],
    outs=["x"],
    commands=[
        "cp {ins} {outs}"
    ]
)

simplerule(
    name="y",
    ins=["+main"],
    outs=["y"],
    commands=[
        "cp {ins} {outs}"
    ],
    label="Y"
)

