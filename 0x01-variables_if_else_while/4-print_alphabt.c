#include <stdio.h>

/**
 * main - prints the alphabet except q and e
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (!(i == 'q' || i == 'e'))
			putchar(i);
	}
	putchar('\n');

	return (0);
}
