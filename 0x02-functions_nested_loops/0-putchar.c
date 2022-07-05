#include "main.h"

/**
 * print_string - print _putchar followed by newline
 *
 * Return: void
 */
void print_string(void)
{
	char s[10] = "_putchar\n";
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
}

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	print_string();
	return (0);
}
