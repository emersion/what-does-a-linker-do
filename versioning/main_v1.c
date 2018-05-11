#include "foo.h"

asm(".symver foo,foo@FOO_1.0");

int main(int argc, char *argv[]) {
	return foo();
}
