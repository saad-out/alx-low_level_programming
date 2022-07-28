#include "main.h"
#include <stdlib.h>

/**
 * _strlen - calculate length of string
 * @s: string given
 * Return: length (int)
 */
unsigned int _strlen(char *s)
{
	unsigned int size, i;

	size = 0;
	i = 0;
	while (s[i++] != '\0')
		size++;

	return (size);
}

/**
 * get_size - calulate size needed to allocate
 * @s1: first string
 * @s2: second string
 * @n: number of bytes for s2
 * Return: size (int)
 */
unsigned int get_size(char *s1, char *s2, unsigned int n)
{
	unsigned int size, i;

	size = 0;
	if (s1)
		size += _strlen(s1);
	if (s2)
	{
		i = _strlen(s2);
		if (i > n)
			size += n;
		else
			size += i;
	}
	return (size);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate from s2
 * Return: pointer to new concatenated string (Success) | NULL (Failure)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size, i, j;
	char *s;

	size = get_size(s1, s2, n);

	s = malloc(sizeof(char) * (++size));
	if (!s)
		return (0);
	i = 0;
	if (s1)
	{
		while (s1[i] != '\0')
		{
			s[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		j = 0;
		while (s2[j] != '\0' && j < n)
			s[i++] = s2[j++];
	}
	s[i] = '\0';
	return (s);
}
