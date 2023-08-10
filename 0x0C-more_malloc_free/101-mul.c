#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - check if a string is an integer
 * @str: string
 *
 * Return: If integer return 1 else 0
 */
int is_digit(const char *str)
{
	const char *c = str;

	for (c = str; *c != '\0'; c++)
	{
		if (*c < '0' || *c > '9')
		{
			return (0);
		}
	}
	return (1);
}


/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	unsigned long num1;
	unsigned long num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	num1 = strtoull(argv[1], NULL, 10);
	num2 = strtoull(argv[2], NULL, 10);

	printf("%lu\n", num1 * num2);

	return (0);
}

