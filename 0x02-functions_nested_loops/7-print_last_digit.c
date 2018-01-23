#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number to be formatted
 *
 * Return: Last digit
 */
int print_last_digit(int n)
{
	int y;

	if (n < 0)
		y = n * -1;
	else if (n == 0)
		y = 0;
	else
		y = n;

	_putchar(y % 10  + '0');
	return (y % 10);
}
