#include "main.h"

/**
 * wildcmp - check if two strings are identical
 * @s1: first string
 * @s2: second string
 * Return: 1 if identical | 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	char a = (*s1), b = (*s2);

	if (a == '\0' || b == '\0')
	{
		if (a == '\0' && b == '\0')
			return (1);
		if (b == '*')
			return (wildcmp(s1, s2 + 1));
		return (0);
	}
	if (b == '*')
	{
		if (s2[1] == '\0')
			return (1);
		if (s2[1] == '*')
			return (wildcmp(s1, s2 + 1));
		if (!wildcmp(s1, s2 + 1))
			return (wildcmp(s1 + 1, s2));
		else
			return (1);
	}
	if (a != b)
		return (0);
	return (wildcmp(s1 + 1, s2 + 1));
}
