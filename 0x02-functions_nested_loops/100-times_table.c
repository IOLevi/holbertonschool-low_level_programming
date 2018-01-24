#include "holberton.h"

/**
 * print_times_table - prints the n times table
 * @n: number of times to print
 */
void print_times_table(int n)
{
	int c, r, p;

	for (r = 0; r < n; r++)
	{
		for (c = 0; c < n; c++)
		{
			p = r * c;

			if (p < 10)
			{
				_putchar(p + '0');
			}
			else if (p <100)
			{
				_putchar(p / 10 + '0');
				_putchar(p % 10 + '0');
			}
			else
			{
				_putchar(p / 100 + '0');
				_putchar(p / 10 + '0');
				_putchar(p % 10 + '0');
			}

			if (c == n)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
				if (((c + 1) * r) < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				else if (((c + 1) * r) < 100)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
					_putchar(' ');
			}
		}

	}


}
