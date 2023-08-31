#include <stdio.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number
 * @index: index is the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1); /*Return -1 if the index is out of range*/
	}

	/*Create a mask with a '1' at the specified index*/
	mask = 1UL << index;

	/*Use bitwise AND with the complement of the mask to clear the bit*/
	*n = *n & (~mask);

	return (1); /*Return 1 to indicate success*/
}

