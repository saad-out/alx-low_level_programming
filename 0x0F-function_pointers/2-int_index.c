#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: array to be searched
 * @size: array size
 * @cmp: function to compare two integers
 * Return: index of integer if found | -1 if not
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
