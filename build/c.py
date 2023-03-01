@Rule
def cfile(name,
          srcs: Targets() = [],
          deps: Targets() = [],
          suffix=".o",
          commands=[
              "$(CC) -c -o {outs[0]} {ins[0]} {deps} {vars.cflags}"
          ],
          label="CC"):
    if not name:
        name = filenamesof(srcs)[1]

    outleaf = basename(name) + suffix

    return normalrule(
        name=name,
        ins=srcs,
        deps=deps,
        outleaves=[outleaf],
        label=label,
        commands=commands)

