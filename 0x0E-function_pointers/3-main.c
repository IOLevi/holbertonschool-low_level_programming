#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - main file
 */
void main(int argc, char *argv[])
{
	int a, b, result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	int (*fun)(int, int);

	fun = get_op_func(argv[2]);

	if (!fun)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (fun == op_div || fun == op_mod)
	{
		if (b == 0)
		{
			printf("Error\n");
			exit(100);
		}
	}
	result = fun(a, b);
	printf("%d\n", result);

}
