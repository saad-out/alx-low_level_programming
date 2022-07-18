#include "main.h"

/**
 * set_string - set value of pointer to a char
 * @s: pointer to be set
 * @to: char to be set to
 * Return: void
 */
void set_string(char **s, char *to)
{
	(*s) = to;
}
