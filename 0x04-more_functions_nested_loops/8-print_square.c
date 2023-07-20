#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 */
void print_square(int size)
{
	int row = 0, col;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	while (row < size)
	{
		for (col = 0; col < size; col++)
		{
			_putchar('#');
		}
		_putchar('\n');
		row++;
	}
}
