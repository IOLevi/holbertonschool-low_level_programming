#include "holberton.h"

/**
 * swap_int - swaps two integers
 * @*a: first operand
 * @*b: second operand
 */
void swap_int(int *a, int *b)
{
	int i;

	int i = *a;
	*a = *b;
	*b = i;
}