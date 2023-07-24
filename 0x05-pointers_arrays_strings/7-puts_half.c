#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 */
void puts_half(char *str)
{
	int i;
	int len = 0;

	/*Get length of string*/
	while (str[len++] != '\0')
		;

	i = (len / 2);

	while (str[i] != '\0')
	{
		_putchar(str[i++]);
	}
	_putchar('\n');
}

