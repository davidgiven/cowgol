from build.c import cprogram

cprogram(
    name="obpemu", srcs=["./emulator.c", "./main.c"], vars={"+ldflags": "-lreadline"}
)
