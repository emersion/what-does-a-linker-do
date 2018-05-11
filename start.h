#include <sys/types.h>

int main();

static void write(int fildes, const void *buf, size_t nbyte) {
	asm("int $0x80"::"a"(4), "b"(fildes), "c"(buf), "d"(nbyte));
}

static void exit(int code) {
	asm("int $0x80"::"a"(1), "b"(code));
}

void _start() {
	int ret = main();
	exit(ret);
	__builtin_unreachable();
}
