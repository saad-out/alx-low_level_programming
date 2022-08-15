#include <stddef.h>
#include "lists.h"

/**
 * listint_len - count number of elements in a listint_t list
 * @h: head node
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *tmp;
	size_t size;

	tmp = h, size = 0;
	while (tmp)
		size++, tmp = tmp->next;
	return (size);
}
