#include <stdio.h>

void before_main(void) __attribute__((constructor));

/**
 * before_main - Function that runs before main
 */
void before_main(void)
{
	char *str = "You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n";

	printf("%s", str);
}

