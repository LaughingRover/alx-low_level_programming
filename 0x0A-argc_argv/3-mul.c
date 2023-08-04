#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count, must be at least 1
 * @argv: argument vector, must contain at least 1 argument,
 * arg[0] is the program name
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);
	return (0);
}

