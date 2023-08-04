#include "main.h"

/**
 * _isalpha - checks if input is an alphabet
 * @c: input to be checked
 *
 * Return: 1 if c is a letter. 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);

	return (0);
}

