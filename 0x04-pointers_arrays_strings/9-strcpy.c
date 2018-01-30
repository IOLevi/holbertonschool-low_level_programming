#include "holberton.h"

/**
 * *_strcpy - copies the string pointed to by src to the buffer
 * @dest: buffer
 * @src: source string
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int sizedest = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		sizedest++;

	for (i = 0; i < sizedest && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < sizedest; i++)
		dest[i] = '\0';

	return (dest);
}
