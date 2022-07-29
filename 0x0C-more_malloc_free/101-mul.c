#include <stdlib.h>
#include "main.h"

/**
 * _error - prints error and exit
 * Return: void
 */
void _error(void)
{
	char *s;
	int i;

	s = "Error\n";
	i = 0;
	while (s[i] != '\0')
		_putchar(s[i++]);
	exit(98);
}

/**
 * _strlend - calulate length of string of digits
 * @s: string given
 * Return: length of string (int) (Success) | 98 (Failure) {exit}
 */
int _strlend(char *s)
{
	int i, size;

	i = 0;
	size = 0;
	while (s[i] != '\0')
	{
		if (s[i] < 48 || s[i] > 57)
			_error();
		size++;
		i++;
	}
	return (size);
}

/**
 * product - multiples two strings
 * @s1: first string
 * @s2: second string
 * @size1: size of s1
 * @size2: size of s2
 * Return: array of (s1 * s2)
 */
char *product(char *s1, char *s2, int size1, int size2)
{
	char *s;
	int i, j, *arr;

	arr = malloc(sizeof(int) * (size1 + size2));
	if (!arr)
		_error();
	i = 0;
	while (i < (size2 + size1))
		arr[i++] = 0;
	i = size1 - 1;
	arr[i + (size2 - 1) + 1] = 0;
	while (i >= 0)
	{
		j = size2 - 1;
		while (j >= 0)
		{
			arr[i + j + 1] += (s1[i] - '0') * (s2[j] - '0');
			arr[i + j] += arr[i + j + 1] / 10;
			arr[i + j + 1] %= 10;
			j--;
		}
		i--;
	}
	i = 0;
	while (i < (size1 + size2) && arr[i] == 0)
		i++;
	s = malloc(sizeof(char) * ((size1 + size2) + 1));
	if (!s)
		_error();
	j = 0;
	while (i < (size1 + size2))
		s[j++] = arr[i++] + '0';
	s[j] = '\0';
	free(arr);
	return (s);
}

/**
 * leading_0 - check for leading zeros
 * @s: given string
 * Return: new length (int)
 */
int leading_0(char *s)
{
	int i;

	i = 0;
	while (s[0] != '\0')
	{
		if (s[0] != '0')
			break;
		i++;
		s++;
	}
	return (i);
}

/**
 * main - printf product of two numbers
 * @argc: arguments count
 * @argv: arguments vector (array of strings)
 * Return: 0 (Success) | 98 (Failure)
 */
int main(int argc, char *argv[])
{
	int s1, s2, i;
	char *s;

	if (argc != 3)
		_error();
	argv[1] += leading_0(argv[1]), argv[2] += leading_0(argv[2]);
	s1 = _strlend(argv[1]), s2 = _strlend(argv[2]);
	if (!s1 || !s2)
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}

	s = product(argv[1], argv[2], s1, s2);
	i = 0;
	while (s[i] != '\0')
		_putchar(s[i++]);
	_putchar('\n');
	free(s);
	return (0);
}
