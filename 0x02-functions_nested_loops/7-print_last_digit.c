#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number
 *
 * Returns: Last digit
 */
int print_last_digit(int n)
{
	int x;

	x = n % 10;
	if (n < 10)
	{
		putchar(x * -1 + '0');
		return (x * -1 + '0');
	}
	else
	{
		putchar(x + '0');
		return (x + '0');
	}
}
