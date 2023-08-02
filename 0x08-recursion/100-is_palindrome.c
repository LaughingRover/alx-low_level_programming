#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/**
 * is_palindrome_helper - is a recursive helper function that checks
 * if the given string s is a palindrome within the range
 * specified by start and end.
 * @s: string
 * @start: start range
 * @end: end range
 *
 * Return: True if it is a palindrome else false
 */
bool is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		/**
		 * Base case: empty string or
		 * one-character string is a palindrome
		 */
		return (true);
	}

	if (s[start] != s[end])
	{
		/*Characters at start and end do not match, not a palindrome*/
		return (false);
	}

	/*Recursively check the remaining characters in the string*/
	return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - takes the input string s,
 * calculates its length using strlen, and calls the
 * is_palindrome_helper function with the initial values of
 * start as 0 and end as len - 1.
 * @s: string
 *
 * Return: 1 if string is a palindrome and 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (is_palindrome_helper(s, 0, len - 1));
}

