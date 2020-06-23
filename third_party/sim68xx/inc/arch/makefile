# This makefile used to automatically generate header files
# It doesn't do this anymore
# TODO : Cleanup of includes / headers / makefiles
SRCDIR	= ../../src/arch
HFILES	=\
	m68xx/alu.h\
	m68xx/io.h\
	m68xx/opfunc.h\


default: .include
all: .include

.include: $(HFILES)

$(HFILES): %.h: $(SRCDIR)/%.c
	filename=`echo "$@" | tr a-z A-Z | tr . _ | tr / _ ` ;\
	echo "/* Automagically generated `date` - dont edit */" > $@;\
	echo "#ifndef $$filename" >> $@;\
	echo "#define $$filename" >> $@;\
	echo "" >> $@;\
	$(MKPROTOS) $< >> $@;\
	echo "#endif /* $$filename */" >> $@
clean:
