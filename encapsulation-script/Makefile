include ../common.mk

all: lib.so inspect

lib.so: main.o
	$(LD) $(LDFLAGS) -shared --version-script main.syms -o $@ $^

.PHONY: inspect
inspect:
	readelf -s lib.so

clean:
	$(RM) -f *.o *.so
