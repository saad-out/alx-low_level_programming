#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - create 2 dimensional array of integers
 * @width: array width
 * @height: array height
 * Return: pointer to array | NULL (Failure)
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (0);

	arr = malloc(sizeof(int *) * height);
	if (!arr)
	{
		free(arr);
		return (0);
	}
	i = 0;
	while (i < height)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (!arr[i])
		{
			j = 0;
			while (j < i)
			{
				free(arr[j]);
				j++;
			}
			free(arr);
			return (0);
		}
		i++;
	}
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
			arr[i][j++] = 0;
		i++;
	}
	return (arr);
}
