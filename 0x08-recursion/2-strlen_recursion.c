#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0); /*Return 0 at end of string*/
	}

	/*Add 1 to the result of the next recursion call*/
	return (1 + _strlen_recursion(s + 1));
}

