#include "holberton.h"
#include <stdio.h>
/**
 * *_strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: char point to dest string
 */
char *_strcat(char *dest, char *src)
{
	int destlen = 0, srclen = 0, i = 0;

	while (src[i++] != '\0')
		srclen++;

	i = 0;

	while (dest[i++] != '\0')
		destlen++;


	for (i = 0; i < srclen; i++)
		dest[destlen + i] = src[i];

        dest[destlen + i] = '\0';

	return (dest);
}
