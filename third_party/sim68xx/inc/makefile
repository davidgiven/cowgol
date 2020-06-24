#Makefile for automatic generation of header files
SUBDIRS	= arch base 

default: .include
all: .include

.include clean:
	for f in $(SUBDIRS); do cd $$f; $(MAKE) $@; cd ..; done
