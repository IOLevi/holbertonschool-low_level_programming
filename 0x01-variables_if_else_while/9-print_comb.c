#include <stdio.h>

/**
 * main - prints all possible combos of single digits
 *
 *Return: 0
 */
int main(void)
{
	int i;

	for (i='0'; i<='9'; i++)
	{
		putchar(i);
		putchar(',');
	        if (i != '9')
			putchar(' ');
	}
	putchar('\n');
}
