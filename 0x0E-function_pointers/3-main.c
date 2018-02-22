#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - main file
 * @argc: number of args
 * @argv: array of strings passed to program
 */
void main(int argc, char *argv[])
{
	int a, b, result;
	int (*fun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	fun = get_op_func(argv[2]);

	if (!fun)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if ((fun == op_div || fun == op_mod) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = fun(a, b);
	printf("%d\n", result);

}
