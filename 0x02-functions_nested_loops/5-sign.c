#include "main.h"

/**
 * print_sign - print sign of number
 * @n: number to be checked
 *
 * Return: 1 for positives, 0 for zero, -1 for negative
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
