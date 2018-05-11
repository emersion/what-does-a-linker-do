#include "../start.h"

const char foo[] = "hello world\n";

int main() {
	char *ptr = (char *)0x8000000;
	write(1, ptr, 12);
	return 0;
}
