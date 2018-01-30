#include "holberton.h"

/**
 * puts_half - prints second half a string followed by a newline
 * @*str: string to be manipulated
 */
void puts_half(char *str)
{
	int length = _strlen(str);
	int loop;
	int i;

	if (length % 2 != 0)
		loop = (length - 1) / 2;
        else
                loop = length / 2;

	for (i = loop; i < length; i++)
		_putchar(str[i]);

	_putchar('\n');


}
