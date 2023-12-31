#include <stddef.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - returns a pointer to the function that corresponds to the
 * operator given as a parameter
 * @s: operator passed as argument to the program
 *
 * Description: get_op_func("+") should return a pointer to the function op_add
 *
 * Return: If s does not match any of the 5 expected operators (+, -, *, /, %),
 * return NULL. Else return pointer to corresponding function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < (int)(sizeof(ops) / sizeof(ops[i])))
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}

