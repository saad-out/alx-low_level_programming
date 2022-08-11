#include "lists.h"
#include <stddef.h>

/**
  * list_len - count number of nodes in a list_t
  * @h: head node
  * Return: Length of list_t (number)
  */
size_t list_len(const list_t *h)
{
	unsigned int size;
	const list_t *tmp;

	tmp = h, size = 0;
	while (tmp)
		size++, tmp = tmp->next;
	return (size);
}
