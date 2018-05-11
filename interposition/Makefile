include ../common.mk

all: main inspect

main: main.o foo.o
	$(LD) -o $@ --wrap=foo $^

.PHONY: inspect
inspect:
	./main; echo $$?

clean:
	$(RM) -f *.o main
