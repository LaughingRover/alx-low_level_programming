#include "main.h"

/**
 * _strcpy - copies string from source to destination
 * @dest: destination
 * @src: source
 *
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	/*Save starting point of dest address*/
	char *dest_start = dest;

	/*Copy char from src to dest*/
	while ((*dest++ = *src++))
		;

	return (dest_start);
}

