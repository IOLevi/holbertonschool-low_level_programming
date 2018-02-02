#include "holberton.h"

/**
 * *rot13 - encodes a string using rot13
 * @s: char pointer to string
 *
 * Return: encoded string
 */
char *rot13(char *s)
{
	char match[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char outpu[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0, j = 0;

	while (s[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == match[j])
			{
				s[i] = outpu[j];
				break;
			}
		}
		i++;

	}

	return (s);

}
