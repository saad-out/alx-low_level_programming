#include "main.h"

/**
 * get_endianness - checks endianness
 *
 * Return: 0 Big Endian | 1 Little Endian
 */
int get_endianness(void)
{
	short i;
	char *endian;

	i = 15;
	endian = (char *)&i;
	if (endian)
		return (1);
	return (0);
}
