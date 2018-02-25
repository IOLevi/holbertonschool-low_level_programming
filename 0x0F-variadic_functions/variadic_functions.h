#ifndef CESTCOOL
#define CESTCOOL
#include <stdarg.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct test - this is a struct
 * @s: test
 * @f: test
 */
typedef struct test{
	char *s;
	void (*f)(va_list);
} Match;
#endif
