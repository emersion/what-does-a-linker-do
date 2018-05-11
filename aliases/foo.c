int foo(void) {
	return 42;
}

void foo_alias(void) __attribute__((alias("foo")));
