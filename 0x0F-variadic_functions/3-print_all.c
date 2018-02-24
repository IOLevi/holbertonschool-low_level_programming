#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

void _printint(va_list args)
{
	printf("%d", va_arg(args, int));
}

void _printfloat(va_list args)
{
	printf("%f", va_arg(args, double));
}

void _printstring(va_list args)
{
	char *s;

	s = va_arg(args, char *);

	if (s)
	{
		printf("%s", s);
		return;
	}
		printf("(nil)");
}

void _printchar(va_list args)
{
	printf("%c", va_arg(args, int));
}
void print_all(const char * const format, ...)
{
	va_list args;
	va_start(args, format);
	int i = 0, j = 0;
	char *sep = "";
	Match match[] = {
		{"f", _printfloat},
		{"i", _printint},
		{"c", _printchar},
		{"s", _printstring},
		{NULL, NULL}
	};

	
	while (format[i] != 0)
	{
		j = 0;
		while (match[j].f != NULL)
		{
			if (*match[j].s == format[i])
			{
				printf("%s", sep);
				match[j].f(args);
				sep = ", ";
			}
			j++;
		}
		i++;
	}

	printf("\n");

	va_end(args);
}
