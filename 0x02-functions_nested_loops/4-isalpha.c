#include "holberton.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: char to be checked
 *
 * Return: 1 if c is a letter, lower or upper. Returns 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 97) && (c <= 123))
		return (1);

	if ((c >= 65) && (c <= 90))
		return (1);

	return (0);

}
