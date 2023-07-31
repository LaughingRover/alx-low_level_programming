#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string
 *
 * Return: encoded string
 */
char *rot13(char *s)
{
	char *ptr = s;

	while (*ptr != '\0')
	{
		/*Check if the character is an alphabet*/
		if ((*ptr >= 'a' && *ptr <= 'z')
				|| (*ptr >= 'A' && *ptr <= 'Z'))
		{
			/**
			 * Rotate clockwise by 13 if less than n and
			 * anti-clockwise if greater
			 */
			if ((*ptr >= 'A' && *ptr <= 'M')
					|| (*ptr >= 'a' && *ptr <= 'm')) {
				*ptr += 13;
			} else {
				*ptr -= 13;
			}
		}
		ptr++;
	}
	return (s);
}

