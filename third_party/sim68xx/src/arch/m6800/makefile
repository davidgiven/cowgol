ROOT	= ../../..
INCROOT	= $(ROOT)/inc
INCDIR	= $(INCROOT)/arch
INCLUDES= -I$(INCDIR)/m6800 -I$(INCDIR)/m68xx -I$(INCDIR) -I$(INCROOT)
DEFINES	= -DUSE_PROTOTYPES
CFLAGS	= -g #-Wmissing-prototypes
CPPFLAGS= -DM6800 $(INCLUDES) $(DEFINES)
RM	= rm -f

# Chip specific object files
OFILES=\
	memory.o\
	iregtab.o\
	reg.o\
	opfunc.o\
	optab.o\
	instr.o


default: $(OFILES)
all:     default
clean:
	-$(RM) *.o

memory.o: ../m68xx/memory.c
	$(CC) $(CPPFLAGS) $(CFLAGS) -c ../m68xx/memory.c
reg.o: ../m68xx/reg.c
	$(CC) $(CPPFLAGS) $(CFLAGS) -c ../m68xx/reg.c


# Preliminary use 6301 opcode table for 6800
optab.o: ../h6301/optab.c
	$(CC) $(CPPFLAGS) $(CFLAGS) -c ../h6301/optab.c
instr.o: ../h6301/instr.c
	$(CC) $(CPPFLAGS) $(CFLAGS) -c ../h6301/instr.c

#.c.o:
#	$(CC) $(CPPFLAGS) $(CFLAGS) -c $<

