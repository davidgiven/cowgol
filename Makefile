export OBJ = .obj
export LUA = lua
export CC = gcc
export CXX = g++
export AR = ar
export CFLAGS = -g -O0
export LDFLAGS = -g
export NINJAFLAGS =

export PYTHONHASHSEED = 1

#all: $(OBJ)/build.mk
#	@+make -f $(OBJ)/build.mk +all

all: $(OBJ)/build.ninja
	@ninja -f $< +all
	
clean:
	@echo CLEAN
	@rm -rf $(OBJ) bin

build-files = $(shell find . -name 'build.py') build/*.py config.py
$(OBJ)/build.mk: Makefile $(build-files)
	@echo ACKBUILDER
	@mkdir -p $(OBJ)
	@python3 -X pycache_prefix=$(OBJ) build/ab2.py -m make -t +all -o $@ build.py

$(OBJ)/build.ninja: Makefile $(build-files)
	@echo ACKBUILDER
	@mkdir -p $(OBJ)
	@python3 -X pycache_prefix=$(OBJ) build/ab2.py -m ninja -t +all -o $@ \
		-v OBJ,CC,CXX,AR \
		build.py

.DELETE_ON_ERROR:
.SECONDARY:

