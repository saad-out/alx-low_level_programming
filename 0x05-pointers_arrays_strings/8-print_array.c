#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of an array of integers
 * @a: given array
 * @n: number of elements to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i++]);
		if (i != n)
			printf(", ");
	}
	printf("\n");
}
