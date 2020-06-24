# Makefile 68xx simulators (works with GNU Make)
# Edit CC, CFLAGS to suit your system
#
# $Id$

# This section is defined in each sub-makefile
#ROOT	= ..
#INCROOT	= $(ROOT)/inc
#INCLUDES= -I$(INCROOT)/base -I$(INCROOT)/arch/m68xx
#DEFINES	= -DUSE_PROTOTYPES
#CPPFLAGS= $(DEFINES) $(INCLUDES) 

RM	= rm -f
#RM	= del

# Linux, SunOS 4, Solaris 2.x, Win32, GNU CC, OS-X
CC	= gcc
#CFLAGS	= -O0 -g  #-Wmissing-prototypes -Wall
#CFLAGS = $(CFLAGS) -finline-functions
#CFLAGS  = $(CFLAGS) -Wall
CFLAGS  = -O0 -ggdb -Wall

# SunOS 4, native cc
#CC	= cc
#CFLAGS	= -O2	#-g -O2 -finline-functions #-Wmissing-prototypes -Wall

# Solaris 2.x, native cc (SPARCompiler 3.0.1, 4.0.1)
#CC	= cc
#CFLAGS	= -O		#Ok
#CFLAGS	= -O -Xa	#Ok
#CFLAGS	= -O -Xc	#Ok

# SCO SYSVR3 cc
#CC	= cc
#CFLAGS	= -O

