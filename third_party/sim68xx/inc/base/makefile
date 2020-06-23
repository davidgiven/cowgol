#Makefile for automatic generation of header files
SRCDIR	= ../../src/base
HFILES	=\
	callstac.h\
	command.h\
	error.h\
	fileio.h\
	fprinthe.h\
	main.h\
	symtab.h\
	tty.h

# Program to extract function declarations from source files
MKPROTOS= mkptypes -e

# mkptypes don't care about #ifdef MAIN, so we pass source
# through the preprocessor to remove those sections
# Also, callstack must access architecture specific macros
CPPFLAGS=-I`pwd` -I../arch/m68xx

default: .include
all: .include

.include: $(HFILES)

$(HFILES): %.h: $(SRCDIR)/%.c
	filename=`echo "$@" | tr a-z A-Z | tr . _ | tr / _ ` ;\
	echo "/* Automagically generated `date` - dont edit */" > $@;\
	echo "#ifndef $$filename" >> $@;\
	echo "#define $$filename" >> $@;\
	echo "" >> $@;\
	$(CC) -E $(CPPFLAGS) $(CFLAGS) $< | $(MKPROTOS) >> $@;\
	echo "#endif /* $$filename */" >> $@
