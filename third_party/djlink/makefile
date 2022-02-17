# Copyright (C) 1997 DJ Delorie, see COPYING.DJ for details

A := $(addsuffix .obj,$(basename $(wildcard *.asm)))

.PRECIOUS: %.obj m%.obj n%.obj

CXXFLAGS = -g -O2 -Wall -MMD

all : $A djlink.exe objdump.exe bindiff.exe

O = \
	djlink.o \
	fixups.o \
	libs.o \
	list.o \
	map.o \
	objs.o \
	out.o \
	quark.o \
	segments.o \
	stricmp.o \
	symbols.o \
	$X

djlink.exe : $O
	gcc -o $@ $^

objdump.exe : objdump.o
	gcc -o $@ $^

bindiff.exe : bindiff.o
	gcc -o $@ $^

%.exe : %.obj
	tlink $< \;

m%.obj : m%.asm
	masm /Ml $< \;

n%.obj : n%.asm
	nasm -f obj $<

clean :
	-rm -f *.obj *.exe *.map *.lst *.o

zip :
	@rm -f djlink.zip
	zip -9 djlink.zip readme.txt copying.dj copying makefile *.h *.cc

D = $(wildcard *.d)
ifneq ($D,)
include $D
endif