#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string given
 * Return: capitalized stirng
 */
char *cap_string(char *s)
{
	int i, j;
	char sep[] = {' ', 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (sep[j] != '\0')
		{
			if (s[i] == sep[j])
			{
				if (s[i + 1] >= 97 && s[i + 1] <= 122)
					s[i + 1] = s[i + 1] - 32;
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
