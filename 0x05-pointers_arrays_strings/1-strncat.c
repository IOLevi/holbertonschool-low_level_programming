#include "holberton.h"

/**
 * *_strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes from src to use
 *
 * Return: destination pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0, i;

	while (dest[destlen] != '\0')
		destlen++;

	for (i = 0; i < n & src[i] != '\0'; i++)
		dest[destlen + i] = src[i];
	dest[destlen + i] = '\0';

	return (dest);


}
