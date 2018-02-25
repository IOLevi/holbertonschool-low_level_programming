#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings separated by a separator
 * @separator: string to separate items
 * @n: number of string arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *nextarg;


	va_start(args, n);
	if (!separator)
		separator = "";

	for (i = 0; i < n; i++)
	{
		nextarg = va_arg(args, char *);
		if (nextarg)
			printf("%s", nextarg);
		else
			printf("(nil)");
		if (i != n - 1)
		{
			printf("%s", separator);

		}
	}
	printf("\n");
	va_end(args);

}
