#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i, s, k;
	if (size < 1)
	{
		_putchar('\n');
		return;
	}

        for (i = 0; i < size; i++)
	{
		for (s = 1; s < size; s++)
		{
			_putchar(' ');
		}
		

		for (k = 0; k < i; k++)
		_putchar('#');

		_putchar('\n');
	}
	_putchar('\n');

}
