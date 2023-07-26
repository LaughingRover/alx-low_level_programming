#include "main.h"
#include <stddef.h>

/**
 * _strlen - finds the length of a string
 * @c: string
 *
 * Return: length of string
 */
size_t _strlen(char *c)
{
	size_t i = 0;

	while (c[i] != '\0')
		i++;

	return (i);
}

