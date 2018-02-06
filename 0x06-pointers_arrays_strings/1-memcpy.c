#include "holberton.h"

/**
 * *_memcpy - copies n bytes from memory area src to memory area dst
 * @dest: pointer to dest buffer
 * @src: pointer to src buffer
 * @n: number of bytes to write
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = src[i];
	}


	return (dest);
}
