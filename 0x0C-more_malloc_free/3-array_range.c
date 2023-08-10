#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: integer
 * @max: integer
 *
 * Description: The array created contains all the values from min (included)
 * to max (included), ordered from min to max
 *
 * Return: the pointer to the newly created array.
 * If min > max, return NULL
 * If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *arr;
	int i = 0;
	int size = max - min + 1; /*Number of elements in array*/

	if (min > max)
		return (NULL);

	arr = malloc(size * sizeof(int));

	if (arr == NULL)
		return (NULL);

	/*Populate array with values from min to max*/
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}

	return (arr);
}

