#include "holberton.h"
/**
 * get_bit - gets the bit at index
 * @n: the number
 * @index: the index
 * Return: the value at index
 */
int get_bit(unsigned long int n, unsigned int index)
{

	int val;
	
	if (index > 32)
		return (-1);

	val = (n >> index) & 1;
	return (val);
}
