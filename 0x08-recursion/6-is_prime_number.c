#include "main.h"

/**
 * prime - checks if number is divisible by another
 * @n: given number
 * @x: second number
 * Return: prime (1) or not (0)
 */
int prime(float n, float x)
{
	if (x == n)
		return (1);
	if (n / x == (int)(n / x))
		return (0);
	return (prime(n, x + 1));
}

/**
 * is_prime_number - check if number is prime or not
 * @n: number to be checked
 * Return: prime (1) or not (0)
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	return (prime(n, 2));
}
