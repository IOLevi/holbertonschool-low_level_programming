#include "holberton.h"

/**
 * puts2 - prints one char out of 2 of a string followed by a newline
 * @str: string to be manipulated
 */
void puts2(char *str)
{
	int length = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
		length++;

	for (i = 0; i < length; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
