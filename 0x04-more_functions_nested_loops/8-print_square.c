#include "main.h"

/**
 * print_square - draws square on the screen
 * @size: number of times '#' should be printed (size of square)
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}

	i = 0;
	while ((i++) < size)
	{
		j = 0;
		while ((j++) < size)
			_putchar('#');

		_putchar('\n');
	}
}
