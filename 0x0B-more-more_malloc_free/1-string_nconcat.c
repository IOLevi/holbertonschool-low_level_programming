#include <stdlib.h>
#include "holberton.h"

/**
 * *string_nconcat - concatenates two strings
 * @s1: first full string
 * @s2: second string to consist of n bytes
 * @n: number of chars to write from s2
 *
 * Return: pointer to new null terminated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int sizes1 = 0;
	unsigned int sizes2 = 0;
	unsigned int i = 0, j = 0, k = 0;
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[sizes1] != 0)
		sizes1++;

	while (s2[sizes2] != 0)
		sizes2++;

	if (sizes2 < n)
		p = malloc((sizes1 + n + 1) * sizeof(char));
	else
	{
		p = malloc ((sizes1 + sizes2 + 1) * sizeof(char));
		n = sizes2;
	}
	if (!p)
		return (NULL);

	for (i = 0; i < sizes1; i++)
		p[j++] = s1[i];

	for (i = 0; i < n; i++)
		p[j++] = s2[i];

	p[j] = '\0';

	return (p);
