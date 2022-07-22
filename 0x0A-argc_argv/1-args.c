#include <stdio.h>

/**
 * main - print number of arguments passed
 * @argc: arguments count
 * @argv: arguments vector (array of strings)
 * Return: always 0
 */
int main(int argc, __attribute((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
