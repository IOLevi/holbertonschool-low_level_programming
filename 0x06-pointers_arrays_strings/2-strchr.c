#include "holberton.h"

/**
 * *_strchr - gets pointer to first occurence of a char in string, or null
 * @s: string to evaluate
 * @c: char to search for
 *
 * Return: pointer to the first occurence of c; or null if none
 */
char *_strchr(char *s, char c)
{
	int i;
	int srclen = 0;

	while (s[srclen] != '\0')
		srclen++;

	for (i = 0; i <= srclen; i++)
	{
		if (s[i] == c)
			return ((s + i));
	}

	return (0);

}
