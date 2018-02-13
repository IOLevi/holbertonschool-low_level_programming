#include <stdlib.h>
#include "holberton.h"

/**
 * *create_array - creates an array of char, initializes
 * @size: size of the array
 * @c: char to initialize to
 *
 * Return: char pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
		return (NULL);

	p = (char*) malloc(size * sizeof(char));



	if (p)
	{
		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
	}
	else
		return (NULL);

	return (p);
}
