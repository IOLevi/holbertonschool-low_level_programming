#include <stdlib.h>
#include "holberton.h"

/**
 * void *_calloc - duplicate calloc functionality
 * @nmemb: number of elements
 * @size: size of a single element
 *
 * Return: a pointer to the array, all intialized to zero; null if failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (!p)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		*(p + i) = '0';

	return (p);
}
