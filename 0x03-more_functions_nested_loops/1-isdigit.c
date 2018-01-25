#include “holberton.h”

/**
 * 1-isdigit - checks for a digit 0 through 9
 * @c: digit to be checked
 *
 * Return: 1 ic c is a digit; 0 otherwise
 */
int _isdigit(int c)
{
	if ((c >= 47) && (c <= 57))
		return (1);

	return (0);

}
