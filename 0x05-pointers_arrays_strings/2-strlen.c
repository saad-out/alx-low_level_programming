#include "main.h"

/**
 * _strlen - finds length of a string
 * @s: string given
 * Return: length
 */
int _strlen(char *s)
{
	int size, i;

	i = 0;
	size = 0;
	while (s[i++] != '\0')
		size++;

	return (size);
}
