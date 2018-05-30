#include "sort.h"


void counting_sort(int *array, size_t size)
{
	//allowed to use malloc and free for this task
	//array is of size k + 1 where k is the largest number in array
	//print array when it is set up

	size_t i;
	int *count;
	int k;
	size_t j;
	int total;
	int key;
	int *new;

	if (!array || size == 0)
		return;

	k = array[0];
	
	/*k is the largest item in the array*/
	for(i = 1; i < size; i++)
	{
		if (array[i] > k)
			k = array[i];

	}
	
	/*array of size k + 1 with every item initialized to zero*/
	count = malloc(sizeof(int) * (k + 1));
	
	if (!count)
	{
		free(count);
		return;
	}

	for (j = 0; j < k + 1; j++)
		count[j] = 0;

	/*initialize counts where count[i] == number of keys equal to i*/	
	for (i = 0; i < size; i++)
		count[array[i]]++;

	/*convert to indexes*/
	
	for (i = 0; i < k; i++)
	{
		total = count[i] + count[i+1];
		count[i+1] = total;
	}
	print_array(count, k + 1);

	new = malloc(sizeof(int) * size);
	if (!new)
		return;

	for (i = 0; i < size;i++)
	{
		key = count[array[i]];
		new[key - 1] = array[i];
		count[array[i]]++;
	}		

	for (i = 0; i < size; i++)
	{
		array[i] = new[i];
	}
	free(count);	
	free(new);
}
