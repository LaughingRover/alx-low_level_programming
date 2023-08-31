#include <stdio.h>

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: number1
 * @m: number2
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/*XOR the two numbers to find differing bits*/
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result > 0)
	{
		/*Use bitwise AND with 1 to check the least significant bit*/
		count += xor_result & 1;

		/*Right-shift the xor_result to check the next bit*/
		xor_result >>= 1;
	}

	return (count);
}

