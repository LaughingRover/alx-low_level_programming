#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the numbers from 1 - 100
 * Prints fizz for multiples of 3
 * prints Buzz for multiples of 5
 * prints FizzBuzz for multiples of 3 and 5
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (((i % 3) == 0) && ((i % 5) == 0))
			printf("FizzBuzz");
		else if ((i % 3) == 0)
			printf("Fizz");
		else if ((i % 5) == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i < 100)
			putchar(' ');

		i++;
	}
	putchar('\n');

	return (0);
}
