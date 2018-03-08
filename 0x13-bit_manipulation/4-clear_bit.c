#include "holberton.h"

/**
 * clear_bit - clears bit at index
 * @n: pointer to the number
 * @index: index to clear
 * Return: 1 if successful, -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	
	*n = *n & ~(1 << index);

	return (1);	

}
