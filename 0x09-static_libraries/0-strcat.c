#include "main.h"

/**
 * _strcat - concatenates two strings by appending src to destination
 * @dest: source
 * @src: destination
 *
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int dest_len = _strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}

