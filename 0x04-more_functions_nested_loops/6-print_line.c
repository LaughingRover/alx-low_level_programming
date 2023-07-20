#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: length of the line
 */
void print_line(int n)
{
	int i = 0;

	while (n > 0 && i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}

