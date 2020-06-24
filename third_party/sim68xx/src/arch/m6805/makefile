include ../../default.mk

ROOT	= ../../..
INCROOT	= $(ROOT)/inc
# m6811 include dir is for sci.h and spi.h
INCLUDES= -I$(INCROOT)/arch/m6805 -I$(INCROOT)/arch/m6811 -I$(INCROOT)/arch/m68xx -I$(INCROOT)/base
DEFINES	= -DM6805 -DUSE_PROTOTYPES -DHAS_SCI -DHAS_SPI
CPPFLAGS=  $(DEFINES) $(INCLUDES) 

# Directories to parent source files
BASE	= ../../base
M68XX	= ../m68xx
M6811	= ../m6811

# Non-chip specific object files
OFILES_BASE=\
	callstac.o\
	command.o\
	cpu.o\
	fileio.o

# Chip specific object files
OFILES_M68XX=\
	alu.o\
	memory.o\
	io.o\
	reg.o\
	opfunc.o

OFILES_M6805=\
	instr.o\
	ireg.o\
	optab.o\
	timer.o

OFILES_M6811=\
	sci.o\
	spi.o

OFILES	= $(OFILES_BASE) $(OFILES_M68XX) $(OFILES_M6811) $(OFILES_M6805)

CFILES_BASE	= $(OFILES_BASE:%.o=$(BASE)/%.c)
CFILES_M68XX	= $(OFILES_M68XX:%.o=$(M68XX)/%.c)
CFILES_M6811	= $(OFILES_M6811:%.o=$(M6811)/%.c)
CFILES_M6805	= $(OFILES_M6805:%.o=%.c)
CFILES		= $(CFILES_BASE) $(CFILES_M68XX) $(CFILES_M6811) $(CFILES_M6805)


default: all
all:     $(OFILES)
clean:
	-$(RM) *.o
realclean: clean
	-$(RM) .depend *~
depend .depend:
	$(COMPILE.c) -MM $(CFILES) > .depend
include .depend

$(OFILES_BASE): %.o: $(BASE)/%.c
	$(COMPILE.c) $< $(OUTPUT_OPTION)
$(OFILES_M68XX): %.o: $(M68XX)/%.c
	$(COMPILE.c) $< $(OUTPUT_OPTION)
$(OFILES_M6811): %.o: $(M6811)/%.c
	$(COMPILE.c) $< $(OUTPUT_OPTION)
$(OFILES_M6805): %.o: %.c
	$(COMPILE.c) $< $(OUTPUT_OPTION)

