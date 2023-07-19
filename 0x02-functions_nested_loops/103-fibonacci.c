#include <stdio.h>

/**
 * main - Entry point
 * Description: print the all even fibonacci numbers up to 4,000,000
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned long int first = 1;
	unsigned long int second = 2;
	unsigned long int next = first + second;
	unsigned long int sum = 2;

	while (next <= 4000000)
	{
		if (next % 2 == 0)
		{
			sum += next;
		}

		first = second;
		second = next;
		next = first + second;
	}
	printf("%lu\n", sum);

	return (0);
}

