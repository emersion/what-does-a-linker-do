include ../common.mk

all: main inspect

main: part1.o part2.o
	$(LD) $(LDFLAGS) -static -o $@ $^

.PHONY: inspect
inspect:
	objdump -s -j .rodata part1.o
	objdump -s -j .rodata part2.o
	objdump -s -j .rodata main

clean:
	$(RM) -f *.o main
