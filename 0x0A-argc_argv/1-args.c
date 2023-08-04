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
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}

