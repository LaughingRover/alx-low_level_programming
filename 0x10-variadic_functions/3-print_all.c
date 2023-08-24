#include <stdarg.h>
#include <stdio.h>
#include <string.h>

#define NULL ((void *)0)

/**
 * print_all - prints anything
 * @format: is a list of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	char *format_list = "cifs", *str;
	char *is_valid_format;
	int num_args, i = 0;
	va_list args;

	if (format == NULL)
		return;

	num_args = strlen(format);
	va_start(args, format);

	while (i < num_args)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				(str) ? printf("%s", str) : printf("(nil)");
				break;
		}

		is_valid_format = strchr(format_list, format[i]);

		if (i < (num_args - 1) && is_valid_format)
			printf(", ");
		i++;
	}

	va_end(args);
	putchar('\n');
}

