#include <unistd.h>

/**
 * _putchar - print characters to output
 * @c: char
 *
 * Return: ascii value of character
 */
int _putchar(char *c)
{
	return (write(1, &c, 1));
}

