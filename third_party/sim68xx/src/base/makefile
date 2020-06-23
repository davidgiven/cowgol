# simulator base (command handler, file and terminal I/O, symbol table)
#
# $Id$


include ../default.mk

ROOT	= ../..
INCROOT	= $(ROOT)/inc
INCLUDES= -I$(INCROOT)/base -I$(INCROOT)/arch/m68xx
CPPFLAGS= $(DEFINES) $(INCLUDES)

#	fileio.o - in arch/m68xx

OBJS	=\
	error.o\
	fprinthe.o\
	main.o\
	symtab.o\
	tty.o\

SRCS	= $(OBJS:.o=.c)

default: all
all:     $(OBJS)
clean:
	-$(RM) *.o
realclean: clean
	-$(RM) $(OBJS) .depend *~ *.bak

# Do not always make depend file
depend .depend:
	$(COMPILE.c) -MM $(SRCS) > .depend

# Automatic generation of header files
.include:
	cd $(INCDIR); $(MAKE)

include .depend
