#include <stdio.h>

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
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i++]);
	}

	return (0);
}

