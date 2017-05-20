hide = @

TEST_SRCS =	\
	$(wildcard tests/test_*.cow)

TEST_BINS = $(patsubst %.cow,%,$(TEST_SRCS))
TEST_STAMPS = $(patsubst %.cow,%.stamp,$(TEST_SRCS))

.phony: tests
tests: $(TEST_STAMPS)

%.cow: cowboot bootstrap/bootstrap.lua bootstrap/cowgol.c bootstrap/cowgol.h
tests/%.cow: tests/_test.cow

tests/%: tests/%.cow
	$(hide) ./cowboot -o $@ tests/_test.cow $<

tests/%.stamp: tests/%
	$(hide) $<
	$(hide) touch $@

clean:
	$(hide) rm -f $(TEST_BINS) $(TEST_STAMPS)
