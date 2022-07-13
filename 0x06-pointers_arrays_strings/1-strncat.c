#include "main.h"

/**
 * _strncat - concatenate two strings with n bytes
 * @dest: first string
 * @src: second string
 * @n: number of bytes to be concatenated
 * Return: pointer to first sting
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, _bool, j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	_bool = 0;
	j = 0;
	while (j < n)
	{
		dest[i++] = src[j];
		if (src[j++] == '\0')
		{
			_bool = 1;
			break;
		}
	}
	if (!_bool)
		dest[i] = '\0';
	return (dest);
}
