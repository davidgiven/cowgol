hide = @

BOOTSTRAP = \
	cowboot bootstrap/bootstrap.lua bootstrap/cowgol.c bootstrap/cowgol.h

TEST_SRCS =	\
	$(wildcard tests/test_*.cow)

TEST_BINS = $(patsubst %.cow,%.exe,$(TEST_SRCS))
TEST_STAMPS = $(patsubst %.cow,%.stamp,$(TEST_SRCS))

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

$(TEST_BINS): cowboot bootstrap/bootstrap.lua bootstrap/cowgol.c bootstrap/cowgol.h
$(TEST_BINS): tests/_test.cow

.PRECIOUS: $(TEST_BINS)
tests/%.exe: tests/%.cow
	@echo BUILDTEST $@
	$(hide) ./cowboot -o $@ tests/_test.cow $<

tests/%.stamp: tests/%.exe
	@echo TEST $@
	$(hide) $<
	$(hide) touch $@

clean:
	$(hide) rm -f $(TEST_BINS) $(TEST_STAMPS)
