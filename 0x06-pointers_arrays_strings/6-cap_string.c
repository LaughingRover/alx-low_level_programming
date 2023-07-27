#include "main.h"

int is_delimiter(char);

/**
 * cap_string - capitalizes the words in a string
 * @s: string
 *
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		/*Capitalize the first letter of a word*/
		if (is_delimiter(s[i]) && (s[++i] >= 'a' && s[i] <= 'z'))
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}

/**
 * is_delimiter - checks if a character is a delimiter
 * @ch: char
 *
 *
 * Return: 1 if delimiter and 0 if not
 */
int is_delimiter(char ch)
{
	return (ch == ' ' || ch == '\t' || ch == '\n' || ch == ',' ||
		ch == ';' || ch == '.' || ch == '!' || ch == '?' ||
		ch == '"' || ch == '(' || ch == ')' || ch == '{' || ch == '}');
}
