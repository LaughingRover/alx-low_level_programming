#include <unistd.h>

/**
 * _putchar - prints character to stdout
 * @c: character to print
 *
 * Return: success of failure
 */
int _putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}

