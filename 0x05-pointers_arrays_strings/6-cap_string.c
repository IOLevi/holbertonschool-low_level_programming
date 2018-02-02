#include "holberton.h"

/**
 * *cap_string - capitalizes all words of a string
 * @s: string to be manipulated
 *
 * Return: new string
 */
char *cap_string(char *s)
{
	int len = 0; i;

	while (s[len] != '\0')
		len++;

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;

	for (i = 1; i < len; i++)
	{
		switch (s[i])
		{
		case ' ':
		case '\t':
		case '\n':
		case ',':
		case ';':
		case '.':
		case '!':
		case '?':
		case '"':
		case '?':
		case '(':
		case ')':
		case '{':
		case '}':
			if (s[i + 1] >= 'a' && <= 'z')
				s[i + 1] -= 32;
			break;
		default:
			break;
		}
	}
}
