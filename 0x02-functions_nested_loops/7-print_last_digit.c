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
		n *= -1;

	y = n % 10;
	_putchar(y + '0');
	return (y);
}
