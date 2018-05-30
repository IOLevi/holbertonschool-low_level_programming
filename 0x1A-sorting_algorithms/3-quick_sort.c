#include "sort.h"
#include <stdio.h>

/**
 * partition - returns a partition
 * @A: the array
 * @lo: the low value
 * @hi: the high value
 * @size: size of the array
 * Return: the pivot
 */
size_t partition(int *A, int lo, int hi, size_t size)
{
	int pivot;
	int j;
	int temp;
	int i;

	pivot = A[hi];
	i = lo;
	for (j = lo; j < hi; j++)
	{
		if (A[j] <= pivot)
		{
			if (i != j)
			{
				temp = A[i];
				A[i] = A[j];
				A[j] = temp;
				print_array(A, size);
			}

			i++;
		}
	}
	if (i != hi)
	{
		temp = A[i];
		A[i] = A[hi];
		A[hi] = temp;
		print_array(A, size);
	}
	return (i);
}

/**
 * qs - makes the recursive calls with the pivot from partition
 * @A: the array
 * @lo: the low value
 * @hi: the high value
 * @size: size of A
 */
void qs(int *A, int lo, int hi, size_t size)
{
	int p;

	if (lo < hi)
	{
		p = partition(A, lo, hi, size);
		qs(A, lo, p - 1, size);
		qs(A, p + 1, hi, size);
	}
}

/**
 * quick_sort - sorts an array with quick sort recursion
 * @array: array to sort
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	qs(array, 0, size - 1, size);
}

