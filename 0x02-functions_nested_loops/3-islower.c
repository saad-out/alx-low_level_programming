#include "main.h"

/**
 * _islower - check if char is lowercase or not
 * @c: character to check
 *
 * Return: 1 if is lowercase | 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
