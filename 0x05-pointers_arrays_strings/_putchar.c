#include <unistd.h>

/**
 * _putchar - prints single ascii character to output
 * @c: ascii number
 *
 * Return: number of bytes written if successful, 0 if
 * nothing is written and -1 if an error occurs.
 */
int _putchar(int c)
{
	return (write(1, &c, 1));
}

