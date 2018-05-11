include ../common.mk

all: main-with main-without inspect

main-with: main.o foo.o
	$(LD) -o $@ $^

main-without: main.o
	$(LD) -o $@ $^

.PHONY: inspect
inspect:
	./main-with; echo $$?
	./main-without; echo $$?

clean:
	$(RM) -f *.o main-with main-without
