#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: a string
 * @accept: prefix substring
 *
 * Return: number of bytes of the initial segment s that overlap accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int slen = 0, acceptlen = 0;
	unsigned int counter = 0;

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
				counter++;
				break;
			}
		}
	}

	return (counter);

}
