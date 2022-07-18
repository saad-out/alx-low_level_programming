#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of the diagonals of a matrix
 * @a: 2D array of integers (Matrix)
 * @size: size of array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum;

	i = 0;
	j = 0;
	sum = 0;
	while (j < size)
	{
		sum += a[i + j];
		i += size;
		j++;
	}
	printf("%d, ", sum);

	i = 0;
	j = size - 1;
	sum = 0;
	while (j >= 0)
	{
		sum += a[i + j];
		i += size;
		j--;
	}
	printf("%d\n", sum);
}
