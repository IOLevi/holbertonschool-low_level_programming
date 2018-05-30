#include "sort.h"

/**
 * selection_sort - sorts an array with selection sort
 * @array: the array
 * @size: the size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	size_t smallest;
	size_t idxsmall;
	size_t k;
	int temp;

	smallest = array[0];
	for (i = 0; i < size; i++)
	{
		smallest = array[i];
		idxsmall = i;
		for (j = i; j < size; j++)
		{
			if (array[j] < smallest)
			{
				smallest = array[j];
				idxsmall = j;
			}
		}

		temp = array[i];
		array[i] = array[idxsmall];
		array[idxsmall] = temp;
	}
}
