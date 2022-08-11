#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
  * print_list - print elements of list_t list
  * @h: head node
  * Return: number of nodes
  */
size_t print_list(const list_t *h)
{
	unsigned int size;
	char *s;
	const list_t *tmp;

	tmp = h, size = 0;
	while (tmp)
	{
		if (tmp->str)
			s = tmp->str;
		else
			s = "(nil)";
		printf("[%u] %s\n", tmp->len, s);
		tmp = tmp->next, size++;
	}
	return (size);
}
