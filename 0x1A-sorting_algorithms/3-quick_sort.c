#include "sort.h"

void qs(int *A, size_t lo, size_t hi)
{
	size_t p;

	if (lo < hi)
	{
		p = partition(A, lo, hi);
		qs(Q, lo, p - 1);
		qs(A, p + 1, hi);	
	}

}

size_t partition(int *A, size_t lo, size_t hi)
{
	int pivot;
	size_t i, j;
	int temp;

	pivot = A[hi];
	i = lo - 1;

	for (j = lo; j < hi; j++)
	{
		if (A[j] < pivot)
		{
			i++;
			temp = A[i];
			A[i] = A[j];
			A[j] = temp;

		}


	}
	temp = A[i + 1];
	A[i + 1] = A[hi];
	A[hi] = temp;
}	



void quick_sort(int *array, size_t size)
{
	qs(array, 0, size - 1);
}
