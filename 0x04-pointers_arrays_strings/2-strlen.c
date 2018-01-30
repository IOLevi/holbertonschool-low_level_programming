#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @*s: string to be evaluated
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	char i;
	int length=0;

	for (i = 0; s[i] != '\0'; i++)
		length++;

	return (length);
}
