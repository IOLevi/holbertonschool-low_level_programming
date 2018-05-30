#include "sort.h"



void shell_sort(int *array, size_t size)
{
	int gaps[] = {13, 4, 1};
	int gap = 0;
	size_t i = 0;
	size_t j;
	size_t temp;
	int temp2;
	int iter;
	int swapval;

	if (!array || size == 0)
		return;


	while (gap < 3)
	{
		for (i = 0; i < size; i++)
		{
			
			for (j = gaps[gap] + i; j < size; j +=gaps[gap])
			{
				temp2 = j;
				while (temp2 - gaps[gap] >= 0 && array[temp2] < array[temp2 - gaps[gap]])
				{
					swapval = array[temp2];
					array[temp2] = array[temp2 - gaps[gap]];
					array[temp2 - gaps[gap]] = swapval;
					temp2 -= gaps[gap];
				}
			}
		}
		print_array(array, size);
		gap++;
	}
	


}