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
	int smallest;
	size_t idxsmall;
	int temp;

	if (!array || size == 0)
		return;

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

		if (i != idxsmall)
		{
			temp = array[i];
			array[i] = array[idxsmall];
			array[idxsmall] = temp;
			print_array(array, size);
		}
	}
}
