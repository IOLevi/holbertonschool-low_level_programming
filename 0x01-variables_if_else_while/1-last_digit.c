#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the last digit n and check a condition
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int s;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	s = n % 10;
	if (s > 5)
		printf("Last digit of %d is %d and is greater than 5\n", s, n);
	else if (s == 0)
		printf("Last digit of %d is 0 and is 0\n", s, n);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n",\
		       s, n);
	return (0);
}
