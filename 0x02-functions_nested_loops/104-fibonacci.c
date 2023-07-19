#include <stdio.h>

/**
 * main - Entry point
 * Description: print the first 50 fibonacci numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned long int count = 2;
	unsigned long int prev = 1;
	unsigned long int current = 2;
	unsigned long int next;

	printf("1, 2");

	while (count < 98)
	{
		next = prev + current;
		printf(", %lu", next);

		prev = current;
		current = next;
		count++;
	}
	printf("\n");

	return (0);
}

