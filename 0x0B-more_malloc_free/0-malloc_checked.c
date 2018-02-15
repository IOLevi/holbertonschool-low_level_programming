#include <stdlib.h>
#include "holberton.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: int to point to
 * Return: a void pointer to the integer argument
 */
void *malloc_checked(unsigned int b)
{
	/* what if unsigned int b is empty */

	int *p;

	p = malloc(sizeof(int) * b);

	if (!p)
		exit(98);
	*p = b;
	return (p);

}
