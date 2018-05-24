#include "sort.h"

/**
 * swap - swaps two integers in an array
 * @A: array of ints
 * @x: first index
 * @y: second index
 */
void swap(int *A, size_t x, size_t y)
{
	int temp;

	temp = A[x];
	A[x] = A[y];
	A[y] = temp;
}	

/**
 * bubble_sort - sorts an array of ints in ascending order (bubble)
 * @array: array of integers
 * @size: number of integers in the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t swapped;

	do 
	{
		swapped = 0;
		for (i = 1; i < size; i++)
		{
			if (array[i - 1] > array[i])
			{
				swap(array, i - 1, i);
				swapped = 1;
				print_array(array, size);
			}

		}
	} while (swapped);
}
