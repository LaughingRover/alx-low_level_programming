#include <stdio.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number
 * @index: is the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1); /*Return -1 if the index is out of range*/
	}

	mask = 1UL << index; /*set mask to '1' at the specified index*/

	/*Use bitwise OR to set the bit at the specified index to 1*/
	*n = *n | mask;

	return (1); /*Return 1 to indicate success*/
}

