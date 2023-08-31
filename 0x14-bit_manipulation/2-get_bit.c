#include <stdio.h>

/**
 * get_bit - returns the value of a bit a given index.
 * @n: number
 * @index: is the index, starting from 0 of the bit you want to get
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1); /*Return -1 if the index is out of range*/
	}

	/*set a mask to '1' at the specified index*/
	mask = 1UL << index;

	if ((n & mask) == 0)
	{
		return (0); /*The bit at the specified index is 0*/
	}
	else
	{
		return (1); /*The bit at the specified index is 1*/
	}
}

