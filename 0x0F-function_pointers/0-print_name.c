#include <stdio.h>

/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: call-back function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

