#include "main.h"

/**
 * rev_string - reverses a gives string
 * @s: given string
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;
	char rev[1000];

	i = 0;
	while (s[i + 1] != '\0')
		i++;

	j = 0;
	while (i >= 0)
		rev[j++] = s[i--];

	i++;
	j--;
	while (j >= 0)
	{
		s[i] = rev[i];
		i++;
		j--;
	}
}
