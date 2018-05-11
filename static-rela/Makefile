include ../common.mk

all: main inspect

main: main.o foo.o
	$(LD) $(LDFLAGS) -static -o $@ $^

.PHONY: inspect
inspect:
	readelf -r foo.o
	readelf -r main.o
	gdb -batch -ex 'file main.o' -ex 'disassemble /r main'
	readelf -r main
	gdb -batch -ex 'file main' -ex 'disassemble /r main' -ex 'disassemble /r foo'
	# addr + addend + value = 0x400100 + 0x4 + 0x0c = 0x400110
	./main; echo $$?

clean:
	$(RM) -f *.o main
