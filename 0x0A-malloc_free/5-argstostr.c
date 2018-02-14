#include <stdlib.h>
#include "holberton.h"

/**
 * *argtostr - concatnates all the arguments of your program
 * @ac: number of arguments
 * @av: double pointer, arguments
 *
 * Return: point to concatenated arguments
 */
char *argstostr(int ac, char **av)
{

	char *p;
	int size = 0;
	int i, j, k = 0;
	int height = 0;

	if(ac == 0 || av == NULL)
		return (NULL);

	while(av[height])
		height++;

	for (i = 0; i < height; i++)
		for (j = 0; av[i][j] != 0; j++)
			size++;

	size += height;

	p = (char*)malloc(sizeof(char) * size);

	if (!p)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		for (j = 0; av[i][j] != 0; j++)
		{
			p[k++] = av[i][j];
		}
		p[k++] = '\n';
	}

	return (p);

}
