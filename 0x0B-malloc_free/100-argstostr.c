#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all arguments passed
 * @ac: arguments count
 * @av: arguments vector (array of strings)
 * Return: pointer to new string | NULL (Failure)
 */
char *argstostr(int ac, char **av)
{
	int size, i, j, index;
	char *s;

	if (!ac || !av)
		return (0);

	size = 0;
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j++] != '\0')
			size++;
		i++;
	}
	size += (ac + 1);

	s = malloc(sizeof(char) * size);
	if (!s)
		return (0);

	index = 0;
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
			s[index++] = av[i][j++];

		s[index++] = '\n';
		i++;
	}
	s[index] = '\0';
	return (s);
}
