#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints name
 * @name: name to be printed
 * @f: pointer to function to print name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
