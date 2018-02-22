#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: the array to search
 * @size: number of elements of the array
 * @cmp: pointer to the function to be used to compare values
 * Return: index of the first element for which cmp does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int result;

	if (size <= 0)
		return (-1);

	if (!array)
		return (-1);

	if (!cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);
		if (result)
			return (i);

	}

	return (-1);


}
