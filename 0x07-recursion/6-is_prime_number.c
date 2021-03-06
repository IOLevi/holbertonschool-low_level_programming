#include "holberton.h"

/**
 * isprime - determins if argument is a prime
 * @n: number to check
 * @x: trial divide
 *
 * Return: 1 if prime, zero if not
 */
int isprime(int n, int x)
{

	if (x == 1)
		return (1);
	if (n % x == 0)
		return (0);

	return (isprime(n, x - 1));


}

/**
 * is_prime_number - determine if argument is a prime
 * @n: number to check
 *
 * Return: 1 if prime; 0 if not
 */
int is_prime_number(int n)
{

	if (n < 2)
		return (0);
	return (isprime(n, n - 1));
}
