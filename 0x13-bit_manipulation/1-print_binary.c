#include "holberton.h"

/**
 * print_binary - prints a binary rep of a number
 * @n: the number
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;

	mask = n;
	if (n == 0)
		_putchar('0');

	while (mask > 0)
	{
		if ((n & mask) == 0)
			_putchar('0');
		else
			_putchar('1');
		mask = mask >> 1;
	}
}
