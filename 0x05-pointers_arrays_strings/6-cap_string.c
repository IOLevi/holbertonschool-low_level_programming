#include "holberton.h"

/**
 * *cap_string - capitalizes all words of a string
 * @s: string to be manipulated
 *
 * Return: new string
 */
char *cap_string(char *s)
{
	int i;

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;

	for (i = 0; s[i] != '\0'; i++)
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
		case '"':
		case '?':
		case '(':
		case ')':
		case '{':
		case '}':
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] -= 32;
			break;
		default:
			break;
		}
	}

	return (s);
}
