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
	char *format_list = "cifs", *s;
	char *is_valid_format;
	int num_args, i = 0;
	va_list args;

	if (format == NULL)
		return;

	num_args = strlen(format);
	va_start(args, format);

	while (i < num_args)
	{
		is_valid_format = strchr(format_list, format[i]);

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
				s = va_arg(args, char *);
				(s == NULL) ? printf("(nil)") : printf("%s", s);
				break;
			default:
				break;
		}

		(i < (num_args - 1) && is_valid_format) ? printf(", ") : 0;
		i++;
	}

	va_end(args);
	putchar('\n');
}

