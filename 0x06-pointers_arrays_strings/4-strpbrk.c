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
	int slen = 0;
	int acceptlen = 0;
	int i, j;

	while (s[slen] != '\0')
		slen++;

	while (accept[acceptlen] != '\0')
		acceptlen++;

	for (i = 0; i < slen; i++)
	{
		for (j = 0; j < acceptlen; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (0);

}
