#include <stdio.h>
#include <stdlib.h>

extern char etext, edata, end; // Part of the default linker script

char foo[] = "hello world";
char bar[32];

int main() {
	void *ptr = malloc(1);

	printf("main                                         %10p\n", main);
	printf("First address past program text (etext)      %10p\n", &etext);
	printf("foo                                          %10p\n", foo);
	printf("First address past initialized data (edata)  %10p\n", &edata);
	printf("bar                                          %10p\n", bar);
	printf("First address past uninitialized data (end)  %10p\n", &end);
	printf("ptr                                          %10p\n", ptr);

	free(ptr);
	return EXIT_SUCCESS;
}
