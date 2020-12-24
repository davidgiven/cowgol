# Each testname is build from a source file with the file name extension .s
STESTNAME=Pterm Pterm0 Cconout Cconws Bconout Fstraversal c-helloworld \
          Fopen Fclose Fread Supexec Dcreate Fcreate Fwrite Fdelete Fattrib \
          cmdline

CC=m68k-atari-mint-gcc
TOSEMU=../bin/tosemu

all: $(addprefix test-,$(basename $(STESTNAME) $(CTESTNAME)))

test-%: %.s
	m68k-atari-mint-gcc $< -Wa,-S -nostdlib -o $@

test-%: %.c
	m68k-atari-mint-gcc $< -o $@

check: all
	$(TOSEMU) test-Pterm0
	$(TOSEMU) test-Pterm; test "$$?" = 42
	$(TOSEMU) test-Bconout > out && test "`cat out`" = 'Hello World!'
	$(TOSEMU) test-Cconout > out && test "`cat out`" = 'Hello World!'
	$(TOSEMU) test-Cconws > out && test "`cat out`" = 'Hello World!'
	$(TOSEMU) test-Fstraversal
	$(TOSEMU) test-Fopen
	$(TOSEMU) test-Fclose
	echo x | $(TOSEMU) test-Fread > out
	head -c100 Makefile >out2
	echo -n x >> out2
	cmp out out2
	$(TOSEMU) test-Supexec
	$(TOSEMU) test-Dcreate && rmdir DNAME
	$(TOSEMU) test-Fcreate && rm FNAME
	$(TOSEMU) test-Fwrite
	echo -n "hello world" > out
	cmp FNAME out
	$(TOSEMU) test-Fdelete
	$(TOSEMU) test-Fattrib
	$(TOSEMU) test-cmdline 12 345 6789 > out
	echo -n "12 345 6789" > out2
	cmp out out2
	# $(TOSEMU) test-c-helloworld
	rm out2

clean:
	$(RM) $(addprefix test-,$(basename $(STESTNAME) $(CTESTNAME)))
