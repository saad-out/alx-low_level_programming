#include <stdio.h>

/**
 * main - print from 1 to 100, Fizz\Buzz for muliples of 3\5
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	i = 1;
	while (i < 101)
	{
		if (i % 3 == 0 || i % 5	== 0)
		{
			if (i % 3 == 0)
				printf("Fizz");

			if (i % 5 == 0)
				printf("Buzz");
			if (i != 100)
				putchar(' ');
		}
		else
			printf("%d ", i);
		i++;
	}
	putchar('\n');

	return (0);
}
