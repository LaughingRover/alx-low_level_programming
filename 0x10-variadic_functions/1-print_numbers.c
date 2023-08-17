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
	int i;
	int num;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if ((i != (n - 1)) && separator != NULL)
			printf("%s", separator);
	}

	putchar('\n');
}

