#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates array of chars and initializes it with a char
 * @size: array size
 * @c: given char
 * Return: pointer to array | NULL (Failure)
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (!size)
		return (NULL);

	arr = malloc(sizeof(char) * size);
	if (!arr)
		return (NULL);

	i = 0;
	while (i < size)
		arr[i++] = c;

	return (arr);
}
