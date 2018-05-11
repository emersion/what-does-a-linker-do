int foo_v1(void) {
	return 1;
}
asm(".symver foo_v1,foo@FOO_1.0");

int foo_v2(void) {
	return 2;
}
asm(".symver foo_v2,foo@@FOO_2.0"); // Double @ means it's the default
