#include <stdio.h>

/**
 * main - prints alphabet in lowercase and uppercase
 *
 *Return: 0
 */
int main(void)
{
	char a[]= {"abcdefghijklmnopqrstuvwxzyABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	int i;
	for (i = 0; i < sizeof(a);i++)
	{
		putchar(a[i]);
	}
	putchar('\n');

}
