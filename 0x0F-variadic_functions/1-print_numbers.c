#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * prints print_numbers - prints numbers, followed by a newline
 * @separator: string to print between numbers 
 * @n: number of variadic arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args; 
	va_start(args, n);
	int i;

	//n is the number of ints
	//you are allowed to use print
	//if separator is null dont print it
	//print a new line at the end of the program
	

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i != n - 1)
			if (separator)
				printf("%s", separator);
	}
	
	printf("\n");
	va_end(args);
}
