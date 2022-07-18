#include "main.h"

/**
 * _strpbrk - searche string for any of a set of bytes
 * @s: string given
 * @accept: set of bytes
 * Return: pointer to first match | NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);

			j++;
		}
		i++;
	}
	return (0);
}
