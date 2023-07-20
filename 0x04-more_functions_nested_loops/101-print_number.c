#include "main.h"

/**
 * print_number - prints an integer
 * @n: number
 */
void print_number(int n)
{
	/*Handle negative numbers*/
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	/*Recursively print digits*/
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}

	_putchar((n % 10) + '0');
}

