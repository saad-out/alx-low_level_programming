#include <stdlib.h>
#include "main.h"

/**
 * a_free - frees allocated memory for 2D array
 * @s: memory to be freed
 * @i: array (s) length
 * Return: void
 */
void a_free(char **s, int i)
{
	int j;

	j = 0;
	while (j < i)
		free(s[j++]);
	free(s);
}

/**
 * w_count - count words in string in their sizes
 * @s: string given
 * @arr: array to store words' sizes
 * Return: number of words (int)
 */
int w_count(char *s, int *arr)
{
	int i, w, index;

	i = 0;
	w = 0;
	index = 0;
	while (s[i] != '\0')
	{
		if (s[i] != ' ' && s[i] != '\t')
		{
			w++;
			arr[index] = 0;
			while (s[i] != '\0' && s[i] != ' ' && s[i] != '\t')
			{
				arr[index]++;
				i++;
			}
			arr[index++]++;
		}
		else
			i++;
	}
	return (w);
}

/**
 * strtow - splits string into words
 * @str: string given
 * Return: array of words (strings) | NULL (Failure)
 */
char **strtow(char *str)
{
	int words, i, j, index;
	int arr[100];
	char **s;

	if (!str || str[0] == '\0')
		return (0);

	words = w_count(str, arr);
	if (!words)
		return (0);

	s = malloc(sizeof(char *) * (words + 1));
	if (!s)
		return (0);

	i = 0;
	index = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\t')
		{
			s[index] = malloc(sizeof(char) * arr[index]);
			if (!s[index])
			{
				a_free(s, index);
				return (0);
			}
			j = 0;
			while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
				s[index][j++] = str[i++];
			s[index++][j] = '\0';
		}
		else
			i++;
	}
	s[index] = 0;
	return (s);
}
