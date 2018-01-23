#include "holberton.h"

/**
 * _islower - checks for lowercase character
 *
 * Return: 1 if lowercase. otherwise 0
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 123))
		return (1);

	return (0);
}
