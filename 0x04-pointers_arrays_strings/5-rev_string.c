#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed pointer pointer pointed
 */
void rev_string(char *s)
{
	int i;
	int length = 0;
	int j = 0;
	char copy[200];

	for (i = 0; s[i] != '\0'; i++)
		length++;

	for (i = 0; i < length; i++)
	{
		copy[i] = s[i];
	}

	for (i = 0, j = length - 1; i < length; i++, j--)
	{
		s[i] = copy[j];
	}
}
