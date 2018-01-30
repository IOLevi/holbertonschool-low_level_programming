#include "holberton.h"

/**
 * _puts - prints a strg follows by a newline to stdout
 * @str: string to be printed
 */
void _puts(char *str)
{
	int length;
	int i;

	length = _strlen(str);

	for (i = 0; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
