#include <stdio.h>

/**
 * positive_or_negative - check if number is positive, negative or zero
 * @n: number to check
 */
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
}
