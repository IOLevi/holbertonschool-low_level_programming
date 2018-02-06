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
	int match = 1;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0' && haystack[i + j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				match = 0;
		}
		if (match)
			return (haystack + i);
	}

	return (0);
}
