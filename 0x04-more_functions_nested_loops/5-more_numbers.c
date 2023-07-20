#include "main.h"

void print_single_digit(int num);

/**
 * more_numbers - prints 10 numbers from 0-14
 */
void more_numbers(void)
{
	int i = 0, j;

	while (i < 9)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j <= 9)
			{
				print_single_digit(j);
			}
			else if (j > 9)
			{
				print_single_digit(j / 10);
				print_single_digit(j % 10);
			}
		}

		i++;
		_putchar('\n');
	}
}

/**
 * print_single_digit - print a single digit of a number
 * @num: number
 */
void print_single_digit(int num)
{
	_putchar(num + '0');
}

