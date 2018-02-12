#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies arguments
 * @argc: number of args
 * @argv: double pointer
 *
 * Return: 0 or 1
 */
int main(int __attribute__ ((unused)) argc, char *argv[] __attribute__ ((unused)))
{

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);



}
