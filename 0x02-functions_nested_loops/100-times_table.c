#include "main.h"

/**
 * print_times_table - prints the n times table starting from 0
 * @n: number to create the times table
 */
void print_times_table(int n)
{
	int row;
	int col;

	if (n > 15 || n < 0)
		return;

	for (row = 0; row <= n; row++)
	{
		for (col = 0; col <= n; col++)
		{
			int mult = row * col;

			if (col < 1)
			{}
			else if (mult < 10)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else if (mult < 100)
			{
				_putchar(' ');
				_putchar((mult / 10) + '0');
			}
			else
			{
				_putchar((mult / 100) + '0');
				_putchar(((mult % 100) / 10) + '0');
			}

			_putchar((mult % 10) + '0');

			if (col < n) /* Don't print ',' & ' ' at the end*/
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

