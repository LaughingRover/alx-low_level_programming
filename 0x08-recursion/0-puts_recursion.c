#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n'); /*Print a new line when the end of the string*/
		return;
	}

	_putchar(*s); /*Print the current character*/
	_puts_recursion(s + 1); /*Recur with the next character in the string*/
}

