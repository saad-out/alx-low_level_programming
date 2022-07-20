#include "main.h"
/**
 * _sl - find length of string
 * @s: string
 * Return: length (int)
 */
int _sl(char *s)
{
	if ((*s) == '\0')
		return (0);
	return (1 + _sl(s + 1));
}

/**
 * pal - compare two character of given string
 * @s: given string
 * @i: first index
 * @j: second index
 * Return: 1 if string is palindrome | 0 if not
 */
int pal(char *s, int i, int j)
{
	if (i >= j)
		return (1);
	if (s[i] != s[j])
		return (0);
	return (pal(s, ++i, --j));
}

/**
 * is_palindrome - checks if string is palindrome
 * @s: string given
 * Return: 1 if palindrom | 0 if not
 */
int is_palindrome(char *s)
{
	int i;

	i = _sl(s);
	if (!i)
		return (1);
	return (pal(s, 0, i - 1));
}
