#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int i;

	/*Count the length of the string*/
	for (i = 0; s[i] != '\0'; i++)
	{}

	/*Use the length as index to print in reverse*/
	while (i-- > 0)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

