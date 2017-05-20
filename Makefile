hide = @

TEST_SRCS =	\
	$(wildcard tests/test_*.cow)

TEST_BINS = $(patsubst %.cow,%.exe,$(TEST_SRCS))
TEST_STAMPS = $(patsubst %.cow,%.stamp,$(TEST_SRCS))

.phony: tests
tests: $(TEST_STAMPS)

$(TEST_BINS): cowboot bootstrap/bootstrap.lua bootstrap/cowgol.c bootstrap/cowgol.h
$(TEST_BINS): tests/_test.cow

.PRECIOUS: $(TEST_BINS)
tests/%.exe: tests/%.cow
	$(hide) ./cowboot -o $@ tests/_test.cow $<

tests/%.stamp: tests/%.exe
	$(hide) $<
	$(hide) touch $@

clean:
	$(hide) rm -f $(TEST_BINS) $(TEST_STAMPS)
