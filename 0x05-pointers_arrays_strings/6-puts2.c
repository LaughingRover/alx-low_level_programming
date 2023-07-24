#include "main.h"

/**
 * puts2 - starting from index 0 skip one character and print the next in the
 * string
 * @str: string
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i == 0 || i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

