#include "main.h"

/**
 * leet - encode into 1337
 * @s: string given
 * Return: encoded string
 */
char *leet(char *s)
{
	int i, j;
	char l[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char r[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (j < 10)
		{
			if (s[i] == l[j])
				s[i] = r[j];
			j++;
		}
		i++;
	}
	return (s);
}
