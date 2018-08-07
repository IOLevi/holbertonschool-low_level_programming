#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using linear
 * @array: pointer to int array
 * @size: size of the array
 * @value: value to search for in the array
 * Return: first index where val located; -1 if not present or NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	/* print the value each time */
	if (!array || size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked at array[%lu] = [%d]\n", (long int)i, array[i]);

		if (array[i] == value)
			return ((int) i);
	}

	return (-1);
}
