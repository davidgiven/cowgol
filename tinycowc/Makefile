export CFLAGS = -O0 -g -ffunction-sections -fdata-sections
export LDFLAGS = -O0 -g

export CC = gcc -m32
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
