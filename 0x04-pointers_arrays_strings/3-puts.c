#include "holberton.h"

/**
 * _puts - prints a strg follows by a newline to stdout
 * @str: string to be printed
 */
void _puts(char *str)
{
	int length = _strlen(str);
	int i;

	for (i = 0; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
