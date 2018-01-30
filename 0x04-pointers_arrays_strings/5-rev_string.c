#include "holberton.h"
#include "2-strlen.c"

/**
 * rev_string - reverses a string
 * @s: string to be reversed pointer pointer pointed
 */
void rev_string(char *s)
{
	int l = _strlen(s);
	int i;
	int pivot = l / 2;
	char swap;

	for (i = 0; i < pivot; i++)
	{
		swap = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = swap;
	}
}
