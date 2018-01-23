#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98 + newline
 */
void print_to_98(int n)
{
	int i;

	for (; n < 99; n++)
	{
		printf("%d", n);
		if (n == 98)
		{
			putchar('\n');
		}
		else
		{
			printf(", ");
		}

}
