#include "holberton.h"

/**
 * _isupper - checks for uppercase character
 * @c: char to check
 *
 * Returns: returns 1 if c is upper; 0 otherwise
 */
int _isupper(int c)
{
	if ((c > = 97) && (c <= 122))
		return (1);

	if ((c > = 65) && (c <= 90))
		return (1);

        return (0);
}
