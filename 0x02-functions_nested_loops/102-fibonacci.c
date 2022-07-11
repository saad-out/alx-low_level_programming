#include <stdio.h>

/**
 * main - print first 50 Fibonacci
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	unsigned long n1, n2, sum;
	int i;

	i = 0, n1 = 1, n2 = 2;
	printf("%lu, %lu", n1, n2);
	while ((i++) < 96)
	{
		sum = n1 + n2;
		printf(", %lu", sum);
		n1 = n2;
		n2 = sum;
	}
	putchar('\n');
	return (0);
}
