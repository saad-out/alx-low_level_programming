#include "main.h"

/* function prototype */
void _putchar(char c);

/**
 * print_alphabet - print a-z
 * Return: void
 */
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
}
