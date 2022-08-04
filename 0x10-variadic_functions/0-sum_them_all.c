#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - calulate sum of all given parameters
 * @n: first number (number of arguments)
 * Return: sum (int)
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list p;

	va_start(p, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(p, int);
	va_end(p);

	return (sum);
}
