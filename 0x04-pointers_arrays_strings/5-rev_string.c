#include "holberton.h"

/**
 * rev_string - reverses a string
 * @*s: string to be reversed
 */
void rev_string(char *s)
{
	int i;
	int length;
	int j = 0;

	length = _strlen(s);

	char copy[length];

	for (i = 0; i <= length; i++)
	{
		copy[i] = s[i];

		_putchar(copy[i]);
		_putchar('\n');
	}

	for (i = 0, j = length-1; i <= length; i++, j--)
	{
		_putchar(s[i]);
		_putchar(copy[j]);
		_putchar('\n');

		s[i] = copy[j];
	}
	_putchar('\n');
}
