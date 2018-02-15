#include <stdlib.h>
#include "holberton.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: int to point to
 * Return: a void pointer to the integer argument
 */
void *malloc_checked(unsigned int b)
{

	int *p;

	p = malloc(b);

	if (!p)
		exit(98);

	return (p);

}
