from build.ab import export

export(
    name="msdos",
    items={
        "bin/dist/msdos/demo.bat": "./demo.bat",
        "bin/dist/msdos/mandel.cow": "examples/mandel.cow",
        "bin/dist/msdos/cowgol.coh": "rt/msdos/cowgol.coh",
        "bin/dist/msdos/common.coh": "rt/common.coh",
        "bin/dist/msdos/cowgol.coo": "rt/msdos+cowgolcoo",
        "bin/dist/msdos/cowfe.exe": "src/cowfe+cowfe-for-16bit-with-msdos",
        "bin/dist/msdos/cowbe.exe": "src/cowbe+cowbe-for-8086-with-msdos",
        "bin/dist/msdos/cowlink.exe": "src/cowlink+cowlink-for-msdos-with-msdos",
    },
)
