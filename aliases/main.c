#include "../start.h"

int foo(void);
int foo_alias(void);

int main() {
	// foo != foo_alias
	return foo - foo_alias;
}
