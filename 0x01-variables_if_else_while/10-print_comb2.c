#include <stdio.h>

/**
 * main - prints 00 to 99
 *
 *Return: 0
 */
int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			if (!(j == '9' && i == '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
