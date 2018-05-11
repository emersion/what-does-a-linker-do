CFLAGS = -std=c11

include ../common.mk

all: main inspect

main: main.o
	$(CC) $(CFLAGS) -o $@ $^

.PHONY: inspect
inspect:
	./main

.PHONY: clean
clean:
	$(RM) -f *.o main