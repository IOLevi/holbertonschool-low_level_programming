#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i, j, k, l;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}
	j = size - 1;

	for (i = 0; i < size; i++)
	{
		for (k = 0; k < j; k++)
		{
			_putchar(' ');
		}
		j--;

		for (l = 0; l < i + 1; l++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}
