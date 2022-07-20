#include "main.h"

/**
 * sqqrt - find square root of a given int
 * @n: given int
 * @l: min
 * @r: max
 * Return: int
 */
int sqqrt(float n, float l, float r)
{
	int mid;

	if (!(l <= r))
		return (-1);
	mid = l + (r - l) / 2;
	if (n / mid == mid)
		return (mid);

	if (mid > n / mid)
		r = mid - 1;
	else if (mid < n / mid)
		l = mid + 1;

	return (sqqrt(n, l, r));
}

/**
 * _sqrt_recursion - find square root of given number
 * @n: given number
 * Return: square root | if does not exitst (-1)
 */
int _sqrt_recursion(int n)
{

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqqrt(n, 0, n));
}
