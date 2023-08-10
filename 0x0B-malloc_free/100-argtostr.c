#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: argument count
 * @av: argument variable
 *
 * Return: NULL if ac == 0 or av == NULL. A pointer to a new string,
 * or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, index = 0;
	int len = 0;
	char *new_str;

	if (ac == 0 || av == NULL)
		return (NULL);

	/*Total length of concatenated string*/
	while (i++ < (ac - 1))
		len = strlen(av[i]) + 1;

	/*Allocate memory for concatenated string*/
	new_str = (char *)malloc(len * sizeof(char));
	if (new_str == NULL)
		return (NULL);

	/*Loop through each arg and concatenate*/
	for (i = 1; i < ac; i++)
	{
		for (j = 0; j < (int)strlen(av[i]); i++)
		{
			new_str[index] = av[i][j];
			index += 1;
		}
		strcat(new_str, "\n");
	}
	new_str[i] = '\0';

	return (new_str);
}

