int __attribute__((visibility ("hidden"))) foo(void) {
	return 42;
}

int __attribute__((visibility ("default"))) bar(void) {
	return 64;
}

int baz(void) {
	return 64;
}
