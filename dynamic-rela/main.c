#include "foo.h"

void _start() {
	int ret = foo();
	asm("int $0x80"::"a"(1), "b"(ret)); // exit(ret)
}
