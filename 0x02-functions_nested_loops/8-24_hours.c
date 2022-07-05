#include "main.h"

/**
 * jack_bauer - prints day of Jack Bauer
 *
 * Descriptio: print every minute of the day
 * Return: void
 */
void jack_bauer(void)
{
	int l1, l2, l3, l4, i;

	l1 = 0;
	while (l1 < 3)
	{
		l2 = 0;
		if (l1 == 2)
			i = 4;
		else
			i = 10;
		while (l2 < i)
		{
			l3 = 0;
			while (l3 < 6)
			{
				l4 = 0;
				while (l4 < 10)
				{
					_putchar('0' + l1);
					_putchar('0' + l2);
					_putchar(':');
					_putchar('0' + l3);
					_putchar('0' + l4);
					_putchar('\n');
					l4++;
				}
				l3++;
			}
			l2++;
		}
		l1++;
	}
}
