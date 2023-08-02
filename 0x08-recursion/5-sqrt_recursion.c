#include "main.h"

int _sqrt_helper(int n, int start, int end);

/**
 * _sqrt_recursion - square root a number
 * @n: number to find the square root of
 *
 * Return: returns the natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1); /*Return -1 to indicate an error for -tive num*/
	}

	/* Call the helper function to find the square root*/
	return (_sqrt_helper(n, 1, n));
}

/**
 * _sqrt_helper - is a helper function to find the sqrt
 * @n: number to find the square root of
 * @start: start
 * @end: end
 *
 * Return: square root
 */
int _sqrt_helper(int n, int start, int end)
{
	int mid = start + (end - start) / 2;
	int square = mid * mid;

	if (start > end)
	{
		return (-1); /*Square root not found, return -1*/
	}

	if (square == n)
	{
		return (mid); /*Found the square root*/
	}
	else if (square > n)
	{
		/*Search in the lower half*/
		return (_sqrt_helper(n, start, mid - 1));
	}
	else
	{
		/*Search in the upper half*/
		return (_sqrt_helper(n, mid + 1, end));
	}
}

