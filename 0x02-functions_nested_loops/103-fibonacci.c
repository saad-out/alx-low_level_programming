#include <stdio.h>

/**
 * main - print sum of Fibonacci even values under 4 million
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	unsigned long n1, n2, sum, evens_sum;

	n1 = 1, n2 = 2;
	evens_sum = 2;
	do {
		sum = n1 + n2;
		if (sum % 2 == 0)
			evens_sum += sum;

		n1 = n2;
		n2 = sum;
	} while (sum <= 4000000);
	printf("%lu\n", evens_sum);
	return (0);
}
