#include <stddef.h>
#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of a listint_t list
 * @h: head node
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *tmp;
	size_t size;

	tmp = h, size = 0;
	while (tmp)
	{
		printf("%d\n", tmp->n);
		size++;
		tmp = tmp->next;
	}
	return (size);
}
