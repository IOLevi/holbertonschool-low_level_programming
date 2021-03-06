#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - write a function that executes a function on an array
 * @array: array of ints
 * @size: size of the array
 * @action: pointer to the function to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array)
		return;

	if (size <= 0)
		return;

	if (!action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);


}
