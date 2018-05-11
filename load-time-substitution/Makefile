include ../common.mk

all: main libfoo2.so inspect

libfoo%.so: foo%.o
	$(LD) $(LDFLAGS) -shared -o $@ $^

main: main.o libfoo1.so
	# TODO: -dynamic-linker shouldn't be needed
	$(LD) $(LDFLAGS) -dynamic-linker /lib64/ld-linux-x86-64.so.2 -L. -lfoo1 -o $@ $<

.PHONY: inspect
inspect:
	env LD_LIBRARY_PATH=. ./main; echo $$?
	env LD_LIBRARY_PATH=. LD_PRELOAD=libfoo2.so ./main; echo $$?

clean:
	$(RM) -f *.o *.so main
