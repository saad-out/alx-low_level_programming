#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _myatoi - checks if string is valid positive number
 * @s: string given
 * Return: 1 if valid | 0 if not
 */
int _myatoi(char s[])
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] < 48 || s[i] > 57)
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - adds positive numbers
 * @argc: arguments count
 * @argv: arguments vector (array of strings)
 * Return: 0 (Success) | 1 (Failure)
 */
int main(int argc, char *argv[])
{
	int i, sum;

	i = 1;
	sum = 0;
	while (i < argc)
	{
		if (!(_myatoi(argv[i])))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i++]);
	}
	printf("%d\n", sum);
	return (0);
}
