#include "holberton.h"

/**
 * _isupper - checks for uppercase character
 * @c: char to check
 *
 * Returns: returns 1 if c is upper; 0 otherwise
 */
int _isupper(int c)
{
	if ((c > = 'A') && (c <= 'Z'))
		return (1);

	if ((c > = 'a') && (c <= 'z'))
		return (1);

        return (0);
}
