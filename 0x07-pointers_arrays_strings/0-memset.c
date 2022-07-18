#include "main.h"

/**
 * _memset - fills n bytes of memory s by constant byte b
 * @s: pointer to memory to be filled
 * @b: constant byte
 * @n: number of bytes
 * Return: pointer to memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
		s[i++] = b;

	return (s);
}
