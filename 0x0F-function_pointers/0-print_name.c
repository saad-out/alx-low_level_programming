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
	int i;
	char *s;

	if (!name || name[0] == '\0')
		return;
	for (i = 0; name[i] != '\0'; i++)

	s = malloc(sizeof(char) * (i + 1));
	if (!s)
		return;
	for (i = 0; name[i] != '\0'; i++)
		s[i] = name[i];
	s[i] = '\0';
	f(s);
}
