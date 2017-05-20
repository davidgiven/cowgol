hide = @

TEST_SRCS =	\
	$(wildcard tests/test_*.cow)

TEST_BINS = $(patsubst %.cow,%,$(TEST_SRCS))
TEST_STAMPS = $(patsubst %.cow,%.stamp,$(TEST_SRCS))

.phony: tests
tests: $(TEST_STAMPS)

$(TEST_SRCS): cowboot bootstrap/bootstrap.lua bootstrap/cowgol.c bootstrap/cowgol.h
$(TEST_SRCS): tests/_test.cow

.PRECIOUS: tests/%
tests/%: tests/%.cow
	$(hide) ./cowboot -o $@ tests/_test.cow $<

tests/%.stamp: tests/%
	$(hide) $<
	$(hide) touch $@

clean:
	$(hide) rm -f $(TEST_BINS) $(TEST_STAMPS)
