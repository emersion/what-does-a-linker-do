CFLAGS = -nostdlib -fno-asynchronous-unwind-tables -fvisibility=hidden

include ../common.mk

all: libfoo.so inspect

libfoo.so: foo.o
	$(LD) $(LDFLAGS) -shared -o $@ $^

.PHONY: inspect
inspect:
	readelf -s foo.o
	readelf -s libfoo.so

clean:
	$(RM) -f *.o *.so
