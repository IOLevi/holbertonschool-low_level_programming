#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - swaps two integers
 * @a: first operand
 * @b: second operand
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
