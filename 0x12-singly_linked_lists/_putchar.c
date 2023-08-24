#include <unistd.h>

/**
 * _putchar - prints characters to stdout
 * @c: character to print
 *
 * Return: 0 success
 */
int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}

