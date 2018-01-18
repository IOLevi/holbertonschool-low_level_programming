#include <stdio.h>

/**
 * main - prints the alphabet except q and e
 *
 *Return: 0
 */
int main(void)
{
	int i;
	for (i = 97;i < 123; i++)
	{
		if (i == 113 || i == 101)
			continue;
		putchar(i);
	}
	putchar('\n');
}
