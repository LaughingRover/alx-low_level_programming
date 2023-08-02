#include "main.h"

/**
 * wildcmp - takes two input strings s1 and s2, and compares the two strings,
 * considering the special character *
 * @s1: string
 * @s2: string
 *
 * Return: 1 if they can be considered identical
 * (taking * as a special character), otherwise it returns 0./
 */
int wildcmp(char *s1, char *s2)
{
	/*Base cases: when both strings reach the end*/
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1); /*Both strings are identical*/
	}

	/*If s2 contains '*', it can match zero or more characters in s1*/
	if (*s2 == '*')
	{
		/**
		 * Recur with two options:
		 * skip '*' or match '*' with a character in s1
		 */
		return (wildcmp(s1, s2 + 1) || (*s1 && wildcmp(s1 + 1, s2)));
	}

	/*If the characters match or s2 contains a single character '?'*/
	if (*s1 == *s2 || (*s2 == '?' && *s1 != '\0'))
	{
		return (wildcmp(s1 + 1, s2 + 1)); /*Recur to next characters*/
	}

	return (0); /*Characters don't match, and s2 doesn't contain '*'*/
}

