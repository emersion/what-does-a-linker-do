include ../common.mk

all: main inspect

main: main.o script
	$(LD) $(LDFLAGS) -no-pie -static -T script -o $@ $<

.PHONY: inspect
inspect:
	readelf -S main.o
	readelf -S main
	./main; echo $$?

clean:
	$(RM) -f *.o main
