#include "main.h"
#include <limits.h>

/**
 * print_last_digit - prints the last digit of a signed integer
 * @n: integer digit
 *
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n == INT_MIN) /* INT_MIN has no corresponding positive value */
		n = 8; /* The last digit of INT_MIN is 8 */
	else if (n < 0)
		n *= -1;

	last_digit = n % 10;
	_putchar('0' + last_digit);

	return (last_digit);
}


