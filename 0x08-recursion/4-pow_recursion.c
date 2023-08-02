#include "main.h"
#include <stdlib.h>

/**
 * _pow_recursion - exponent of a number
 * @x: integer
 * @y: exponent
 *
 * Return: the value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	int result;
	int sign;

	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	sign = (x < 0) ? -1 : 1;
	x = abs(x);

	result = (x * _pow_recursion(x, y - 1));

	if (sign == -1)
		return (sign * result);

	return (result);
}

