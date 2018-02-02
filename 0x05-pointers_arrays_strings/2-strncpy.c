#include "holberton.h"

/**
 * *_strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: bytes of src to use
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);

}
