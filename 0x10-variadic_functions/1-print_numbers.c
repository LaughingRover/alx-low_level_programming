#include <stdarg.h>
#include <stdio.h>

#define NULL ((void *)0)

/**
 * print_numbers - prints numbers followed by a newline
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	va_start(args, n);

	while (i < n)
	{
		printf("%d", va_arg(args, int));

		/*Check if separator is NULL*/
		if ((i < (n - 1)) && separator)
			printf("%s", separator);
		i++;
	}

	va_end(args);
	putchar('\n');
}

