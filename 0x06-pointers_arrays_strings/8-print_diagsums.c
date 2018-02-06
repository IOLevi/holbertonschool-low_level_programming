#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: something
 * @size: number of rows/cols in matrix
 */
void print_diagsums(int *a, int size)
{
	int i, j = 0;
	int ltor = 0;
	int rtol = 0;

	for (i = 0; i < size; i++)
		ltor += *(a + i * (size + 1));

	for (i = size - 1, j = 0; j < size; i += size - 1, j++)
		rtol += *(a + i);

	printf("%d, %d\n", ltor, rtol);

}
