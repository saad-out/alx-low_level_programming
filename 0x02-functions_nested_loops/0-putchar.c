#include <stdio.h>
#include "main.h"

/*function prototype*/
void _putchar(char c);

/**
 * my_function - prints string
 * Return: void
 */
void my_function(void)
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
 * Return: always 0 (Success)
 */
int main(void)
{
	my_function();
	return (0);
}
