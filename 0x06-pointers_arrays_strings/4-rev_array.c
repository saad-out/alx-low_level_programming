#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: given array
 * @n: array's length
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j, box;

	i = 0;
	j = n - 1;
	while (i < j)
	{
		box = a[i];
		a[i] = a[j];
		a[j] = box;
		i++;
		j--;
	}
}
