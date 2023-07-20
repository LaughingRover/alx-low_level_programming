#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int row = 0, col;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	while (row < size)
	{
		int count = size;

		for (col = 0; col < size; col++)
		{
			if (--count > row)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
		row++;
	}
}

