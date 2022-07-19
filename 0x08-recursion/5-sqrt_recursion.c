#include "main.h"

/**
 * _sqrt - calculate square root of a number whith recursion
 * @x: number to get it's square root
 * @y: suspected square root
 * Return: int (square root) | if not existing (-1)
 */
int _sqrt(int x, int y)
{
	if (!y)
		return (-1);
	if (y * y == x)
		return (y);
	return (_sqrt(x, y - 1));
}

/**
 * _sqrt_recursion - get square root of a given number
 * @n: given number
 * Return: square root (int) | if not existing (-1)
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	else if (n == 2)
		return (2);
	return (_sqrt(n, n / 2));
}
