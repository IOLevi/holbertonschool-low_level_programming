#include "holberton.h"

/**
 * _isupper - checks for uppercase character
 * @c: char to check
 *
 * Return: returns 1 if c is upper 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
