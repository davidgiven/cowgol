export OBJ = .obj
export LUA = lua
export CFLAGS = -g -O0
export LDFLAGS = -g
export NINJAFLAGS =

all: $(OBJ)/build.mk
	@make -f $(OBJ)/build.mk +all

clean:
	@echo CLEAN
	@rm -rf $(OBJ) bin

build-files = $(shell find . -name 'build.py') build/*.py
$(OBJ)/build.mk: Makefile $(build-files)
	@echo ACKBUILDER
	@mkdir -p $(OBJ)
	@python3 \
		build/ab2.py \
		-m make \
		build.py \
		> $@
