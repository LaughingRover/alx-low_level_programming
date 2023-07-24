#include "main.h"

void copy_string(char *t, char *s);

/**
 * rev_string - reverses a string
 * @s: string (char array)
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char temp[200];

	/*Find the length of the string*/
	while (s[i] != '\0')
	{
		i++;
	}

	copy_string(temp, s);

	/*Reverse the string*/
	while (i-- > 0)
	{
		s[j++] = temp[i];
	}
}

/**
 * copy_string - copy string to another variable
 * @t: string 1
 * @s: string 2
 */
void copy_string(char *t, char *s)
{
	while ((*t++ = *s++))
		;
}

