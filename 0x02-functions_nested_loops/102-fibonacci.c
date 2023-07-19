#include <stdio.h>

/**
 * main - Entry point
 * Description: print the first 50 fibonacci numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	int n = 50;
	unsigned long int first = 0, second = 1, next;

	for (i = 0; i < n; i++)
	{
		next = first + second;
		first = second;
		second = next;
		printf("%lu", next);

		if (i < (n - 1))
		{
			printf(", ");
		}

	}
	printf("\n");

	return (0);
}

