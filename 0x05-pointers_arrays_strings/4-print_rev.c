#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: string given
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;

	i--;
	while (i >= 0)
		_putchar(s[i--]);

	_putchar('\n');
}
