#include "main.h"

/**
 * print_times_table - print times table n times
 * @n: number of times to print times table
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, res, n1, n2, n3;

	if (n < 0 || n > 15)
		return;

	i = 0;
	while (i <= n)
	{
		_putchar(0 + '0');
		j = 1;
		while (j <= n)
		{
			res = i * j;

			n1 = res / 100;
			if (n1 != 0)
				n2 = (res / 10) % 10;
			else
				n2 = res / 10;
			n3 = res % 10;

			_putchar(',');
			_putchar(' ');
			if (n1 != 0)
				_putchar(n1 + '0');
			else
				_putchar(' ');

			if (n1 != 0 || n2 != 0)
				_putchar(n2 + '0');
			else
				_putchar(' ');

			_putchar(n3 + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
