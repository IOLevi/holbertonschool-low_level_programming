#include "holberton.h"

/**
 * _sqrt - returns the natural square root of a number
 * @n: number to check against
 * @x: something
 *
 * Return: the natural square root of a number; -1 if it doesn't have one
 */
int _sqrt(int n, int x)
{
	if (n / (x * x) == 1)
		return (x);

	if (x > n / x)
		return (-1);

	return (_sqrt(n, x + 1));

}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: operand
 *
 * Return: the natural square root of a number; -1 if doesn't exist
 */
int _sqrt_recursion(int n)
{
	_sqrt(n, 1);
}
