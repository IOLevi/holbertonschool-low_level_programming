#include "holberton.h"

/**
 * is_prime_number - determine if argument is a prime
 * @n: number to check
 *
 * Return: 1 if prime; 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 0)
		return 0;

	if (n % (n - 1) == 0)
		return 1;

	return (is_prime_number(n - 1));


}
