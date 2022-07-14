#include "main.h"

/**
 * print_number - print a given number using _putchar
 * @n: number to be printed
 * Return: void
 */
void print_number(int n)
{
	unsigned int i, box;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	i = 1;
	box = n;
	while (box > 9)
	{
		i *= 10;
		box /= 10;
	}

	while (i > 0)
	{
		box = n;
		box /= i;
		box %= 10;
		_putchar(box + '0');
		i /= 10;
	}
}
