#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints command line arguments
 * @argc: number of args
 * @argv: double pointer
 *
 * Return: 0
 */
int main(int __attribute__ ((unused)) argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{

		printf("%s\n", argv[i]);
	}

	return (0);


}
