#include "holberton.h"

/**
 * print_rev prints a string in reverse followed by a new line
 * @*s: string to be checked
 */
void print_rev(char *s)
{
	int i;
	int length;

	for (i = 0; s[i] != '\0'; i++)
		length++;

	for (i = length; i == 0; i--)
		_putchar(s[i]);

	_putchar('\n');

}
