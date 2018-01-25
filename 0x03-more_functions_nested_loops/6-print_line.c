#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times to print _
 */
void print_line(int n)
{
	int i;

	if (n < 1)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
		_putchar('_');

	_putchar('\n');
}
