#include <stdio.h>

/**
 * main - print all arguments received
 * @argc: arguments count
 * @argv: argumnets vector (array of strings)
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
		printf("%s\n", argv[i++]);
	return (0);
}
