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
	for (i=0; i<10; i++)
	{
		for (j=0;j<10;j++)
		{
			putchar(i);
			putchar(j);
			putchar(',');
			if (!((i==9)&&(j==9)))
				putchar(' ');
		}
	}
	putchar('\n');
}
