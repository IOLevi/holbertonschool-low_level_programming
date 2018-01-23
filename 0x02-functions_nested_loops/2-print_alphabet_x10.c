#include "holberton.h"

/**
 * print_alphabet_x10 -prints the alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 0; j < 5; j++)
	{
		for (i = 'a'; i < 'z'; i++)
		{
			_putchar(i);
		}
	}
	_putchar('\n');

}
