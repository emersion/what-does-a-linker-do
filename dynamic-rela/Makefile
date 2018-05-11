CFLAGS = -nostdlib -fno-asynchronous-unwind-tables

include ../common.mk

all: main inspect

libfoo.so: foo.o
	$(LD) $(LDFLAGS) -shared -o $@ $^

main: main.o libfoo.so
	# TODO: -dynamic-linker shouldn't be needed
	$(LD) $(LDFLAGS) -dynamic-linker /lib64/ld-linux-x86-64.so.2 -L. -lfoo -o $@ $<

.PHONY: inspect
inspect:
	readelf -r foo.o
	readelf -r main.o
	objdump -d main.o
	readelf -r main
	objdump -d main
	env LD_LIBRARY_PATH=. ./main; echo $$?

clean:
	$(RM) -f *.o *.so main
