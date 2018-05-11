#include "../start.h"

int __attribute__((weak)) foo(void);

int main() {
	if (!foo) {
		return 0;
	}
	return foo();
}
