#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all the parameters
 * @n: number of arguments
 *
 * Return: If n is 0 return 0 else return sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < (int)n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}

