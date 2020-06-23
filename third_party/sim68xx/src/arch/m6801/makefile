ROOT	= ../../..
INCROOT	= $(ROOT)/inc
INCDIR	= $(INCROOT)/arch
INCLUDES= -I$(INCDIR)/m6801 -I$(INCDIR)/m68xx -I$(INCDIR) -I$(INCROOT)
DEFINES	= -DUSE_PROTOTYPES
CFLAGS	= -g #-Wmissing-prototypes
CPPFLAGS= -DM6801 $(INCLUDES) $(DEFINES)
RM	= rm -f

# Chip specific object files
OFILES=\
	opfunc.o

default: $(OFILES)
all:     default
clean:
	-$(RM) $(OFILES)

