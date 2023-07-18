#include <unistd.h>

/**
 * _putchar - prints characters to output
 * @c: character to print (1 byte)
 *
 * Return: 1 (On success return number of bytes written)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

