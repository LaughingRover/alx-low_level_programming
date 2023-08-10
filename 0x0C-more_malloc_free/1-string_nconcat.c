#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: integer
 *
 * Description: The returned pointer shall point to a newly allocated space
 * in memory, which contains s1, followed by the first n bytes of s2,
 * and null terminated.
 *
 * Return: If the function fails, it should return NULL.
 * If n is greater or equal to the length of s2 then use the entire string s2.
 * If NULL is passed, treat it as an empty string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenated;

	/*Get the lengths of the strings*/
	unsigned int len_s1 = strlen(s1);
	unsigned int len_s2 = strlen(s2);

	/*Handle NULL strings as empty strings*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*Adjust n if it's greater than or equal to the length of s2*/
	if (n >= len_s2)
		n = len_s2;

	/**
	 * Allocate memory for the concatenated string,
	 *  +1 for the null terminator
	 */
	concatenated = malloc(len_s1 + n + 1);

	if (concatenated == NULL)
	{
		/*Memory allocation failed*/
		return (NULL);
	}

	/*Copy s1 to the concatenated string*/
	strcpy(concatenated, s1);

	/*Concatenate the first n bytes of s2*/
	strncat(concatenated, s2, n);

	return (concatenated);
}

