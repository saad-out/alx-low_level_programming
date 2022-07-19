#include "main.h"

/**
 * _pow_recursion - calculate x raised to the power of y
 * @x: first number to be raised
 * @y: second number (power)
 * Return: integer (x^y)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (!y)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
