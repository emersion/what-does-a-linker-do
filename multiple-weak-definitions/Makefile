include ../common.mk

all: main inspect

main: main.o foo1.o foo2.o
	$(LD) -o $@ $^

.PHONY: inspect
inspect:
	./main; echo $$?

clean:
	$(RM) -f *.o main
