CFLAGS ?= -nostdlib -fno-asynchronous-unwind-tables

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $^
