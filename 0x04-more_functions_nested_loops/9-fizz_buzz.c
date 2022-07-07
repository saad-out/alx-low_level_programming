#include "main.h"

/**
 * main - print 1-100, Fizz for mult of 3 and Buzz for mult of 5
 * Return: always 0
 */
int main(void)
{
	int i;

	i = 1;
	while (i < 101)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			if (i % 3 == 0)
			{
				_putchar('F');
				_putchar('i');
				_putchar('z');
				_putchar('z');
			}
			if (i % 5 == 0)
			{
				_putchar('B');
				_putchar('u');
				_putchar('z');
				_putchar('z');
			}
		}
		else
			_putchar(i + '0');

		_putchar(' ');
		i++;
	}

	return (0);
}
