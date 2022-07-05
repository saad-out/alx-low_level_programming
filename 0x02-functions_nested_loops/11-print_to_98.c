#include <stdio.h>

/**
 * print_to_98 - prints numbers up/down to 98
 * @n: starting from this number
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
			printf("%d, ", n++);
	}
	else
	{
		while (n > 98)
			printf("%d, ", n--);
	}
	printf("%d\n", 98);
}
