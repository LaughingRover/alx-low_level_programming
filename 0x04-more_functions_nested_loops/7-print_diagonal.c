#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: length of the line
 */
void print_diagonal(int n)
{
	int row = 0, col;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (row < n)
	{
		for (col = 0; col <= row; col++)
		{
			if (col < row)
				_putchar(' ');

			if (col == row)
			{
				_putchar('\\');
				_putchar('\n');
			}
		}
		row++;
	}
}

