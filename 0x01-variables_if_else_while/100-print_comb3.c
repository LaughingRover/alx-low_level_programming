#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	int d;

	for (c = '0'; c <= '9';)
	{
		for (d = c + 1; d <= '9'; d++)
		{
			putchar(c);
			putchar(d);

			if (c != '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
		c++;
	}
	putchar('\n');

	return (0);
}

