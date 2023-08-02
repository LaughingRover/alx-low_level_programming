#include "main.h"

int is_prime_helper(int n, int i);

/**
 * is_prime_number - checks for prime number
 * @n: number
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0); /*Return 0 for non-positive numbers and 1*/
	}

	/*Call the helper function to check if n is prime*/
	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - is a recursive helper function that checks
 * if n is divisible by any number from 2 to n - 1
 * @n: number
 * @i: 2
 *
 * Return: prime number
 */
int is_prime_helper(int n, int i)
{
	/**
	 * Base case: if n is divisible by any number less than n,
	 * it is not prime
	 */
	if (i >= n)
	{
		return (1); /*n is prime*/
	}

	if (n % i == 0)
	{
		return (0); /*n is not prime*/
	}

	/*Recursively check the next number*/
	return (is_prime_helper(n, i + 1));
}

