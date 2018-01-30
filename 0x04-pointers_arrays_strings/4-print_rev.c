#include "holberton.h"

/**
 * print_rev -  prints a string in reverse followed by a new line
 * @s: string to be checked
 */
void print_rev(char *s)
{
	int i;
	int length = _strlen(s);

	for (i = length - 1; i == 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
