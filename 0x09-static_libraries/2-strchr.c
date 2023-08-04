#include "main.h"

/**
 * _strchr - finds a character in a string
 * @s: string
 * @c: character
 *
 * Return: character
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return ('\0');
}

