include ../common.mk

all: libfoo.so inspect

foo1.o: foo1.c
	$(CC) -c $(CFLAGS) -fvisibility=hidden -o $@ $^

libfoo.a: foo1.o foo2.o
	$(LD) -r -o $@ $^

libfoo.so: libfoo.a
	$(LD) $(LDFLAGS) -shared -o $@ $^

.PHONY: inspect
inspect:
	readelf -s foo1.o
	readelf -s foo2.o
	readelf -s libfoo.a
	readelf -s libfoo.so

clean:
	$(RM) -f *.o *.a *.so
