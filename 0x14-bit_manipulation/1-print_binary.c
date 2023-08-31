#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int bit_count = sizeof(unsigned long int) * 8;
	int shift;
	int started = 0; /*Flag to track if we've seen the first '1'*/

	for (shift = bit_count - 1; shift >= 0; shift--)
	{
		unsigned long int mask = 1UL << shift;
		int bit = (n & mask) ? 1 : 0;

		if (bit)
		{
			putchar('1');
			started = 1; /*Set the flag once we see the first '1'*/
		}
		else if (started)
		{
			putchar('0'); /*Print '0' only after the first '1'*/
		}
	}

	if (!started)
	{
		putchar('0'); /*Handle the case when the number is zero*/
	}
}


