#include "holberton.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: first operand
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;
	_putchar(n % 10  + '0');
	return (n % 10);
}
