#include <stdlib.h>
#include "holberton.h"


/**
 * *_strdup - duplicates a string
 * @str: string to duplicate
 *
 * Return: pointer to the duplicate
 */
char *_strdup(char *str)
{

	int len = 0;
	char *p;
	int i;

	if (str == NULL)
		return (NULL);

	while (str[len] != 0)
	{
		len++;
	}

	if (len == 0)
	{
		p = (char *)malloc(sizeof(char));
		p[0] = '\0';
		return (p);
	}

	p = (char *)malloc(sizeof(char) * len);

	if (!p)
		return (NULL);

	for (i = 0; i <= len; i++)
		p[i] = str[i];

	return (p);
}
