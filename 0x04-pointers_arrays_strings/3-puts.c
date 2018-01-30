#include "holberton.h"

/**
 * _puts - prints a strg follows by a newline to stdout
 * @str: string to be printed
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i++]);
	}
	_putchar('\n');
}
