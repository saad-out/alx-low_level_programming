#include "main.h"

/**
 * more_numbers - print 10 times from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int j, k;
	char i;

	j = 0;
	while (j < 10)
	{
		i = '0';
		while (i <= '9')
			_putchar(i++);

		k = 0;
		while (k < 10)
		{
			if (k == 0)
				i = '1';
			else if (k == 1)
				i = '0';
			else if ((k >= 2 && k <= 4) || k == 6 || k == 8)
				i = '1';
			else if (k == 5)
				i = '2';
			else if (k == 7)
				i = '3';
			else
				i = '4';

			_putchar(i);
			k++;
		}
		_putchar('\n');
		j++;
	}
}
