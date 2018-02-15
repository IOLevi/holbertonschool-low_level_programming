#include <stdlib.h>
#include <stdio.h>

/**
 * *array_range - creates an array of integers
 * @min: starting value of array range, inclusive
 * @max: last value of array range, inclusive
 *
 * Return: pointer to int array
 */
int *array_range(int min, int max)
{
	int *p;
	int i, j = 0;

	if (min > max)
		return (NULL);

	p = malloc((max - min + 1) * sizeof(int));

	if (!p)
		return (NULL);

	for (i = min; i <= max; i++)
		p[j++] = i;

	return (p);

}
