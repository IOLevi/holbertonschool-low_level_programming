#include "holberton.h"

/**
 * *leet - encodes a string into l337
 * @s: string to be encoded
 *
 * Return: a char pointer
 */
char *leet(char *s)
{

	int i = 0, j = 0;
	char replace[] = "a4A4e3E3o0O0t7T7l1L1";


	while (s[i] != '\0')
	{
		for (j = 0; j < 20; j += 2)
		{
			if (s[i] == replace[j])
			{
				s[i] = replace[j + 1];
			}
		}
		i++;
	}
	return (s);

}
