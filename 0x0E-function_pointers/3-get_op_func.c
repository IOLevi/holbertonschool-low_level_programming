#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - selects the right functions based on the operand
 * @s: operand used to select
 * @
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;
/* op_t has fields .f <function pointer>  and .op <a char pointer>
does it return a function pointers */
	
	i = 0;
	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s)
		{	
			return (ops[i].f);

		}
		i++;
	}
	return (NULL);
}
