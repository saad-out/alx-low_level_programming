#include <stdlib.h>
#include "main.h"

/**
 *_strdup - make duplicate of given string (memory allocated)
 * @str: given string
 * Return: pointer to duplicate | NULL (Failure)
 */
char *_strdup(char *str)
{
	char *dup;
	int i;

	if (!str)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;
	dup = malloc(sizeof(char) * (i + 1));
	if (!dup)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
