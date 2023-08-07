#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Description: The returned pointer should point to a newly allocated space
 * in memory which contains the contents of s1, followed by the contents of s2,
 * and null terminated if NULL is passed, treat it as an empty string.
 *
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int s1_len;
	int s2_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	str = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	strcpy(str, s1);
	strcat(str, s2);

	return (str);
}

