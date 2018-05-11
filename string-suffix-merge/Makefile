include ../common.mk

all: lib.so inspect

lib.so: part1.o part2.o
	$(LD) $(LDFLAGS) -shared -O3 -o $@ $^

.PHONY: inspect
inspect:
	objdump -s -j .rodata lib.so

clean:
	$(RM) -f *.o *.so
