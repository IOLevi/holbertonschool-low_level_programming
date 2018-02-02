#include "holberton.h"

/**
 * *string_troupper - changes all lowercase letters of a string to uppercase
 * @n: char pointer
 *
 * Return: char pointer
 */
char *string_toupper(char *n)
{
	int len = 0, i;

	while (n[len] != '\0')
		len++;

        for (i = 0; i < len; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] += 38;
	}

	return (n);

}
