#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: number to be checked
 *
 * Return: absolute value of input
 */
int _abs(int n)
{
	if (n == 0)
		return (0);
	else if (n < 0)
		return (n * -1);
	else
		return (n);
}
