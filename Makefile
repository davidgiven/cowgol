hide = @

BOOTSTRAP = \
	cowboot bootstrap/bootstrap.lua bootstrap/cowgol.c bootstrap/cowgol.h

TEST_SRCS =	\
	$(wildcard tests/*.test.cow) \
	$(wildcard src/*.test.cow)

TEST_BINS = $(patsubst %.test.cow,.obj/%.test.exe,$(TEST_SRCS))
TEST_STAMPS = $(patsubst %.test.cow,.obj/%.stamp,$(TEST_SRCS))

PARSER_SRCS = \
	src/string_lib.cow \
	src/ctype_lib.cow \
	src/parser.cow

all: tests bin/parser

bin/parser: $(PARSER_SRCS) $(BOOTSTRAP)
	@echo BUILD $@
	$(hide) ./cowboot -o $@ $(PARSER_SRCS)

.phony: tests
tests: $(TEST_STAMPS)

%.exe: cowboot bootstrap/bootstrap.lua bootstrap/cowgol.c bootstrap/cowgol.h
$(TEST_BINS): tests/_test.cow
.obj/src/string_lib.test.exe: src/string_lib.cow

.PRECIOUS: $(TEST_BINS)
.obj/%.test.exe: %.test.cow
	@echo BUILDTEST $@
	@mkdir -p $(dir $@)
	@echo $^
	$(hide) ./cowboot -o $@ $(sort $(filter-out %.test.cow, $^)) $<

.obj/%.stamp: .obj/%.test.exe
	@echo TEST $@
	@mkdir -p $(dir $@)
	$(hide) $<
	$(hide) touch $@

clean:
	$(hide) rm -rf .obj
