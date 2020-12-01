export OBJ = .obj
export LUA = lua
export CFLAGS = -g -O0 --std=c99
export LDFLAGS = -g
export NINJAFLAGS = -k0

all: $(OBJ)/build.ninja
	@ninja -f $(OBJ)/build.ninja $(NINJAFLAGS)

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
