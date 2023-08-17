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
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);

		if (s == NULL)
			s = "(nil)";

		printf("%s", s);

		if ((i != (n - 1)) && separator != NULL)
			printf("%s", separator);
	}

	putchar('\n');
}

