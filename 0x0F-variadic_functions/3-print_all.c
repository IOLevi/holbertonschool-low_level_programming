#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * _printint - prints a number
 * @args: a va_list
 */
void _printint(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * _printfloat - prints a number
 * @args: a va_list
 */
void _printfloat(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * _printstring - prints a number
 * @args: a va_list
 */
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
/**
 * _printchar - prints a number
 * @args: a va_list
 */
void _printchar(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * print_all - prints a number
 * @format: formatting string
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *sep = "";
	Match match[] = {
		{"f", _printfloat},
		{"i", _printint},
		{"c", _printchar},
		{"s", _printstring},
		{NULL, NULL}
	};

	va_start(args, format);
	if (!format)
		return;

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
