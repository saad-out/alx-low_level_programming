#include <stdlib.h>
#include "main.h"

/**
 * str_concat -  concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to concatenated string | NULL (Failure)
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j, size;

	size = 0;
	if (s1)
	{
		i = 0;
		while (s1[i] != '\0')
			size++;
	}
	if (s2)
	{
		i = 0;
		while (s2[i] != '\0')
			size++;
	}
	if (size)
		s = malloc(sizeof(char) * (size + 1));
	else
		return (0);
	if (s)
	{
		i = 0;
		while (s1 && s1[i] != '\0')
		{
			s[i] = s1[i];
			i++;
		}
		j = 0;
		while (s2 && s2[j] != '\0')
			s[i++] = s2[j++];
		s[i] = '\0';
		return (s);
	}
	return (0);
}
