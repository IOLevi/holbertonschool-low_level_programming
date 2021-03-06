#include <stdlib.h>
#include "holberton.h"

/**
 * *str_concat - concatenates two strings
 * @s1: first operand
 * @s2: second operand
 *
 * Return: pointer to the new string
 */
char *str_concat(char *s1, char *s2)
{
	int lens1 = 0, lens2 = 0;
	char *p;
	int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[lens1] != 0)
		lens1++;

	while (s2[lens2] != 0)
		lens2++;

	p = (char *)malloc(sizeof(char) * (lens1 + lens2) + 1);

	if (!p)
		return (NULL);

	if (lens1 + lens2 == 0)
	{
		p[0] = '\0';
		return (p);
	}

	for (i = 0; i < lens1; i++)
		p[i] = s1[i];

	for (j = 0; j <= lens2; j++)
		p[j + i] = s2[j];

	return (p);

}
