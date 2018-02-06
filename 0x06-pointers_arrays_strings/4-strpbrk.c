#include "holberton.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: second string
 *
 * Return: pointer to the byte s that matches bytes in accept; or null if none
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;
	int slen = 0;
	int acceptlen = 0;
	int i, j;

	*p = NULL;

	while (s[slen] != '\0')
		slen++;

	while (accept[acceptlen] != '\0')
		acceptlen++;

	for (i = 0; i <= acceptlen; i++)
	{
		for (j = 0; j <= slen; j++)
		{
			if (s[j] == accept[i])
			{
				if (*p == NULL)
					p = (s + j);
				if ((s + j) < p)
					p = (s + j);
			}

		}
	}

	return (p);

}
