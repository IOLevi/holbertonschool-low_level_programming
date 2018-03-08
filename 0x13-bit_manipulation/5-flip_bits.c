#include "holberton.h"

/**
 * flip_bits - # of bits to flip to get from one # to another
 * @n: number
 * @m: another number
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int val, count = 0;

	val = n ^ m;	

	while(val > 0)
	{
		count += val & 1;
		val = val >> 1 ;
	}
	return (count);

}
