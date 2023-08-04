#include "main.h"

/**
 * _strncat - concatenates two strings by appending src to destination
 * @dest: source
 * @src: destination
 * @n: number of bytes to copy from src
 *
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dest_len = _strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}

