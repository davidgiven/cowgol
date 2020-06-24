ARCH	= 68xx
ROOT	= ../..
INCROOT	= $(ROOT)/inc
INCDIR	= $(INCROOT)/$(ARCH)
INCLUDES= -I$(INCDIR) -I$(INCROOT)
DEFINES	= -DUSE_PROTOTYPES
#CFLAGS	= -g -Wmissing-prototypes
CPPFLAGS= $(INCLUDES) $(DEFINES)
RM	= rm -f

SUBDIRS	= m6800 m6801 h6301 m6805 m6811
LIBFILES=\
	alu.o\
	m6800/opfunc.o\
	m6801/opfunc.o\
	h6301/opfunc.o\
	m6805/opfunc.o\
	m6811/opfunc.o

default: all
all:     sim6800 sim6301 sim6805 sim6811
clean: cleandir
	for f in $(SUBDIRS); do\
		cd $$f; pwd; $(MAKE) $@; cd ..;\
	done
cleandir:
	-$(RM) *.o *.a *~ *.bak
cleanlib:
	-$(RM) lib68xx.a $(LIBFILES)

# Executable targets
sim6800:  alu.o lib68xx.a ../libsim.a 
	cd m6800; $(MAKE) $@; cd ..
sim6805: alu.o  lib68xx.a ../libsim.a 
	cd m6805; $(MAKE) $@; cd ..
sim6301: alu.o  lib68xx.a ../libsim.a 
	cd h6301; $(MAKE) $@; cd ..
sim6811: alu.o  lib68xx.a ../libsim.a 
	cd m6811; $(MAKE) $@; cd ..

# Library with components
lib68xx.a: $(LIBFILES)
	ar rv $@ $(LIBFILES)
	-ranlib $@
m6800/opfunc.o:
	cd m6800; $(MAKE) opfunc.o; cd ..
m6801/opfunc.o:
	cd m6801; $(MAKE) opfunc.o; cd ..
m6805/opfunc.o:
	cd m6805; $(MAKE) opfunc.o; cd ..
m6811/opfunc.o:
	cd m6811; $(MAKE) opfunc.o; cd ..
h6301/opfunc.o:
	cd h6301; $(MAKE) opfunc.o; cd ..


# Automatic generation of header files
.include:
	cd $(INCDIR); $(MAKE)
.sim:
	cd ../; $(MAKE)

