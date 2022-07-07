#include "main.h"

/**
 * print_diagonal - draw diagonal line on screen
 * @n: number of times '\' should be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	i = 0;
	while (i < n)
	{
		j = 0;
		while ((j++) < i)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');

		i++;
	}
}
