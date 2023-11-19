#include <stdio.h>

/**
 * add - add two numbers
 * @a: first number
 * @b: second number
 *
 * Return: Always 1 (Success)
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtract two numbers
 * @a: first number
 * @b: second number
 *
 * Return: Always 1 (Success)
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiplu two numbers
 * @a: first int
 * @b: second int
 *
 * Return: a * b (Success)
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divide two numbers
 * @a: firsat int
 * @b: second int
 *
 * Return: a/b (*Suyccess)
 */
int div(int a, int b)
{
	return (a / b);
}

/**
 * mod - calculate and return the modulus of two digits
 * @a: int a
 * @b: second int
 *
 * Return: a**b (Success)
 */
int mod(int a, int b)
{
	int result;

	result = a % b;
	return (result);
}

