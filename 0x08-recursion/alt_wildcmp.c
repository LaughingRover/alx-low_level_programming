#include <stdio.h>

/**
 * wildcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 1 if the strings can be considered identical, otherwise return 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1); /*Both strings are empty, considered identical*/
	}

	if (*s2 == '*')
	{
		/**
		 * Handle the case when the current character in s2 is '*'
		 * Recur for s2+1 until a matching pattern in s1 is found
		 */
		if (*(s2 + 1) == '\0')
		{
			/**
			 * If '*' is the last character in s2,
			 * it can match any remaining characters in s1
			 */
			return (1);
		}

		while (*s1 != '\0')
		{
			if (wildcmp(s1, s2 + 1))
			{
				/**
				 * A match is found,
				 * s1 and s2 are considered identical
				 */
				return (1);
			}
			s1++;
		}

		/*No match found, s1 and s2 are not considered identical*/
		return (0);
	}

	if (*s1 == *s2)
	{
		/*Characters match, recur for the next characters*/
		return (wildcmp(s1 + 1, s2 + 1));
	}

	/*Characters do not match, s1 and s2 are not considered identical*/
	return (0);
}

