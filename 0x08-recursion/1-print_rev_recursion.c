#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 * @s: string
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return; /*Return when the end of the string is reached*/
	}

	_print_rev_recursion(s + 1);/*Recur with next char in the string*/
	_putchar(*s); /*Print the current character after the recursive call*/
}

