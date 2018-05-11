include ../common.mk

all: libfoo.so main_default main_v1 inspect

libfoo.so: foo.o
	$(LD) $(LDFLAGS) -shared --version-script foo.syms -o $@ $^

main_%: main_%.o
	$(CC) $(CFLAGS) -L. -lfoo -o $@ $^

.PHONY: inspect
inspect:
	readelf -s libfoo.so
	readelf -s main_default | grep foo
	readelf -s main_v1 | grep foo
	env LD_LIBRARY_PATH=. ./main_default; echo $$?
	env LD_LIBRARY_PATH=. ./main_v1; echo $$?

clean:
	$(RM) -f *.o *.so main_default main_v1
