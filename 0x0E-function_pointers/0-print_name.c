#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: string containing the name
 * @f: function pointer, returns voice and takes a char *
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name)
		return;
	f(name);
}
