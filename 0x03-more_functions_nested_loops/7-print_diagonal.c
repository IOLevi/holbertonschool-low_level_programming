#include "holberton.h"

/**
 * print_diagonal - draws a diagonal on the terminal
 * @n: times to print
 */
void print_diagonal(int n)
{
	int i, k;

	if (n < 1)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (k = 0; k < i; k++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
