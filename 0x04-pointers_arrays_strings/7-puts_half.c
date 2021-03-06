#include "holberton.h"

/**
 * puts_half - prints second half a string followed by a newline
 * @str: string to be manipulated (length_of_the_string - 1) / 2
 */
void puts_half(char *str)
{
	int length = 0;
	int loop;
	int i;

	for (i = 0; str[i] != '\0'; i++)
		length++;

	if (length % 2 ==  0)
		loop = length / 2;
	else
		loop = (length + 1) / 2;

	for (i = loop; i < length; i++)
		_putchar(str[i]);

	_putchar('\n');
}
