#include "sort.h"

void selection_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	size_t smallest;
	size_t idxsmall;
	size_t k;
	int temp;

	smallest = array[0];
	//outer loop of size n
	for (i = 0; i < size; i++)
	{
		//find the smallest in the unsorted set
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

		//swap array[idxsmall] with array[i]
		temp = array[i];
		array[i] = array[idxsmall];
		array[idxsmall] = temp;
	}
}
