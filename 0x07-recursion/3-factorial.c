#include "holberton.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number to factorialize
 *
 * Return: the resulting factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));

}
