#include "holberton.h"

/**
 * print_sign - prints the sign of a number
 * @n: number to be eval'd
 *
 * Return: 1 if pos; 0 if 0; -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
