# Source files for TOS emulator
SOURCEFILES = main.c gemdos.c gemdosmem.c gemdoscon.c gemdosfile.c xbios.c bios.c tossystem.c utils.c memory.c cpu.h

# Hand-written Musashi files
MUSASHIFILES = Musashi/m68kcpu.c Musashi/m68kdasm.c

# Generated Musashi files
MUSASHIGENERATEDFILES = gen/m68kops.c gen/m68kopac.c gen/m68kopdm.c gen/m68kopnz.c gen/m68kops.h

# Compilation flags
CC = gcc
LD = gcc
CFLAGS = -Igen -IMusashi -I. -Wall -pedantic
LDFLAGS = -lc

all: bin/tosemu

.PHONY: tests check

tests:
	$(MAKE) -C tests/

# Main emulator target
bin/tosemu: $(addsuffix .o,$(basename $(SOURCEFILES) $(MUSASHIFILES) $(MUSASHIGENERATEDFILES)))
	$(LD) $(LDFLAGS) $^ -o $@

# Needed to create a dependency to the generated files
main.o: main.c $(MUSASHIGENERATEDFILES)

# Files generated using m64kmake
$(MUSASHIGENERATEDFILES): bin/m64kmake Musashi/m68k_in.c
	mkdir -p gen/
	bin/m64kmake gen/ Musashi/m68k_in.c > /dev/null

# The m64kmake generator
bin/m64kmake: Musashi/m68kmake.c
	mkdir -p bin/
	$(CC) $(CFLAGS) $< -o $@

check: bin/tosemu
	$(MAKE) -C tests check

# Clean up the source tree
clean:
	$(RM) *.o Musashi/*.o
	$(RM) gen/*
	$(RM) bin/*
	$(RM) -d gen/ bin/
	$(MAKE) -C tests/ clean
