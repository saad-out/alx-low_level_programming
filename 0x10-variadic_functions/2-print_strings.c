#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings followed by newline
 * @separator: string to separate strings
 * @n: number of strings passed
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(p, char *));
		if (separator && i != (n - 1))
			printf("%s", separator);
		else if (separator || (i == (n - 1)))
			printf("\n");
	}
	va_end(p);
}
