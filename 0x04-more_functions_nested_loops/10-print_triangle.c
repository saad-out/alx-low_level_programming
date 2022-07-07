#include "main.h"

/**
 * print_triangle - draw triangle on screen
 * @size: size of triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - i - 1)
		{
			_putchar(' ');
			j++;
		}

		while (j < size)
		{
			_putchar('#');
			j++;
		}

		_putchar('\n');
		i++;
	}
}
