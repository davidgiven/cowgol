export OBJ = .obj
export LUA = lua
export CFLAGS = -g -O0
export LDFLAGS = -g

all: $(OBJ)/build.ninja
	@ninja -f $(OBJ)/build.ninja

clean:
	@echo CLEAN
	@rm -rf $(OBJ) bin

lua-files = $(shell find . -name 'build*.lua') $(wildcard build/*.lua) toolchains.lua
$(OBJ)/build.ninja: mkninja.lua Makefile $(lua-files)
	@echo MKNINJA
	@mkdir -p $(OBJ)
	@$(LUA) \
		mkninja.lua \
		> $@
