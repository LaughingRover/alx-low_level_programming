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
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}

