include ../common.mk

all: main inspect

main: main.o foo.o
	$(LD) -o $@ $^

.PHONY: inspect
inspect:
	readelf -s foo.o
	readelf -s main
	./main; echo $$?

clean:
	$(RM) -f *.o main
