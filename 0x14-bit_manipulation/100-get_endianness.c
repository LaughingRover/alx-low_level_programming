#include <stdio.h>

/**
 * get_endianness - returns the number of bits you would need to flip
 * to get from one number to another.
 *
 * Return: number of bits
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *byte_ptr = (char *)&num;

	/**
	 * If the first byte (lowest address) contains the
	 * least significant bit, it's little endian
	 * Otherwise, it's big endian
	 */
	return ((byte_ptr[0] == 1) ? 1 : 0);
}

