#include "holberton.h"
/**
 * set_bit - sets the value of a bit to 1 at given index
 * @n: number
 * @index: index strating from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	*n = *n | (1 << index);

	return (1);	

}



