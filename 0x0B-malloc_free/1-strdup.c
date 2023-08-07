#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string
 *
 * Description: _strdup() function returns a pointer to a new string
 * which is a duplicate of the string str. Memory for the new string
 * is obtained with malloc, and can be freed with free.
 *
 * Return: NULL if str = NULL.
 * On success, the _strdup function returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *str_copy;
	int i = 0;

	if (str == NULL)
		return (NULL);

	/*Find the length of str*/
	while (str[i] != '\0')
		i++;

	/*Allocate memory using the length of the string*/
	str_copy = (char *)malloc((i * sizeof(char)) + 1);

	if (str_copy == NULL)
		return (NULL);

	/*Copy str content to new memory location*/
	for (i = 0; str[i] != '\0'; i++)
	{
		str_copy[i] = str[i];
	}
	str_copy[i] = '\0';

	return (str_copy);
}

