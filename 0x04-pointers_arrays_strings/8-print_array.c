#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array followed by newline
 * @*a: array of ints
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int size = sizeof(a);
	int elements = size / 4;
	int i;

	for (i = 0; i < elements; i++)
	{
		printf("%d, ", i);


}
