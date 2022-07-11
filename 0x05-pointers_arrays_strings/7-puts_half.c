#include "main.h"

/**
 * puts_half - print second half of string
 * @str: given string
 * Return: void
 */
void puts_half(char *str)
{
	int slow, fast;

	slow = 0, fast = 0;
	do {
		slow++;
		fast += 2;
	} while (str[fast - 1] != '\0' && str[fast] != '\0');

	while (str[slow] != '\0')
		_putchar(str[slow++]);

	_putchar('\n');
}
