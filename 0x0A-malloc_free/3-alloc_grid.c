#include <stdlib.h>
#include "holberton.h"

/**
 * **alloc_grid - creates 2 dimensional array of ints
 * @width: width
 * @height: height
 *
 * Return: pointer to the 2d array
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	p = (int **)malloc(sizeof(int *) * height);
	if (!p)
		return (NULL);

	for (i = 0; i < width; i++)
		p[i] = (int *)malloc(sizeof(int) * width);

        for (i = 0; i < height; i++)
		if (p[i] == NULL)
			return (NULL);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}

	return (p);

}
