#include <stdio.h>
#include <stdlib.h>

/**
 * main - print result of multiplication of two given numbers
 * @argc: arguments count
 * @argv: arguments vector (array of strings)
 * Return: 0 (Success) | 1 (Failure)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
