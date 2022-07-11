#include "main.h"

/**
 * _puts - print string
 * @str: string to be printed
 * Return: void
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		_putchar(str[i++]);

	_putchar('\n');
}
