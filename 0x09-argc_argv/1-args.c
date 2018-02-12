#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints something
 * @argc: number of args
 * @argv: array of char pointers
 *
 * Return: 0
 */
int main(int __attribute__ ((unused)) argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
