# Makefile 68xx simulators (works with GNU Make)
# Edit CC, CFLAGS to suit your system
#
# $Id$

include ./default.mk

# The sequence of subdirectories is important,
# since this represents hidden dependencies
SUBDIRS	= arch base boards

default: all
all h6303 install clean realclean depend:
	for i in $(SUBDIRS); do cd $$i; $(MAKE) CC=$(CC) 'CFLAGS=$(CFLAGS)' $@; cd ..; done

# Automatic generation of header files
.include:
	cd $(INCROOT); $(MAKE)

