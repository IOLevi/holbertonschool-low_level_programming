#include "holberton.h"

/**
 * *_strstr - locates a substring
 * @haystack: string to evaluate
 * @needle: substring to locate
 *
 * Return: pointer to the beginning of the locates substring; null if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;
	int *p = 0;
	int needlelen;
	int bad = 0;

	while (needle[needlelen] != '\0')
		needlelen++;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 1, bad = 0; j < needlelen && haystack[i + j] != '\0' && !(bad); j++)
			{
				if (haystack[i + j] != needle[j])
					bad = 1;
			}

			if (!(bad))
				return (haystack + i);
		}
	}

	return (0);
}
