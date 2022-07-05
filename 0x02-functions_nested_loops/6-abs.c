#include "main.h"

/**
 * _abs - compute absolute value of a number
 * @n: number to check
 *
 * Return: absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}
