#include "main.h"

/**
 * times_table - prints the 9 times table starting from 0
 */
void times_table(void)
{
	int row;
	int col;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			int mult = row * col;

			if (col < 1)
			{
				_putchar((mult % 10) + '0');
			}
			else if (mult < 10)
			{
				_putchar(' ');
				_putchar((mult % 10) + '0');
			}
			else
			{
				_putchar((mult / 10) + '0');
				_putchar((mult % 10) + '0');
			}

			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

