#include "main.h"

/**
 * reverse_array - reverse the content of an integer array
 * @a: array
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;
	int mid = n-- / 2;

	for (i = 0; i < mid; i++)
	{
		temp = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = temp;
		n--;
	}
}

