#include "holberton.h"

/**
 * print_alphabet - prints lowercase alphabet
 *
 * Return: 0
 */
void print_alphabet(void)
{
	int i  = 'a';

	for(; i <= 'z'; i++)
		_putchar(i);

	_putchar('\n');
}
