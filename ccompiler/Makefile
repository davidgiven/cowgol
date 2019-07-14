export CFLAGS = -Os -g --std=c++14 \
	-ffunction-sections -fdata-sections
export LDFLAGS = -Os

export CC = gcc
export AR = ar rcs
export STRIP = strip
export CFLAGS += 
export LDFLAGS +=
export LIBS = -lfl

CFLAGS += -I.

export OBJDIR = .obj

all: .obj/build.ninja
	@ninja -f .obj/build.ninja -v

clean:
	@echo CLEAN
	@rm -rf $(OBJDIR)

.obj/build.ninja: mkninja.sh Makefile
	@echo MKNINJA $@
	@mkdir -p $(OBJDIR)
	@sh $< > $@
