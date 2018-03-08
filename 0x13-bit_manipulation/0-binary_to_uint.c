#include "holberton.h"

/**
 * binary_to_uint - converts binary to uint
 * @b: string to convert
 * Return: the result or 0 if it fails
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val;

	if (!b)
		return (0);
	for (val = 0; *b; b++) {
		if (*b == '1') 
			val = (val << 1) | 1;
		else if (*b == '0' ) 
			val = val << 1;
		else 
			return (0);
	}

	return val;
}
