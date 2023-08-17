#include <stddef.h>

/**
 * int_index - returns the index of the first element for which the
 * cmp function does not return 0
 * @array: array to search
 * @size: number of elements in the array array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: If no match -1. If size <= 0, -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}

