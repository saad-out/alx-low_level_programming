#include <stdio.h>

/**
 * sum_of_multiples - calculate sum of mutliples of 5 or 3 below 1024
 *
 * Return: sum of multiples
 */
int sum_of_multiples(void)
{
	int i, sum;

	i = 0, sum = 0;
	while (i < 1024)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
		i++;
	}
	return (sum);
}

/**
 * main - print sum of multiples of 5 or 3 below 1024
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	printf("%d\n", sum_of_multiples());
	return (0);
}
