#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - perform simple operations on two numbers
 * @argc: arguments count
 * @argv: arguments vector (array of strings)
 * Return: 0 (Success) | anything else (Failure)
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	char c;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	c = argv[2][0];
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((c != '+') && (c != '-') && (c != '*') && (c != '/') && (c != '%'))
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]), b = atoi(argv[3]);
	result = (get_op_func(argv[2]))(a, b);
	printf("%d\n", result);
	return (0);
}
