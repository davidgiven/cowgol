export OBJ ?= .obj
export LUA ?= lua
export CC ?= gcc
export CXX ?= g++
export AR ?= ar
export CFLAGS ?= -g -O0
export LDFLAGS ?= -g

.PHONY: all
all: +all

TARGETS = +all
include build/ab.mk

