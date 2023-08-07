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
	int i, sum;

	if (argc == 1)
	{
		/*If no args are passed, print 0*/
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		/**
		 * Convert to integer,
		 * atoi returns 0 for unsuccesful conversions
		 */
		int num = atoi(argv[i]);

		/*Check if conversion was successful*/
		if (num <= 0 || *argv[i] == '-')
		{
			printf("Error\n");
			return (1);
		}

		sum += num;
	}

	printf("%d\n", sum);
	return (0);
}

