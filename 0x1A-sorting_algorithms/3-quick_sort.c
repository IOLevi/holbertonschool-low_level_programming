#include "sort.h"

size_t partition(int *A, int lo, int hi, size_t size)
{
	int pivot;
	int j;
	int temp;
	int i;

	pivot = A[hi];
	i = lo - 1;

	for (j = lo; j < hi; j++)
	{
		if (A[j] <= pivot)
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
	print_array(A, size); 

	return (i + 1);
}	
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




void quick_sort(int *array, size_t size)
{
	qs(array, 0, size - 1, size);
}
