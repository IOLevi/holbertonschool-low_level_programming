#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_interator - write a function that executes a function given as a param on each element of array
 * @size: size of the array
 * @action: pointer to the function to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
		action(array[i]);


}
