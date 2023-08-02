#include "main.h"

/**
 * factorial - finds the factorial of a number
 * @n: integer
 *
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1); /*Return -1 to indicate an error if n is negative*/
	}

	if (n == 0)
	{
		/*Base case: Return 1 when n is 0 (factorial of 0 is 1)*/
		return (1);
	}

	/*Recur with n-1 and multiply the result by n*/
	return (n * factorial(n - 1));
}

