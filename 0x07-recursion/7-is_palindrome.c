#include "holberton.h"


/**
 * findlen - finds length
 * @s: string to test
 *
 * Return: the length
 */
int findlen(char *s)
{
	if (*s == 0)
		return (0);

	return (1 + findlen(s + 1));
}

/**
 * help - determines whether string is a palindrome
 * @s: string to check
 * @q: iterator to offset the comparison
 *
 * Return: 1 if palindrome; zero if not
 */
int help(char *s, int q)
{
	int n;

	n = findlen(s);
	if (n == 1)
		return (1);

	if (s[0] != s[n - 1 - q])
		return (0);

	return (help(s + 1, q + 1));
}

/**
 * is_palindrome - determines if a string is the same forwards and backwards
 * @s: string
 *
 * Return: 1 if palindrome; 0 if not
 */
int is_palindrome(char *s)
{
	return (help(s, 0));
}
