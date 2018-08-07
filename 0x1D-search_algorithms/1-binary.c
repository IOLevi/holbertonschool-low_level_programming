#include "search_algos.h"

/**
 * binary_search - searches a sorted array using binary search
 * @array: sorted array to search
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of array value; -1 if not present or list empty
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t l, r, m;
	/* array sorted in ascending order */
	if (!array || size == 0)
		return (-1);

	l = 0;
	r = size - 1;

	while (l <= r)
	{
		m = (l + r) / 2;

		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			printf("%d", array[i]);
			if (i != r)
				printf(", ");
			else
				printf("\n");
		}

		if (array[m] == value)
			return ((int) m);
		else if (array[m] > value)
		{
			r = m - 1;
		}
		else
		{
			l = m + 1;
		}
	}
	return (-1);
}
