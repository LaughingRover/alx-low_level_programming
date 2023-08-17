#include <stddef.h>

/**
 * array_iterator - executes a function given as a parameter on
 * each element of an array
 * @array: int (array of integers)
 * @size: size_t (size of the array)
 * @action: void (pointer to a function)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (array == NULL || action == NULL)
		return;

	while (i < (int)size)
	{
		action(array[i]);
		i++;
	}
}

