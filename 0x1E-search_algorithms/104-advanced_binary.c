#include <stdio.h>

/**
 * print_array - prints array being searched
 * @array: array
 * @start: starting index
 * @end: ending index
 *
 * Return: void
 */
void print_array(int *array, int start, int end)
{
	int i;

	if (!array || start > end)
		return;

	printf("Searching in array:");
	for (i = start; i <= end; i++)
	{
		printf(" %d", array[i]);
		if (i != end)
			printf(",");
		else
			printf("\n");
	}
}

/**
 * first_value - finds first occurrence of value in array
 * @array: array to search in
 * @value: value to search for
 * @index: current index
 *
 * Return: value's first occurence index
 */
int first_value(int *array, int value, int index)
{
	if (!array)
		return (index);

	if (array[index] != value)
		return (index + 1);
	return (first_value(array, value, index - 1));
}

/**
 * advanced_binary - searches for value using advanced binary search algorithm
 * @array: array to search in
 * @size: array's size
 * @value: value to search for
 *
 * Return: value's index (Exists) | -1 (Not Exists)
 */
int advanced_binary(int *array, size_t size, int value)
{
	int left, right, mid;

	if (!array)
		return (-1);

	left = 0, right = (int)size - 1;
	while (left <= right)
	{
		print_array(array, left, right);

		mid = (left + right) / 2;
		if (array[mid] == value)
			return (first_value(array, value, mid));
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
