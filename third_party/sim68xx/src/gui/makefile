#

CC	= gcc
INCLUDE	= -I$(OPENWINHOME)/include
CPPFLAGS= $(INCLUDE) -DUSE_PROTOTYPES
#CFLAGS	= -g

#-I../include -I../include/icon
#LIBPATH	= ../lib
# SunOS 4
#LDLIBS	= -lxview -lolgx -lX
# linux
LDLIBS	= -lxview -lolgx -lX11

LDFLAGS	= -L$(OPENWINHOME)/lib


default: sim68xxtool

sim68xxtool: sim68xxtool.o

