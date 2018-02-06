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
	int needlelen = 0;

	while (needle[needlelen] != '\0')
		needlelen++;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; j < needlelen; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
			if (j == needlelen - 1)
				return (haystack + i);
		}
	}

	return (0);
}
