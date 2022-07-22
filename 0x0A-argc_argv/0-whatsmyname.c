#include <stdio.h>

/**
 * main - print program name
 * @argc: arguments count
 * @argv: arguments vector (array of strings)
 * Return: always 0
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
