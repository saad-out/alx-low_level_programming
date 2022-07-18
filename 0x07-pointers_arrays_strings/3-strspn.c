#include "main.h"

/**
 * _strspn - get length of prefix substring
 * Description: find length of initial s consisting entirely of bytes in accept
 * @s: string given
 * @accept: prefix substring
 * Return: num of bytes consisting only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, bytes;

	i = 0;
	bytes = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				bytes++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (bytes);
}
