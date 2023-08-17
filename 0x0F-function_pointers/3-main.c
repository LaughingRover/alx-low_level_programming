#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

typedef int (*operation_function)(int, int);

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Usage: calc num1 operator num2
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *op = "+-*/%";
	char *operator;
	operation_function op_func;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	/*Check if operator is valid*/
	if (strlen(operator) != 1 || strchr(op, *operator) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	/*Check for invalid operation (division or modulo by zero)*/
	if ((*operator == '/' || *operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	/*Get the result of the calculation*/
	op_func = get_op_func(operator);
	result = op_func(num1, num2);

	printf("%d\n", result);

	return (0);
}

