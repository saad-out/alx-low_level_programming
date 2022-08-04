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
	char *s;

	va_start(p, n);
	i = 0;
	while (i < n)
	{
		s = va_arg(p, char *);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");
		i++;
		if (separator && (i != n))
			printf("%s", separator);
	}
	printf("\n");
	va_end(p);
}
