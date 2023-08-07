#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: array size
 * @c: default init character
 *
 * Return: NULL if size = 0. a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i = 0;

	ar = (char *)malloc((size * sizeof(char)));

	if (size == 0 || ar == NULL)
		return (NULL);

	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	ar[i] = '\0';

	return (ar);
}

