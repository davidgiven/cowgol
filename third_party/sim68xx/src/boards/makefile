#
# To add a simulator for a new board, say x, add targets
# sim_x: x.o
# x.o: x.c ...
#  	$(COMPILE.c) -I$(INCROOT)/ARCH $< $(OUTPUT_OPTION)
# where ARCH is the type of CPU used (example: h6301 or m6805)
#
ROOT	= ../..
include $(ROOT)/src/default.mk

INCROOT	= $(ROOT)/inc
INCLUDES= -I$(INCROOT)/base -I$(INCROOT)/arch/m68xx
DEFINES	= -DUSE_PROTOTYPES
CPPFLAGS= $(DEFINES) $(INCLUDES)

# Executable programs
#EXES	= sim6301 sim6303 sim6805 sim6811 simnccpu simncpan
EXES	= sim6303
INSTDIR	= /home/local/bin

# Non-chip specific object files
BASE=../base
BASE_OBJS=\
	$(BASE)/error.o\
	$(BASE)/fprinthe.o\
	$(BASE)/main.o\
	$(BASE)/symtab.o\
	$(BASE)/tty.o

# Chip specific object file list
H6301=../arch/h6301
H6301_OBJS=\
	$(H6301)/callstac.o\
	$(H6301)/command.o\
	$(H6301)/cpu.o\
	$(H6301)/io.o\
	$(H6301)/fileio.o\
	$(H6301)/memory.o\
	$(H6301)/reg.o\
	$(H6301)/opfunc.o\
	$(H6301)/optab.o\
	$(H6301)/instr.o\
	$(H6301)/ireg.o\
	$(H6301)/sci.o\
	$(H6301)/timer.o

# Chip specific object file list
H6303=../arch/h6303
H6303_OBJS=\
	$(H6303)/callstac.o\
	$(H6303)/command.o\
	$(H6303)/cpu.o\
	$(H6303)/io.o\
	$(H6303)/fileio.o\
	$(H6303)/memory.o\
	$(H6303)/reg.o\
	$(H6303)/opfunc.o\
	$(H6303)/optab.o\
	$(H6303)/instr.o\
	$(H6303)/ireg.o\
	$(H6303)/sci.o\
	$(H6303)/timer.o

M6805= ../arch/m6805
M6805_OBJS=\
	$(M6805)/callstac.o\
	$(M6805)/command.o\
	$(M6805)/cpu.o\
	$(M6805)/io.o\
	$(M6805)/fileio.o\
	$(M6805)/memory.o\
	$(M6805)/reg.o\
	$(M6805)/opfunc.o\
	$(M6805)/optab.o\
	$(M6805)/instr.o\
	$(M6805)/ireg.o\
	$(M6805)/sci.o\
	$(M6805)/spi.o\
	$(M6805)/timer.o

#SRCS_6805_SIM=$(OBJS_6805_SIM:%.o=%.c)

M6811=../arch/m6811
M6811_OBJS=\
	$(M6811)/callstac.o\
	$(M6811)/command.o\
	$(M6811)/cpu.o\
	$(M6811)/io.o\
	$(M6811)/fileio.o\
	$(M6811)/memory.o\
	$(M6811)/reg.o\
	$(M6811)/opfunc.o\
	$(M6811)/optab.o\
	$(M6811)/instr.o\
	$(M6811)/ireg.o\
	$(M6811)/sci.o\
	$(M6811)/spi.o\
	$(M6811)/timer.o

default: all
all:     $(EXES)

install: $(EXES)
	for f in $(EXES); do\
		cp $$f $(INSTDIR)/$$f;\
		chmod 755 $(INSTDIR)/$$f;\
	done

clean:
	-$(RM) *.exe
	-$(RM) *.o
	-$(RM) $(EXES)
realclean: clean
	-$(RM) $(EXES) *.o *~ *.bak
depend:

#
# Bare-bone chip simulators
#
sim6301: noboard.o $(BASE_OBJS) $(H6301_OBJS)
	$(LINK.o) $(LDFLAGS) -o $@ $^
sim6303: noboard.o $(BASE_OBJS) $(H6303_OBJS)
	$(LINK.o) $(LDFLAGS) -o $@ $^
sim6805: noboard.o $(BASE_OBJS) $(M6805_OBJS)
	$(LINK.o) $(LDFLAGS) -o $@ $^
sim6811: noboard.o $(BASE_OBJS) $(M6811_OBJS)
	$(LINK.o) $(LDFLAGS) -o $@ $^
#
# Board simulators
#
# NC-CPU: 6811 based relay controller board
simnccpu: nccpu.o i2c_sim.o $(BASE_OBJS) $(M6811_OBJS)
	$(LINK.o) $(LDFLAGS) -o $@ $^
# NC-PAN: 6805 based switch panel board
simncpan: ncpan.o $(BASE_OBJS) $(M6805_OBJS)
	$(LINK.o) $(LDFLAGS) -o $@ $^
# NC24RE: 6811E9 single-chip board
sim_nc24re: nc24r.o $(BASE_OBJS) $(M6811_OBJS)
	$(LINK.o) $(LDFLAGS) -o $@ $^

# These are treated as OK library files
$(OBJS_BASE):
$(OBJS_6301_SIM):
$(OBJS_6303_SIM):
$(OBJS_6805_SIM):
$(OBJS_6811_SIM):

noboard.o: noboard.c
	$(COMPILE.c) $< $(OUTPUT_OPTION)
nccpu.o: nccpu.c
	$(COMPILE.c) -I$(INCROOT)/arch/m6811 $< $(OUTPUT_OPTION)
ncpan.o: ncpan.c
	$(COMPILE.c) -I$(INCROOT)/arch/m6805 $< $(OUTPUT_OPTION)
nc24r.o: nc24r.c
	$(COMPILE.c) -I$(INCROOT)/arch/m6811 $< $(OUTPUT_OPTION)
