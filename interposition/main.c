#include "../start.h"

int foo(void);

int __real_foo(void);

int __wrap_foo(void) {
	return 1 + __real_foo();
}

int main() {
	return foo();
}
