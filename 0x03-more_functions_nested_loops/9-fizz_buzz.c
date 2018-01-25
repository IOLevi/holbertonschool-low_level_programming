#include <stdio.h>

/**
 * main - prints fizz, buzz, or fizzbuzz, or a number  depending on condition
 *
 * Return: returns 0
 */
int main(void)
{

	int i;

	for (i = 1; i < 101; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else if (i % 3 == 0)
			prtingf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i == 100)
			putchar('\n');
		else
			putchar(' ');
	}

}
