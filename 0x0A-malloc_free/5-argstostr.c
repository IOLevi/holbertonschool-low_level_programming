#include <stdlib.h>
#include "holberton.h"

/**
 * *argstostr - concatnates all the arguments of your program
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

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j] != 0; j++)
			size++;

	size += ac;

	p = (char *)malloc(sizeof(char) * size + 1);

	if (!p)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != 0; j++)
		{
			p[k++] = av[i][j];
		}
		p[k++] = '\n';
	}
	p[k] = '\0';

	return (p);

}
