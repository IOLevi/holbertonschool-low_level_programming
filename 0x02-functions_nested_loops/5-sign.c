#include <stdio.h>

/**
 * print_sign prints the sign of a number
 *
 * Return: returns 1 and prints + if n is > 0; 0 and prints 0 if n > 0;
 * -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar('\n');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar('\n');
		return (-1);
	}
}
