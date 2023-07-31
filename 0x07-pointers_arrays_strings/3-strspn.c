#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: string
 * @accept: accepted characters
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept) {
	unsigned int count = 0;
	char *ptr_s;
	char *ptr_accept;
	int found;

	for (ptr_s = s; *ptr_s != '\0'; ptr_s++)
	{
		found = 0;
		for (ptr_accept = accept; *ptr_accept != '\0'; ptr_accept++)
		{
			if (*ptr_s == *ptr_accept) {
				found = 1;
				break;
			}
		}

		if (!found)
			break;

		count++;
	}

	return count;
}

