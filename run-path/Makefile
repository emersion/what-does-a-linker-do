include ../common.mk

all: main inspect

libfoo.so: foo.o
	$(LD) $(LDFLAGS) -shared -o $@ $^

main: main.o libfoo.so
	# Set RPATH to "$ORIGIN" (make sure it's not interpreted as a variable by
	# make or the shell), ie. the executable's directory
	# TODO: -dynamic-linker shouldn't be needed
	$(LD) $(LDFLAGS) -dynamic-linker /lib64/ld-linux-x86-64.so.* -L. -lfoo -rpath '$$ORIGIN' -o $@ $<

.PHONY: inspect
inspect:
	readelf -d main
	./main; echo $$?

clean:
	$(RM) -f *.o *.so main
